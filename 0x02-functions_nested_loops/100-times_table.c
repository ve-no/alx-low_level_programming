#include "main.h"

/**
* print_times_table - prints the n times table, starting with 0
* @n: number of the times table
*/
void print_times_table(int n)
{
	int i, j, k;
	for(i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			if(j != n)
			{
				if(k < 10)
					printf("%d,   ", k);
				else if(k < 100)
					printf("%d,  ", k);
				else
					printf("%d, ", k);
			}
			else
				printf("%d", k);
		}
		printf("\n");
	}
}
