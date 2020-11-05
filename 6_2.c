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

void summa_k(int a[], int n){
	int k=0;
	for (int i = 0; i < n; i++)
	{
		if (a[i]==0)
		{
			k++;
		}
	}
	printf("\n\n 1) Кількість нульових елементів масиву: %d\n", k);
}

void dobutok(int a[], int n){
	int d = 1;
	int max=a[0];
	int max_i = 0;
	for (int i = 0; i < n; i++)
	{
		if (abs(a[i]) > abs(max))
		{
			max = a[i];
			max_i = i;
		}
	}

	if (max_i == n)
	{
		printf("\n 2) Максимальний за модулем елемент останній в масиві\n\n");
		return;
	}

	for (int i = max_i; i < n; i++)
	{
		d *= a[i];
	}

	printf("\n 2) добуток елементів масиву, розташованих після максимального за модулем елемента: %d\n\n", d);
}

int main(void) {

	int n;
	printf("\nВведіть розмір масиву: ");
	scanf("%d", &n);

	int	a[n];

	rand(a, n);
	printf(a, n);
	summa_k(a, n);
	dobutok(a, n);

return 0;
}
