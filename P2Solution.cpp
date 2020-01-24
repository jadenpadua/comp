#include <iostream>
#include <string>
using namespace std;
int main() {
    string message;
    string subMessage;
    bool found = false;
    getline(cin, message);
    getline(cin,subMessage);

      if (message == "" && subMessage.size() == 0) {
            return 0;
        }
        else if (subMessage.size() > message.size()) {
            return -1;
        }
        for(int i = 0; i < message.size(); i++) {
            if (message.substr(i, subMessage.size()).compare(subMessage) == 0) {
                cout << i;
                found = true;
                break;
            }
        }
        if(!found) {
            cout << -1;
        }
      
    return 0;
}