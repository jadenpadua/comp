#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    int rocketCount = 0;

    unordered_map<int,int> umap;

    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        umap[arr[i]]++; 
    }

    for (auto x : umap) {
        rocketCount +=  x.second / 2;
    }
    cout << rocketCount;
    return 0;
}