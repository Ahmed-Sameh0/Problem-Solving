// https://codeforces.com/contest/112/problem/A
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;

    for (int i = 0, len = s1.size(); i < len; i++)
    {
        char s1Upper = toupper(s1[i]);
        char s2Upper = toupper(s2[i]);
        if(s1Upper < s2Upper) 
        {
            cout << -1 << endl;
            return 0;
        }
        else if (s1Upper > s2Upper)
        {
            cout << 1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}