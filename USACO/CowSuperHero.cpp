//https://usaco.org/index.php?page=viewproblem2&cpid=665
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);

    int m, n, k;
    cin >> m >> n >> k;

    string output;

    for(int i = 0; i < m; i++)
    {
        output = "";
        for (int j = 0; j < n; j++)
        {
            char c;
            cin >> c;
            for (int u = 0; u < k; u++)
            {
                output+=c;
            }
        }
        for (int u = 0; u < k; u++)
        {
            cout << output << endl;
        }
    }

}
