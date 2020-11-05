#include <stdio.h>
#include <stdlib.h>
#include <time.h>
const int Low = -100, High = 100;

void rand(int a[], int n)
{
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		a[i] = Low+rand()%(High - Low + 1);
	}
}

void printf(int a[], int n)
{
	printf("\n\nВведений масив:\n");

	for (int i = 0; i < n; i++)
	{
		printf("\na[%d] = %d", i , a[i]);
	}
	printf("\n");
}

void ser(int a[], int n){
	int k=0;
	int summ = 0;
	double result = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i]%2 == 0)
		{
			summ += i;
			k++;
		}
	}

	if (k == 0)
		{
			printf("\n\n Немає парних елементів\n\n");
		} else { result = (double)summ/k;
				printf("\n\n Cереднє арифметичне індексів парних елементів: %.2lf\n\n", result);
				}
}		

int main(void) {

	int n;
	printf("\nВведіть розмір масиву: ");
	scanf("%d", &n);

	int	a[n];

	rand(a, n);
	printf(a, n);
	ser(a, n);
return 0;
}
