#ifndef CHROMOSOME_H
#define CHROMOSOME_H

#include <iostream>
#include <string>

class Chromosome
{
private:
	std::string gene_code_;
	unsigned int fitness_;
	static const char TARGET_[];
	unsigned int CalculateFitness(std::string gene_code);

public:
	Chromosome(std::string gene_code);
	Chromosome();

	std::string GetGene();
	unsigned int GetFitness();
	static bool Equals();
};

#endif // CHROMOSOME_H
