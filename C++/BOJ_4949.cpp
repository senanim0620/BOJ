#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

int main()
{

	while (1)
	{
		bool istrue = true;
		string a = "";

		getline(cin, a, '.');

		if (a == "")
		{

			break;
		}

		else
		{
			cin.ignore();
			int cursor = 0;
			char buf[103] = { 0 };

			for (int i = 0; i < a.size(); i++)
			{
				if (a[i] == '(')
				{
					buf[cursor] = '(';
					cursor++;
				}
				else if (a[i] == '[')
				{
					buf[cursor] = '[';
					cursor++;
				}
				else if (a[i] == ')')
				{
					cursor--;
					if (cursor < 0)
					{
						istrue = false;
						break;
					}
					if (buf[cursor] != '(')
					{
						istrue = false;
						break;
					}
					//cursor++;
				}
				else if (a[i] == ']')
				{
					cursor--;
					if (cursor < 0)
					{
						istrue = false;
						break;
					}
					if (buf[cursor] != '[')
					{
						istrue = false;
						break;
					}
					//cursor++;
				}
				else
					;
			}

			if (cursor != 0)
				istrue = false;

			if (istrue)
				cout << "yes" << "\n";
			else
				cout << "no" << "\n";
		}

	}



}


