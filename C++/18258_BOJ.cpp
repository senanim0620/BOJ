#include <iostream>
#include <queue>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    queue<int> q;

    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        string a;
        cin >> a;

        if (a == "push")
        {
            int sena;
            cin >> sena;

            q.push(sena);

        }
        else if (a == "pop")
        {
            if (q.empty())
                cout << -1 <<"\n";
            else
            {
                if (q.empty())
                    cout << -1 << "\n";
                else
                    cout << q.front() << "\n";

                q.pop();
            }

        }

        else if (a == "size")
        {
            cout << q.size()<< "\n";
        }
        else if (a == "empty")
        {
            if (q.empty())
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
        else if (a == "front")
        {
            if (q.empty())
                cout << -1 << "\n";
            else
                 cout << q.front() << "\n";
        }
        else if (a == "back")
        {
            if (q.empty())
                cout << -1 << "\n";
            else
                cout << q.back() << "\n";
        }
        else
            ;
    }
 
}

