#include <bits/stdc++.h>
#include  <iostream>
using namespace std;

int main()
{
    // Getting the size of the array.
    int size_array;

    // The user introduces the number
    cin >> size_array;

    // Creating the array.
    int real_size = size_array - 1;
    int numbers[real_size];

    // Filling up the array
    for(int index = 0; index < size_array; index++)
    {
        cin >> numbers[index];
    }

    // Print the array
    /*for(int index = 0; index < size_array; index++)
    {
        cout << numbers[index];
    }
    cout << endl; */

    // Print the array in reverse
    for(int index = real_size; index >= 0; index--)
    {
        cout << numbers[index] << " ";
    }
    return 0;
}
