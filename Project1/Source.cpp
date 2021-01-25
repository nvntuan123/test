/*
* Đề 2: Viết chương trình tạo menu và định nghĩa các hàm để thực hiện các công việc sau:
	a) Nhập hai chuỗi str1 và str2 (mỗi chuỗi không quá 255 ký tự và chiều dài của str2 ≤ str1) và ghi vào tập tin input2.txt (2 điểm).
	b) Đếm số lần chuỗi str2 xuất hiện trong chuỗi str1 (2 điểm).
	c) Chèn chuỗi str2 vào str1 tại vị trí được nhập từ bàn phím (2 điểm).
	d) Xóa một số ký tự trong chuỗi str1 với số ký tự và vị trí cần xóa được nhập từ bàn phím (2 điểm).
	e) Ghi tất cả kết quả thực hiện được vào tập tin tin output2.txt (2 điểm).
Bài tập này tổng hợp 2 kiến thức:
1. Kiến thức về chuỗi.
2. Kiến thức về tập tin.
*/

#include <iostream>

void foo(float);

int main()
{
	void(*fn)(float) = foo;

	system("pause");
	return 0;
}

void foo(float _Fn)
{
	std::cout << "Ahihi\n";
	std::cout << "Fn = " << _Fn << "\n";
}

