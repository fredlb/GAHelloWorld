#include <iostream>

#include "gtest/gtest.h"
#include "../src/Chromosome.h"
#include "../src/Population.h"

/* *
* Test class for Chromosome
*/
class ChromosomeTest : public ::testing::Test {
protected:
	ChromosomeTest() {

	}

	virtual ~ChromosomeTest() {

	}

	virtual void SetUp() {

	}

	virtual void TearDown() {

	}

	Chromosome c;
};

TEST_F(ChromosomeTest, TestClassFunction) {
	EXPECT_EQ(1,c.GetFitness());
}