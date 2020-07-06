#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    //Declaration of set.
    set<int> s;
    int numberQueries; cin >> numberQueries;
    int typeQuestion, number;
    for (int i = 0; i < numberQueries; i++)
    {
        cin >> typeQuestion >> number;
        switch (typeQuestion) {
            case 1: s.insert(number); break;;
            case 2: s.erase(number); break;; 
            case 3: s.find(number) == s.end() ? 
            cout << "No\n" : 
            cout << "Yes\n"; break;;
        }
        
    }

    return 0;
}



