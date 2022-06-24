#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
	deque<int> dp;
	deque<int>::iterator iter;

	int num;
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		string a;
		cin >> a;

		if (a == "push_back")
		{
			int b;
			cin >> b;

			dp.push_back(b);
		}
		else if (a == "push_front")
		{
			int b;
			cin >> b;

			dp.push_front(b);
		}
		else if (a == "pop_front")
		{
			if (dp.size() == 0)
				cout << "-1" << "\n";
			else
			{
				iter = dp.begin();
				cout << *iter << "\n";
				dp.pop_front();
			}
		}
		else if (a == "pop_back")
		{
			if (dp.size() == 0)
				cout << "-1" << "\n";
			else
			{
				iter = dp.end() -1;
				cout << *iter << "\n";
				dp.pop_back();
			}
		}
		else if (a == "size")
		{
			cout << dp.size() << "\n";
		}
		else if (a == "empty")
		{
			if (dp.empty())
			{
				cout << "1" << "\n";
			}
			else
				cout << "0" << "\n";
		}
		else if (a == "front")
		{
			if (dp.empty())
			{
				cout << "-1" << "\n";
			}
			else
			{
				iter = dp.begin();
				cout << *iter<< "\n";
			}
		}
		else if (a == "back")
		{
			if (dp.empty())
			{
				cout << "-1" << "\n";
			}
			else
			{
				iter = dp.end() - 1;
				cout << *iter << "\n";
			}


		}
	}

}