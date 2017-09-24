#pragma once
#ifndef ENDPRODUCER_H_
#define ENDPRODUCER_H_
#define MAX_NUM_ROWSUB 72
#define NUM_POINT 81
#define NUM_ROW 9

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

public:
	EndProducer(int Nums);
	~EndProducer();
	int* Row123(int* a);
	int* Row132(int* a);

	int* Row456(int* a);
	int* Row465(int* a);
	int* Row546(int* a);
	int* Row564(int* a);
	int* Row645(int* a);
	int* Row654(int* a);

	int* Row789(int* a);
	int* Row798(int* a);
	int* Row879(int* a);
	int* Row897(int* a);
	int* Row978(int* a);
	int* Row987(int* a);

	void SeedInitialRandom();
	void IndexSubstitution(int* seed, int* a, int* b);
	void MainOperation();
	bool DuplicateCheck(int* a, int aim, int count);
	void Swap(int* a, int* b);

};

#endif