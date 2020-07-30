#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student {
    public:
    int scores[5];
    
    // Creating the function to insert the scores.
    void input()
    {
        for (int index = 0; index < 5; index++) {
        int number;
        cin >> number;
        scores[index] = number;
        }
    }

     int calculateTotalScore()
     {
        int sum_scores = 0;
        for(int i = 0; i < 5; i++)
        {
            sum_scores += scores[i];
        }

        return sum_scores;
     }
};

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
