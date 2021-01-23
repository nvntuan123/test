/*Bài 6 : Viết chương trình tạo mảng 1 chiều a gồm 20 phần tử. Mỗi phần tử mang giá trị ngẫu nhiên thuộc (-10, 10). Sắp xếp mảng theo thứ tự tăng dần của các phần tử. Hiển thị mảng sau khi sắp xếp ra màn hình.*/

#include <stdio.h>
#include <conio.h>
#include <Windows.h> // Hàm Tạo Số Ngẫu Nhiên.
#include <time.h> // Time(NULL).

void arrayInputRandom(int[], int);
void arrayOutput(int[], int);
void SWAP(int*, int*);
void arrayInterchangeSort(int[], int);

int main()
{
	int ILength = 20;
	int IArrStatic[100];

	arrayInputRandom(IArrStatic, ILength);
	printf_s("Mang sau khi tao so ngau nhien: ");
	arrayOutput(IArrStatic, ILength);

	arrayInterchangeSort(IArrStatic, ILength);
	printf_s("Mang sau khi sap xep tang dan: ");
	arrayOutput(IArrStatic, ILength);

	_getch();
	return 0;
}

void arrayInputRandom(int IArr[], int ILength)
{
	srand(time(NULL)); // Reset thời gian.
	for (int i = 0; i < ILength; i++)
	{
		/*
			* Công thức random: muốn random trong từ a -> b
			* rand() % (b - a + 1) + a <=> a + rand() % (b - a + 1)
			* Giả sử em tạo số ngẫu nhiên trong đoạn từ -10 -> 10
			* a = -10, b = 10
			* => rand() % (10 - (-10) + 1) + 1 = rand() % 21 + 1
			* or 1 + rand() % 21
			*/
		IArr[i] = rand() % 21 + 1;
	}
}

void arrayOutput(int IArr[], int ILength)
{
	for (int i = 0; i < ILength; i++)
	{
		printf_s("%d ", IArr[i]);
	}
	printf_s("\n");
}

void SWAP(int* IA, int* IB)
{
	int ITemp = *IA;
	*IA = *IB;
	*IB = ITemp;
}

void arrayInterchangeSort(int IArr[], int ILength)
{
	for (int i = 0; i < ILength - 1; ++i)
	{
		for (int j = i + 1; j < ILength; ++j)
		{
			if (IArr[i] > IArr[j])
			{
				SWAP(&IArr[i], &IArr[j]);
			}
		}
	}
}
