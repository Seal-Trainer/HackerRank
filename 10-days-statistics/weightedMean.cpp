#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
float calculateDividend(vector<float> elements, vector<float> weights, int numberElements);
float calculateDivisor(vector<float> weights, int numberElements);

int main() {
    int numberElements; cin >> numberElements;
    vector<float> elements;
    vector<float> elementsArray;

    for (int index = 0; index < numberElements; index++)
    {
        float number; cin >> number;
        elements.push_back(number);
    }

    for (int index = 0; index < numberElements; index++)
    {
        float number; cin >> number;
        elementsArray.push_back(number);
    }

    float dividend = calculateDividend(elements, elementsArray,  numberElements);
    float divisor = calculateDivisor(elementsArray, numberElements);
    float result = dividend / divisor;

    printf("%.1f", result);
    return 0;
}

float calculateDividend(vector<float> elements, vector<float> weights, int numberElements)
{
    float dividend = 0;
    for (int index = 0; index < numberElements; index++)
    {
        dividend += elements.at(index) * weights.at(index);
    }
    
    return dividend;
}

float calculateDivisor(vector<float> weights, int numberElements)
{
    float divisor = 0;
    for (int index = 0; index < numberElements; index++)
    {
        divisor += weights.at(index);
    }
    
    return divisor;
}