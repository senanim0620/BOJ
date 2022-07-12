#include <iostream>

using namespace std;

int main()
{
	bool a = true;
	int num[8];

	for (int i = 0; i < 8; i++)
	{
		cin >> num[i];
	}

	for (int i = 0; i < 8; i++)
	{
		if ((i + 1) != num[i])
			a=false;
	}

	if (a == true)
	{
		cout << "ascending" << endl;
		return 0;
	}

	a = true;

	for (int i = 8; i > 0; i--)
	{
		if ((i) != num[8 - i])
			a = false;
	}
	if (a == true)
	{
		cout << "descending" << endl;
		return 0;
	}

	cout << "mixed" << endl;
	return 0;

}
