//https://cses.fi/problemset/task/1069
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string dna;
    cin >> dna;

    int longest_sequence = 1;
    int sequence = 1;

    for (int i = 0; i < dna.length() - 1; i++){
        if (dna[i] == dna[i + 1]){
            sequence++;
        }
        else {
            sequence = 1;
        }
        if (longest_sequence < sequence) {
            longest_sequence = sequence;
        }
    }
    cout << longest_sequence << "\n";
}