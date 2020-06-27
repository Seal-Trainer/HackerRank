#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int rows, number_questions, number_elements;
    cin >> rows;
    vector<vector<int> > vec(rows);

    cin >> number_questions;
    for (int i = 0; i < rows; i++)
    {    
        cin >> number_elements;

        // Giving the array 0, in order to use it
        vec[i].resize(number_elements);
        for(int j = 0; j < number_elements; j++)
        {
            int number = 0;
            cin >> number;
            vec[i][j] = number;
        }
        number_elements = 0;
    }

    for(int i = 0; i < number_questions; i++)
    {
        int row, column;
        cin >> row;
        cin >> column;
        cout << vec[row][column] << endl;
    }
    return 0;
}
