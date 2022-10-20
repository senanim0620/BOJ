#include <iostream>
#include <algorithm>
using namespace std;

long long  arr[1000003];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long  N;
    cin >> N;

    long long  iwant;
    cin >> iwant;
    long long  min = 0;
    long long  max = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];

        if (max < arr[i])
            max = arr[i];

    }

    long long  result = 0;
    long long  sena = 0;

    while (min<max)
    {
        sena = (min + max) / 2;
        long long  length = 0;

        for (int i = 0; i < N; i++)
        {
            if (arr[i] > sena)
                length += (arr[i] - sena);
        }

        if (length >= iwant)
        {
            if(result < sena)
                result = sena;
            min = sena + 1;
        }
        else if (length < iwant)
        {
            max = sena;
        }
    }

    cout << result;

}
