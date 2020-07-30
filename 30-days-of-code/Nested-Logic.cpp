#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define FIXED_YEAR_CHARGE 10000
#define getChargeDay(actualDay, dayToReturn) (15 * (actualDay - dayToReturn))
#define getChargeMonth(actualMonth, monthToReturn) {\
			(500 * (actualMonth - monthToReturn))\
} 

int getFine(int actualDay, int actualMonth, int actualYear, 
            int dayToReturn, int monthToReturn, int yearToReturn)
{
    bool hasNoCharge = (actualDay <= dayToReturn && 
                        actualMonth <= monthToReturn && 
                        actualYear <= yearToReturn) || 
    					actualYear < yearToReturn;
    bool hasChargeDay = (actualDay > dayToReturn && 
                         monthToReturn == actualMonth && 
                         yearToReturn == actualYear);
    bool hasChargeMonth = (actualMonth > monthToReturn && 
                           yearToReturn == actualYear);
    
    if (hasNoCharge)
    {
        return 0; 
    }
    else if (hasChargeDay) 
    {
        return getChargeDay(actualDay, dayToReturn);
    }
    else if (hasChargeMonth)
    {
        return getChargeMonth(actualMonth, monthToReturn);
    }
    else
    {
        return FIXED_YEAR_CHARGE;
    }
}

int main() {
    int actualDay, actualMonth, actualYear;
    cin >> actualDay >> actualMonth >> actualYear;

    int dayToReturn, monthToReturn, yearToReturn; 
    cin >> dayToReturn >> monthToReturn >> yearToReturn;   

    int fine;
    fine = getFine(actualDay, actualMonth, actualYear, 
    	           dayToReturn, monthToReturn, yearToReturn);

    cout << fine;
    
    return 0;
}
