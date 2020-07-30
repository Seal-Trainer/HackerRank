#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    std::map<string, int> students;
    int numberQueries; cin >> numberQueries;
    int typeQuerie, mark;
    string nameStudent;
    for (int i = 0; i < numberQueries; i++)
    {	
    	cin >> typeQuerie;
    	switch(typeQuerie)
    	{
	    		case 1: // Add the marks
	    		cin >> nameStudent >> mark;
	    		students[nameStudent] += mark;
	    		break;;
	    		case 2: // Erase the marks 
	    		cin >> nameStudent;
	    		students.erase(nameStudent);
	    		break;;
	    		case 3: 
	    		cin >> nameStudent;
	    		cout << students[nameStudent] << endl;
    	}
    }
    return 0;
}



