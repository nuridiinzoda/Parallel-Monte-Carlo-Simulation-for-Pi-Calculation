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

Number of points	Estimated Pi (Serial)	Efficiency	Time taken
1000	3.184	98.6501%	0.284 ms
10000	3.1392	99.9238%	3.096 ms
100000	3.13752	99.8704%	25.619 ms
1000000	3.13943	99.9311%	127.049 ms
10000000	3.14148	99.9963%	975.967 ms
 
Number of points	Number of Threads	Estimated Pi (Parallel)	Efficiency	Time taken
1000	2	3.16	99.4141%	3.03 
10000	4	3.1612	99.3759%	5.76 
100000	6	3.1364	99.8347%	15.91 
1000000	8	3.13854	99.9027%	103.25 
10000000	10	3.14094	99.9792%	506.79 
![image](https://github.com/user-attachments/assets/9a1275d4-c451-4e44-916a-123ef851d85e)

