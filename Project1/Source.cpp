#include <stdio.h>
#include <conio.h>

#define NMAX 100

int main()
{
	int A[NMAX];

	int n, i, j;

	printf_s("Nhap so luong phan tu cua day so, N = ");
	scanf_s("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf_s("Phan tu thu: %d = ", i + 1);
		scanf_s("%d", &A[i]);
	}

	j = 1;
	for (i = 1; i < n; i++)
	{
		if (A[i] > A[j])
		{
			j = i;
		}
	}
	printf_s("Chi so: %d Gia tri: %d", j, A[j]);

	_getch();
	return 0;
}