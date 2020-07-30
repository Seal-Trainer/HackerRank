#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Create mean, median, mode.
float getingMean(vector<float> elements, int elementsNumber);
float getingMedian(vector<float> elements, int elementsNumber);
float getingMode(vector<float> elements);
int main() {
    // We get the number of elements we're going to insert.
    int elementsNumber; cin >> elementsNumber;
    vector<float> elements;
    for (int index = 0; index < elementsNumber; index++)
    {
        float element; cin >> element;
        elements.push_back(element);
    }
    
    sort(elements.begin(), elements.end());
    float sumatory = getingMean(elements, elementsNumber);
    cout << sumatory << endl;
    float median = getingMedian(elements, elementsNumber);
    cout << median << endl;
    float mode = getingMode(elements);
    cout << mode << endl;

    return 0;
}

// Creation of the function to get the mean
float getingMean(vector<float> elements, int elementsNumber)
{
    float sum = 0;
    for (auto index = elements.begin(); index != elements.end(); index++)
    {
        sum = sum + *index;
    }
    return sum / elementsNumber;
}

// Creation of the function to get the median
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

// Creation of the function to get the mode
float getingMode(vector<float> elements)
{
    float mode = elements.at(0);
    int modeCounter = 0;
    for (auto index = elements.begin(); index != elements.end(); index++)
    {
        int counter = 0;
        if (*index == *(index + 1))
        {
            counter++;
        }
        if(modeCounter < counter)
        {
            modeCounter = counter;
            mode = *index;
        }
    }
    return mode;
}
