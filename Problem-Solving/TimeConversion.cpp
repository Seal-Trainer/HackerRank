#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;


string timeConversion(string s) {
    if(s[8] == 65)
    {             
        if(s[0] == 1 && s[1] == 2)
        {
            s[0] = 0, s[1] = 0;
        }
        s.resize(7);
    }
    else
    {
        int hour1 = (int)s[0] - 48;
        int hour2 = (int)s[1] - 48;
        int hours = hour1 + hour2 + 12;
        
        char *intStr = itoa(hours);
        string str = string(intStr);
        
        s[0] = str[0];
        s[1] = str[1];
        s.resize(7);
    }
    
    
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
