#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;

bool isImposter(int n,vector<int> trooperNumbers) {
    if (trooperNumbers.size() == 0) {
        return false;
    }
    unordered_set<int> unique;
    for (int i = 0; i < trooperNumbers.size(); i++) {
        unique.insert(trooperNumbers[i]);
    }

    return (unique.size() == trooperNumbers.size()) ? false : true;
}

int main() {
    
    int n;
    cin >> n;
    vector<int> trooperNumbers(n);
    for (int i = 0; i < n; i++) {
        cin >> trooperNumbers[i];
    }
    bool output;
    output = isImposter(n,trooperNumbers);
    if (output == true) {
        cout << "IMPOSTER";
    }

    else {
        cout << "SAFE";
    } 

    return 0;
}
