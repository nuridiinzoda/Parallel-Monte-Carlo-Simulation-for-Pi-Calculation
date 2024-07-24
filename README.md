 # Monte Carlo Simulation for Pi Estimation

This project implements a Monte Carlo simulation to estimate the value of Pi using both serial and parallel approaches. The parallel version utilizes OpenMP to leverage multiple CPU cores, enhancing performance.

## Key Features

- **Serial Implementation**: A straightforward approach to estimate Pi using random sampling.
- **Parallel Implementation**: An optimized version that employs OpenMP for parallel processing.
- **Performance Measurement**: Analyze and compare Pi estimate for different and point samples.

## Ensure thread safety when updating shared variables.
Thread safety is ensured by using OpenMP’s reduction clause. The clause reduction(+:inside_circle) ensures that each thread maintains its own local copy of the variable inside_circle, and at the end of the parallel region, these local copies are combined in a thread-safe manner to update the global inside_circle.


## Compare the accuracy and performance of the parallel implementation with the serial one.
Collect the efficiency for both serial and parallel implementations. Compare the results to see the  accuracy of the parallel version compared to the serial version. Here’s an comparison:

Number of points	Estimated Pi (Serial)	Efficiency	Time taken	Estimated Pi (Parallel)	Efficiency	Time taken
1000	3.144	99.9234%	0.243902 ms	3.176	99.6947%	0.066995 ms
10000	3.1408	99.9748%	2.41399 ms	3.1444	99.9106%	0.686169 ms
100000	3.13612	99.8258%	20.376 ms	3.13328	99.7354%	6.53291 ms
1000000	3.13934	99.9284%	111.456 ms	3.13927	99.926%	45.1601 ms
10000000	3.14193	99.9891%	832.077 ms	3.14107	99.9835%	247.499 ms
![image](https://github.com/user-attachments/assets/9d4e00b8-24f3-4326-b55f-4f80797030f0)


