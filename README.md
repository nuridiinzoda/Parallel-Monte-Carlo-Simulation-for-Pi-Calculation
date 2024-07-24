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

Number of Points  	  Serial Pi Estimate  	  Efficiency  	  Parallel Pi Estimate 	  Efficiency
1,000             	  3.12                	  99.327%     	  3.128                	  99.6687%
10,000            	  3.1356              	  99.8092%    	  3.136                	  99.6055%
100,000           	  3.13236             	  99.7061%    	  3.14192              	  99.9896%
1,000,000         	  3.13956             	  99.9352%    	  3.14291              	  99.9581%
![image](https://github.com/user-attachments/assets/1b03769a-e13a-4934-8215-96feaf7a8648)

