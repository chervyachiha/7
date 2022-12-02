#include <iostream>
#include "Func.hpp"

namespace lab
{
	void in(int mas[100][100], int n)
	{
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				std::cin >> mas[i][j];
	}

	void out(int mas[100][100], int n)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				std::cout << mas[i][j] << " ";
			std::cout << std::endl;
		}
	}

	bool isPrime(int x)
	{
		if (x < 2)
			return false;
		for (int d = 2; d <= sqrt(x); d++)
		{
			if (x % d == 0)
				return false;
		}
		return true;
	}
	
	int prois(int mas[100], int n)
	{
		int p = 1;
		for (int i=0; i < n; i++)
			p *= mas[i];
		return p;
	}
}
