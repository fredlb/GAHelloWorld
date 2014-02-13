#pragma once
#include "Chromosome.h"
#include <vector>

class Population
{
private:
	const static int TOURNAMENT_SIZE_ = 3;

	float elitism_;
	float mutation_;
	float crossover_;

	std::vector<Chromosome> chromosome_population_;
	std::vector<Chromosome> SelectParents();
public:
	Population(int size, float crossover_ratio, float elitism_ratio,
				float mutation_rate);
	~Population(void);

	void Evolve();
	std::vector<Chromosome> GetChromosome();
	float GetElitism();
	float GetCrossover();
	float GetMutation();
};

