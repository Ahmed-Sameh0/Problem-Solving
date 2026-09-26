//https://usaco.org/index.php?page=viewproblem2&cpid=891
#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{    
    
    /*
    {1,2,3} 

    1. {2,1,3} 1
    2. {2,3,1} 1 
    3. {1,3,2} 1
    */
 
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
       
    int numberOfSwaps;
    cin >> numberOfSwaps;

    int positions[] = {1, 2, 3};
    int counter[] = {0, 0, 0}; 

    for (int i = 0; i < numberOfSwaps; i++)
    {
        int a, b, g;
        cin >> a >> b >> g;
        a--, b--, g--;
        swap(positions[a], positions[b]);

        counter[positions[g] - 1]++;

    }
    int maxGuessCount = max({counter[0], counter[1], counter[2]});
    cout << maxGuessCount;

}

