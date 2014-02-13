#include "Population.h"


Population::Population(int size, float crossover_ratio, float elitism_ratio,
					   float mutation_rate) {
	crossover_ = crossover_ratio;
	elitism_ = elitism_ratio;
	mutation_ = mutation_rate;

	chromosome_population_.resize(size);

	for(int i = 0; i < size; ++i)
	{
		//chromosome_population_[i] = randomchromosome;
	}

	//sort chromosomes
}


Population::~Population(void)
{
}
