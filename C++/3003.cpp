#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	
	int sena[6] = { 0 };
	int complete[6] = {1,1,2,2,2,8};

	for (int i = 0; i < 6; i++)
	{
		cin >> sena[i];
	}

	for (int i = 0; i < 6; i++)
	{
		cout << complete[i] - sena[i] << " ";
	}
	
	return 0;
}

