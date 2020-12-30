#include <iostream>
#include <regex>

using namespace std;

int main()
{
	while (true)
	{
		string StrInput;
		cout << "String input: ";
		cin >> StrInput;

		regex e("A?B");
		

		bool BFound = regex_search(StrInput, e);

		string StrResult = BFound ? "Match" : "Not Match";

		cout << "Result: " << StrResult << endl;
	}

	system("pause");
	return 0;
}

