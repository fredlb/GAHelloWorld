#include "Chromosome.h"

const char Chromosome::TARGET_[] = "Hello, world!";

Chromosome::Chromosome() {
	gene_code_ = "blargh";
	fitness_ = 9999;
}

Chromosome::Chromosome(std::string code) {
	gene_code_ = code;
	fitness_ = CalculateFitness(code);
}


std::string Chromosome::GetGene() {
	return gene_code_;
}

unsigned int Chromosome::GetFitness() {
	return fitness_;
}

unsigned int Chromosome::CalculateFitness(std::string code) {
	return 0;
}