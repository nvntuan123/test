#include <iostream>
#include <vector>
#include <functional> // Thư viện hỗ trợ sử dụng con trỏ hàm trong C++11

using namespace std;

void HoanVi_Pointer(int&, int&);

int main()
{
#ifndef Biến con trỏ hàm - Trong ngôn ngữ C hoặc C++98
	void (*PtrFuncSwap)(int&, int&); // Khai báo con trỏ hàm.
	PtrFuncSwap = HoanVi_Pointer;

	int IValue1 = 5;
	int IValue2 = 6;

	cout << "Truoc Khi Hoan Vi\n";
	cout << "a = " << IValue1 << "\n";
	cout << "b = " << IValue2 << "\n";

	//HoanVi_Pointer(IValue1, IValue2);

	// Gọi hàm 1 cách không tường mình.
	//PtrFuncSwap(IValue1, IValue2);

	// Gọi hàm 1 cách tường minh.
	(*PtrFuncSwap)(IValue1, IValue2);

	cout << "\nSau Khi Hoan Vi\n";
	cout << "a = " << IValue1 << "\n";
	cout << "b = " << IValue2 << "\n";
#endif // !Biến con trỏ hàm - Trong ngôn ngữ C hoặc C++98

//#ifndef Biến con trỏ hàm - Trong ngôn ngữ C++ version 2011 trở lên
//	vector<int> IArrVT; // Mảng 1 chiều.
//	vector<vector<int>> IMatrixVT; // Mảng 2 chiều.
//
//	function<void(int&, int&)> PtrFunc = HoanVi_Pointer;
//	//PtrFunc = HoanVi_Pointer;
//
//	int IValue1 = 5;
//	int IValue2 = 6;
//
//	cout << "Truoc Khi Hoan Vi\n";
//	cout << "a = " << IValue1 << "\n";
//	cout << "b = " << IValue2 << "\n";
//
//	PtrFunc(IValue1, IValue2);
//
//	cout << "\nSau Khi Hoan Vi\n";
//	cout << "a = " << IValue1 << "\n";
//	cout << "b = " << IValue2 << "\n";
//#endif // !Biến con trỏ hàm - Trong ngôn ngữ C++ version 2011 trở lên

	system("pause");
	return 0;
}

void HoanVi_Pointer(int& IA, int& IB)
{
	int ITemp = IA;
	IA = IB;
	IB = ITemp;
}
