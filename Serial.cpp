#include <iostream>    // Use iostream instead of stdio.h
#include <omp.h>
#include <cmath>       // Use cmath instead of math.h
#include <random>      // Include for C++ random number generation

#define REAL_PI 3.141592653589793

int main() {
    long num_points;

    std::cout << "Enter the number of points: ";
    std::cin >> num_points;

    long inside_circle = 0;

    std::random_device rd;  // Obtain a random number from hardware
    std::mt19937 gen(rd()); // Seed the generator
    std::uniform_real_distribution<> dis(0.0, 1.0); // Define the range

    double start_time = omp_get_wtime(); // Using omp_get_wtime for consistency

    for (long i = 0; i < num_points; i++) {
        double x = dis(gen);
        double y = dis(gen);
        if (x * x + y * y <= 1.0) {
            inside_circle++;
        }
    }

    double end_time = omp_get_wtime();
    double time_taken_ms = (end_time - start_time) * 1000.0;

    double pi_estimate = 4.0 * static_cast<double>(inside_circle) / static_cast<double>(num_points);
    double efficiency = 100.0 - std::fabs(pi_estimate - REAL_PI) / REAL_PI * 100;

    std::cout << "Estimated Pi : " << pi_estimate << std::endl;
    std::cout << "Time taken : " << time_taken_ms << " ms" << std::endl;
    std::cout << "Efficiency : " << efficiency << "%" << std::endl;

    return 0;
}


