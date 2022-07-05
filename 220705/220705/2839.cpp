#include <iostream>

using namespace std;


int main()
{

	int input;

	cin >> input;

	int five = input / 5; //2 
	int three = (input % 5) / 3; // 0
	int extra = (input % 5) % 3;
	 
	if (extra != 0)
	{
		while (1)
		{
			if (five == 0)
			{
				cout << "-1";
				break;
			}
			
			five = five - 1; // 1
			extra = extra + 5;

			if (extra % 3 == 0)
			{
				three = three + (extra / 3);
				cout << five + three;
				break;
			}
		}
		
	}
		else
		cout << five + three;

	return 0;
}
