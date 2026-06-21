// https://codeforces.com/contest/734/problem/A
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string games;
    cin >> n >> games;
    int Antonio = 0;
    int Danik = 0;
    for (int i = 0; i < n; i++)
    {
        if (games[i] == 'A')
        {
            Antonio++;
        }
        else
        {
            Danik++;
        }
    }
    if (Antonio > Danik)
    {
        cout << "Anton" << endl;

    }
    else if (Danik > Antonio)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
}