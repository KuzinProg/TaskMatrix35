#include<iostream>
int matrix(int** matr, int N, int M)
{
	int Check = true;
	for(int j=0;j<M;j++)
	{
		int Check = true;
		for(int i =0;i<N;i++)
		{
			if (matr[i][j] % 2 == 0)
			{
				Check == false;
			}
		}
		if (Check == true)
		{
			return j;
		}
	}
		return 0;
}
void Test1()
{
	int N = 3, M = 3;
	int** matr = new int*[3];
	for (int i = 0; i < 3; i++)
	{
		matr[i] = new int[3];
	}
	matr[0][0] = 2; matr[0][1] = 4; matr[0][2] = 6;
	matr[1][0] = 2; matr[1][1] = 4; matr[1][2] = 6;
	matr[2][0] = 2; matr[2][1] = 4; matr[2][2] = 6;
	int expectdRes = 0;
	if (expectdRes == matrix(matr,N,M))
	{
		std::cout << "Test1: Succes";
	}
	else 
	{
		std::cout << "Test1: Fail";
	}
	std::cout << "\n";
}
void Test2()
{
	int N = 3, M = 3;
	int** matr = new int* [3];
	for (int i = 0; i < 3; i++)
	{
		matr[i] = new int[3];
	}
	matr[0][0] = 1; matr[0][1] = 4; matr[0][2] = 6;
	matr[1][0] = 1; matr[1][1] = 4; matr[1][2] = 6;
	matr[2][0] = 1; matr[2][1] = 4; matr[2][2] = 6;
	int expectdRes = 1;
	if (expectdRes == matrix(matr,N,M))
	{
		std::cout << "Test2: Succes";
	}
	else
	{
		std::cout << "Test2: Fail";
	}
	std::cout << "\n";
}
void Test3()
{
	int N = 3, M = 3;
	int** matr = new int* [3];
	for (int i = 0; i < 3; i++)
	{
		matr[i] = new int[3];
	}
	matr[0][0] = 4; matr[0][1] = 1; matr[0][2] = 3;
	matr[1][0] = 4; matr[1][1] = 1; matr[1][2] = 3;
	matr[2][0] = 4; matr[2][1] = 1; matr[2][2] = 3;
	int expectdRes = 1;
	if (expectdRes == matrix(matr,N,M))
	{
		std::cout << "Test3: Succes";
	}
	else
	{
		std::cout << "Test3: Fail";
	}
}
int main()
{
	Test1();
	Test2();
	Test3();
	
}