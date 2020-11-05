#include <stdio.h>
#include <time.h>
#include <stdlib.h>
const int n = 3, m = 4;
const int Low = -100, High = 100;

void scan_massiv(int n, int m, int a[][4]);
void printf_massiv(int n, int m, int a[][4]);
void sort_massiv(int n, int m, int a[][4]);

int main(void) {
	
	int a[n][m];

	scan_massiv(3, 4, a);

	printf("\nМасив:\n\n");
	printf_massiv(3, 4, a);

	sort_massiv(3, 4, a);

	printf("\n\n\nКожен стовпчик вiдсортований по спаданню значень елементiв:\n\n");
	printf_massiv(3, 4, a);
	
	return 0;
}



void scan_massiv(int n, int m, int a[][4])
{
	srand(time(0));
	for (int i = 0; i < n; i++)
	for (int j = 0; j < m; j++)
	{
		a[i][j] = Low+rand()%(High - Low + 1);
	}printf("\n");
}

void printf_massiv(int n, int m, int a[][4])
{
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++)
		{
			printf("a[%d][%d] = %d\t", i, j, a[i][j]);
		}
	printf("\n");
	}
}

void sort_massiv(int n, int m, int a[][4])
{
	int tmp;
	for (int k = 0; k < n*m; k++)
	{
		for (int j = 0; j < m; j++)
		{	
			for (int i = 1; i < n; i++)
			{	
				if (a[i][j] > a[i-1][j])
				{
					tmp = a[i][j];
					a[i][j] = a[i-1][j];
					a[i-1][j] = tmp;
				}
			}
		}
	}
}
