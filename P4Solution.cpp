#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int findMinCoins(int n,int value, vector<int> denoms) {
    int minCoins = 0;
    for(int i = n - 1; i>=0; i--) {
        while (value >= denoms[i]) {
            value -= denoms[i];
            minCoins++;
        }
    }
    return minCoins;
}

int main() {
    int value;
      cin >> value;
    int n;
      cin >> n;
    vector<int> denoms(n);
    

  
    for (int i = 0; i < n; i++) {
        cin >> denoms[i];
    }
    sort(denoms.begin(), denoms.end());
    int result = findMinCoins(n,value,denoms);
    cout << result;
    return 0;
}