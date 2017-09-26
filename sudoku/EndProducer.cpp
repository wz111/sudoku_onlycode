#include "stdafx.h"
#include "EndProducer.h"
#include "stdlib.h"
#include "time.h"
#include "algorithm"
#include "iostream"
#include "fstream"

using namespace std;

EndProducer::EndProducer(int Nums)
{
	this->Nums = Nums;
}


EndProducer::~EndProducer()
{
	;
}

void EndProducer::Swap(int* a, int* b) 
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

bool EndProducer::DuplicateCheck(int* a, int aim, int count) 
{
	int i = 0;
	for(i = 0 ; i < count ; i++)
	{
		if (a[i] == aim)
			return true;
	}
	return false;
}

int* EndProducer::getInitialSeed() 
{
	return _initialSeed;
}

int* EndProducer::Row123(int* a)
{
	return a;
}

int* EndProducer::Row132(int* a)
{
	int top = (2 - 1)*NUM_ROW;
	int end = (3 - 1)*NUM_ROW;
	for (int i = 0; i < NUM_ROW; i++) {
		Swap(&a[top+i], &a[end+i]);
	}
	return a;
}

int* EndProducer::Row456(int* a)
{
	return a;
}

int* EndProducer::Row465(int* a)
{
	int top = (5 - 1)*NUM_ROW;
	int end = (6 - 1)*NUM_ROW;

	for (int i = 0; i < NUM_ROW; i++) {
		Swap(&a[top + i], &a[end + i]);
	}
	return a;
}

int* EndProducer::Row546(int* a)
{
	int top = (4 - 1)*NUM_ROW;
	int end = (5 - 1)*NUM_ROW;

	for (int i = 0; i < NUM_ROW; i++) {
		Swap(&a[top + i], &a[end + i]);
	}
	return a;
}

int* EndProducer::Row564(int* a)
{
	int top = (4 - 1)*NUM_ROW;
	int end = (5 - 1)*NUM_ROW;

	for (int i = 0; i < NUM_ROW; i++) {
		Swap(&a[top + i], &a[end + i]);
	}
	top = (5 - 1)*NUM_ROW;
	end = (6 - 1)*NUM_ROW;

	for (int i = 0; i < NUM_ROW; i++) {
		Swap(&a[top + i], &a[end + i]);
	}
	return a;
}

int* EndProducer::Row645(int* a)
{
	int top = (4 - 1)*NUM_ROW;
	int end = (6 - 1)*NUM_ROW;

	for (int i = 0; i < NUM_ROW; i++) {
		Swap(&a[top + i], &a[end + i]);
	}
	top = (5 - 1)*NUM_ROW;
	end = (6 - 1)*NUM_ROW;

	for (int i = 0; i < NUM_ROW; i++) {
		Swap(&a[top + i], &a[end + i]);
	}
	return a;
}

int* EndProducer::Row654(int* a)
{
	int top = (4 - 1)*NUM_ROW;
	int end = (6 - 1)*NUM_ROW;

	for (int i = 0; i < NUM_ROW; i++) {
		Swap(&a[top + i], &a[end + i]);
	}
	return a;
}

int* EndProducer::Row789(int* a)
{
	return a;
}

int* EndProducer::Row798(int* a)
{
	int top = (8 - 1)*NUM_ROW;
	int end = (9 - 1)*NUM_ROW;

	for (int i = 0; i < NUM_ROW; i++) {
		Swap(&a[top + i], &a[end + i]);
	}
	return a;
}

int* EndProducer::Row879(int* a)
{
	int top = (7 - 1)*NUM_ROW;
	int end = (8 - 1)*NUM_ROW;

	for (int i = 0; i < NUM_ROW; i++) {
		Swap(&a[top + i], &a[end + i]);
	}
	return a;
}

int* EndProducer::Row897(int* a)
{
	int top = (7 - 1)*NUM_ROW;
	int end = (8 - 1)*NUM_ROW;

	for (int i = 0; i < NUM_ROW; i++) {
		Swap(&a[top + i], &a[end + i]);
	}
	top = (8 - 1)*NUM_ROW;
	end = (9 - 1)*NUM_ROW;

	for (int i = 0; i < NUM_ROW; i++) {
		Swap(&a[top + i], &a[end + i]);
	}
	return a;
}

int* EndProducer::Row978(int* a)
{
	int top = (7 - 1)*NUM_ROW;
	int end = (9 - 1)*NUM_ROW;

	for (int i = 0; i < NUM_ROW; i++) {
		Swap(&a[top + i], &a[end + i]);
	}
	top = (8 - 1)*NUM_ROW;
	end = (9 - 1)*NUM_ROW;

	for (int i = 0; i < NUM_ROW; i++) {
		Swap(&a[top + i], &a[end + i]);
	}
	return a;
}

int* EndProducer::Row987(int* a)
{
	int top = (7 - 1)*NUM_ROW;
	int end = (9 - 1)*NUM_ROW;

	for (int i = 0; i < NUM_ROW; i++) {
		Swap(&a[top + i], &a[end + i]);
	}
    return a;
}

void EndProducer::IndexSubstitution(int* seed, int* a, int* b, int len)
{    
	int i;
	//int result[81] = { 0 };
    for( i = 0 ; i < len ; i++ )
	{
		int temp = a[i];
		b[i] = seed[temp - 1];
	}
}

void EndProducer::SeedInitialRandom() 
{
	int i;
	_initialSeed[8] = 9;
	srand((unsigned)time(NULL));
	for (i = 0 ; i < 8 ; i++) 
	{
		int b = (rand() % 8) + 1;
		if(DuplicateCheck(_initialSeed, b, i))
		{
			i--;
			continue;
		}
		else
		{
			_initialSeed[i] = b;
		}
	}
	//return _initialSeed;
}

/*
void EndProducer::SetOriginMartix(int* seed)
//$todo: Sorting out the logic of two-dimensional arrays and double pointers(2017/09/22 01:34:36)
{
	_originalMartix = IndexSubstitution(seed, _ancestorMartix);
}
*/

void EndProducer::MainOperation()
{
	int* OriMartixCopy = NULL;
	int* MiddleMartix1 = NULL;
	int* MiddleMartix2 = NULL;
	int* EndMartix = NULL;
	int palaceVary1 = 0;
	int palaceVary2 = 0;
	int palaceVary3 = 0;
	int param = 0;
	int martixCount = 0;
	
	FILE* outfile;
	errno_t err;
	
	if ((err = fopen_s(&outfile, "sudoku.txt", "w")) != 0)
	{
		printf("Unable to open sudoku.txt\n");
		exit(1);
	}
	
	/*
	ofstream out;
	out.open("sudoku.txt");
	*/
	SeedInitialRandom();
	IndexSubstitution(_initialSeed, _ancestorMartix, _originalMartix, NUM_POINT);
	//_originalMartix = _ancestorMartix;
	
	do 
	{
		//OriMartixCopy = _originalMartix;
		int paramArray[MAX_NUM_ROWSUB] = { 0 };
		int count = 0;
		int* OriMarRowCopy;
		OriMartixCopy = _originalMartix;
		IndexSubstitution(_seed, OriMartixCopy, OriMartixCopy, NUM_POINT);
		//$to do: figure out the reason of the srand() cost tooooooooo much time!!!
		srand((unsigned)time(NULL));

		for (int i = 0; i < MAX_NUM_ROWSUB && martixCount < Nums ; i++) 
		{
			OriMarRowCopy = OriMartixCopy;
			palaceVary1 = (rand() % 2) + 1;
			palaceVary2 = (rand() % 6) + 1;
			palaceVary3 = (rand() % 6) + 1;
			param = palaceVary1 * 100 + palaceVary2 * 10 + palaceVary3;
			if(!DuplicateCheck(paramArray, param, count))
			{
				paramArray[count++] = param;
			}
			else 
			{
				i--;
				continue;
			}
			switch (palaceVary1)
			{
			case 1:
				MiddleMartix1 = Row123(OriMarRowCopy);
				break;
			case 2:
				MiddleMartix1 = Row132(OriMarRowCopy);
				break;
			default:
				cout << "Error1" << endl;
				break;
			}
			switch (palaceVary2)
			{
			case 1:
				MiddleMartix2 = Row456(MiddleMartix1);
				break;
			case 2:
				MiddleMartix2 = Row465(MiddleMartix1);
				break;
			case 3:
				MiddleMartix2 = Row546(MiddleMartix1);
				break;
			case 4:
				MiddleMartix2 = Row564(MiddleMartix1);
				break; 
			case 5:
				MiddleMartix2 = Row645(MiddleMartix1);
				break;
			case 6:
				MiddleMartix2 = Row654(MiddleMartix1);
				break;
			default:
				cout << "Error2" << endl;
				break;
			}
			switch (palaceVary3)
			{
			case 1:
				EndMartix = Row789(MiddleMartix2);
				break;
			case 2:
				EndMartix = Row798(MiddleMartix2);
				break;
			case 3:
				EndMartix = Row879(MiddleMartix2);
				break;
			case 4:
				EndMartix = Row897(MiddleMartix2);
				break;
			case 5:
				EndMartix = Row978(MiddleMartix2);
				break;
			case 6:
				EndMartix = Row987(MiddleMartix2);
				break;
			default:
				cout << "Error3" << endl;
				break;
			}

			int m = 0;
			char temp[325];
			for(int j = 0 ; j < NUM_POINT ; j++, m+=2)
			{
				temp[m] = EndMartix[j] + '0';
				if ((j + 1) % 9 == 0) 
				{
					temp[m + 1] = '\n';
					continue;
				}
				temp[m + 1] = ' ';
			}
			temp[m] = '\n';
			temp[m + 1] = '\0';
			fputs(temp, outfile);
			/*for(int j = 0;j<NUM_POINT;j++)
			{
				out << EndMartix[j];
				if ((j + 1) % 9 == 0) 
				{
					out << "\n";
					continue;
				}
				if (j < NUM_POINT) 
				{
					out << ' ';
				}
				out << '\n';
			}*/
			martixCount++;
		}
	} while (next_permutation(_seed, _seed + 8) && martixCount < Nums );
	//fclose(outfile);

}
