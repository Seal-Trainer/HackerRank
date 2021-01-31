#include <iostream>

#define LOG(x) std::cout << x << std::endl;

int main()
{
    int numbers = 0; cin >> numbers;
    for(int i = 0; i < numbers; i++)
    {
        int grade = 0; cin >> grade;
        if(grade < 40)
        {
            LOG(grade);
        }
        else
        {
            int modulo = 0; 
            modulo = grade % 5;
            if(modulo > 2)
            {
                modulo = 5 - modulo;
                grade = grade + modulo;
            }
            LOG(grade);
        }

    }
}