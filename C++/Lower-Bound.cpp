#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int number_elements, number_queries;
    vector<int> v;
    cin >> number_elements;
    for (int i = 0; i < number_elements; i++) {
        int number;
        cin >> number;
        v.push_back(number);
    }
    cin >> number_queries;
    int number_to_find;
    for (int j = 0; j < number_queries; j++) {
        cin >> number_to_find;
        std::vector<int>::iterator low = lower_bound(v.begin(), v.end(), number_to_find);
        if (v[low - v.begin()] == number_to_find)
        {
            cout << "Yes " << (low - v.begin()+ 1) << endl;
        }
        else
        {
            cout << "No " << (low - v.begin()+ 1) << endl;   
        }
    }
    return 0;
}

