//https://codeforces.com/contest/677/problem/A

#include <iostream>
using namespace std;

int main()
{
    // n = number of friends, h = height of fence
    int n, h;
    cin >> n >> h;
    int width = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x <= h)
        {
            width++;
        }
        else
        {
            width += 2;
        }
    }

    cout << width << endl;
}