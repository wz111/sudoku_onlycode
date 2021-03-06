#pragma once
#include "set"
#include "string"
#ifndef ENDPRODUCER_H_
#define ENDPRODUCER_H_
#define MAX_NUM_ROWSUB 72
#define NUM_POINT 81
#define NUM_ROW 9
#define Type123 1
#define Type456 4
#define Type789 7
#define Check true
#define NotCheck false

using namespace std;

class EndProducer
{
private:
	int _ancestorMartix[NUM_POINT] =
	{ 9,4,1,2,8,3,6,7,5,
		3,7,2,5,6,1,8,9,4,
		8,5,6,7,4,9,1,2,3,
		2,6,4,1,5,7,3,8,9,
		1,9,5,8,3,4,7,6,2,
		7,8,3,6,9,2,5,4,1,
		5,2,7,9,1,8,4,3,6,
		4,1,9,3,7,6,2,5,8,
		6,3,8,4,2,5,9,1,7
	};
	int _originalMartix[NUM_POINT] = {0};
	int _seed[NUM_ROW] = { 2,4,5,6,1,8,7,3,9 };
	int _initialSeed[NUM_ROW] = { 0 };
	int Nums;
	set<string> endSet;

public:
	EndProducer(int Nums);
	~EndProducer();
	void RowSwap(int* srcMartix, int Type, int* rank);
	void SudokuCheck(char temp[]);
	int getendSetNum();

	int* getInitialSeed();
	void SeedInitialRandom();
	void IndexSubstitution(int* seed, int* a, int* b, int len);
	void MainOperation(bool checkOption);
	bool DuplicateCheck(int* a, int aim, int count);
	void Swap(int* a, int* b);

};

#endif