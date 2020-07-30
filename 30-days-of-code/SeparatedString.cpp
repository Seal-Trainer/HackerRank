#include <iostream>
#include <cstring>
using namespace std;


int main() {
    int tests;
    cin >> tests;
    char input[10000];
    for(int k = 0; k < tests; k++) {
        cin >> input;

        for(int i = 0; i < strlen(input); i += 2) {
            cout << input[i];
        }
        cout << " ";
        for(int i = 1; i < strlen(input); i += 2) {
            cout << input[i];
        }
        cin.ignore();
        cout << endl;
    }
    return 0;
}