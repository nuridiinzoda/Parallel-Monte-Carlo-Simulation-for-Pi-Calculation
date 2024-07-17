# Parallel Monte Carlo Simulation for Pi Calculation
 
# Monte Carlo Simulation for Pi Estimation

This project implements a Monte Carlo simulation to estimate the value of Pi using both serial and parallel approaches. The parallel version utilizes OpenMP to leverage multiple CPU cores, enhancing performance.

## Key Features

- **Serial Implementation**: A straightforward approach to estimate Pi using random sampling.
- **Parallel Implementation**: An optimized version that employs OpenMP for parallel processing.
- **Performance Measurement**: Analyze and compare execution times for different thread counts and point samples.

## Learning Outcomes

- Understanding random number generation and statistical estimation.
- Managing shared variables and ensuring thread safety in parallel programming.
- Techniques for performance tuning in simulations.

## Getting Started

### Prerequisites

- C compiler (e.g., `gcc`) with OpenMP support.
- Basic understanding of C programming and parallel computing concepts.

### Installation

Clone the repository:

```bash
git clone https://github.com/yourusername/monte-carlo-pi.git
cd monte-carlo-pi
