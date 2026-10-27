#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int nShops;
    cin >> nShops;

    vector<int> priceForShop;
    for (int i = 0; i < nShops; i++) {
        int x;
        cin >> x;
        priceForShop.push_back(x);
    }

    sort(priceForShop.begin(), priceForShop.end());

    int nOfDays;
    cin >> nOfDays;

    for (int i = 0; i < nOfDays; i++) {
        int money;
        cin >> money;

        int low = 0;
        int high = nShops; 
        while (low < high) {
            int mid = (low + high) / 2;

            if (priceForShop[mid] <= money) {
                low = mid + 1;
            } 
            else {
                high = mid;
            }
        }
        cout << low << "\n";
    }
}