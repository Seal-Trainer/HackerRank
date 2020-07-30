#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h> 
using namespace std;
float getingMedian(vector<float> elements, int elementsNumber);
float getingQ1(vector<float> elements, int elementsNumber);
float getingQ3(vector<float> elements, int elementsNumber);


int main() 
{ 
    int numberElements; cin >> numberElements;
    vector<float> elements;
    for (int index = 0; index < numberElements; index++)
    {
        float element; cin >> element;
        elements.push_back(element);
    }

    // Sorting the vector
    sort(elements.begin(), elements.end()); 

    float q1 = getingQ1(elements, elements.size()/2);
    float q2 = getingMedian(elements, numberElements);
    float q3 = getingQ3(elements);

    cout << q1 << endl;
    cout << q2 << endl;
    cout << q3 << endl;
    return 0; 
} 


float getingMedian(vector<float> elements, int elementsNumber)
{
    
    float median;

    if(elementsNumber % 2 != 0)
    {
        int medianIndex = 0;
        medianIndex = elementsNumber / 2;
        median = elements.at(medianIndex - 1);
        return median;
    }
    else
    {
        int medianIndex; medianIndex = elementsNumber / 2;
        median = elements.at(medianIndex - 1) +  elements.at(medianIndex);
        return median / 2;
    }   
}

float getingQ1(vector<float> elements, int elementsNumber)
{
    float q1 = getingMedian(elements, elementsNumber);
    return q1;
}
float getingQ3(vector<float> elements)
{
    float q3
}