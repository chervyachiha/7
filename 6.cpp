#include <iostream>
#include "Func.hpp"

int main()
{
	int matrix[100][100];
	int n;
	std::cin >> n;
	lab::in(matrix, n);
	int minimal = 0;
	int prosto = 0;
	int k = 1000000;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (matrix[i][j] < k)
				k = matrix[i][j];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			if (matrix[i][j] == k)
				minimal += 1;
			if (lab::isPrime(matrix[i][j]))
				prosto += 1;
		}
	if (minimal == 2 && prosto > 2)
	{
		for (int i=0;i<n-1;i++)
			for (int j = i + 1; j < n; j++)
			{
				int g = lab::prois(matrix[i], n);
				int l = lab::prois(matrix[j], n);
				if (g > l)
					std::swap(matrix[i], matrix[j]);
			}
	}
	lab::out(matrix, n);
}