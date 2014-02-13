// GAHelloWorld.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"

#include <ctime>
#include "Chromosome.h"
#include <iostream>
int main()
{
	const int population_size = 2048;
	const int max_generations = 16384;
	const float crossover_ratio = 0.8f;
	const float elitism_ratio = 0.1f;
	const float mutation_ratio = 0.03f;
	std::clock_t start_time;
	start_time = std::clock();
	Chromosome c;

	std::cout << c.GetFitness() << std::endl;
	return 0;
}

