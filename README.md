 # Monte Carlo Simulation for Pi Estimation

This project implements a Monte Carlo simulation to estimate the value of Pi using both serial and parallel approaches. The parallel version utilizes OpenMP to leverage multiple CPU cores, enhancing performance.

## Key Features

- **Serial Implementation**: A straightforward approach to estimate Pi using random sampling.
- **Parallel Implementation**: An optimized version that employs OpenMP for parallel processing.
- **Performance Measurement**: Analyze and compare Pi estimate for different and point samples.

## Ensure thread safety when updating shared variables.
Thread safety is ensured by using OpenMP’s reduction clause. The clause reduction(+:inside_circle) ensures that each thread maintains its own local copy of the variable inside_circle, and at the end of the parallel region, these local copies are combined in a thread-safe manner to update the global inside_circle.

## Run the simulation with different numbers of points and threads to analyse the performance.
## Compare the accuracy and performance of the parallel implementation with the serial one:


