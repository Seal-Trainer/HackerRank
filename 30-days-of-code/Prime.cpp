#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool isPrime(int number);

int main() 
{
    int numberOfCases; cin >> numberOfCases;
    for (int i = 0; i < numberOfCases; ++i)
    {
        int numberToProve;
        cin >> numberToProve;
        cout << (isPrime(numberToProve) ? "Prime\n" : "Not prime\n");
    }
    return 0;
}

bool isPrime(int number)
{
	if(number == 1)
	{
		return false;
	}
    else if (number <= 3)
    {
        return true;
    }
    else if (number % 2 == 0)
    {
        return false;
    }

    for (int i = 3; i <= sqrt(number); i+=2)
    {
        if (number % i == 0)
        {
            return false;
        }        
    }
        
    return true;
}
