#include <iostream>
#include <cmath>
#include <omp.h>
#include <random>

#define REAL_PI 3.141592653589793

int main() {
    long num_points;

    std::cout << "Enter the number of points: ";
    std::cin >> num_points;

    long inside_circle = 0;
    double start_time = omp_get_wtime();

    // Use OpenMP to parallelize the point generation and counting
#pragma omp parallel
    {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_real_distribution<> dis(0.0, 1.0);

        long local_inside_circle = 0;

#pragma omp for reduction(+:inside_circle) schedule(static)
        for (long i = 0; i < num_points; ++i) {
            double x = dis(gen);
            double y = dis(gen);
            if (x * x + y * y <= 1.0) {
                local_inside_circle++;
            }
        }

        // Use reduction to combine local results into the global counter
        inside_circle += local_inside_circle;
    }

    double end_time = omp_get_wtime();
    double time_taken_ms = (end_time - start_time) * 1000.0;

    double pi_estimate = 4.0 * static_cast<double>(inside_circle) / static_cast<double>(num_points);
    double efficiency = 100.0 - (std::fabs(pi_estimate - REAL_PI) / REAL_PI * 100);

    std::cout << "Estimated Pi: " << pi_estimate << std::endl;
    std::cout << "Number of threads used: " << omp_get_max_threads() << std::endl;
    std::cout << "Time taken: " << time_taken_ms << " ms" << std::endl;
    std::cout << "Efficiency: " << efficiency << "%" << std::endl;

    return 0;
}