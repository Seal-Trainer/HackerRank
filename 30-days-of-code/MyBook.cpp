#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};

// Write your MyBook class here

    //   Class Constructor
class MyBook : public Book 
{
protected:
    int price;
public:
    MyBook( const string &title, const string &author, int price ) 
        : Book( title, author ), price( price ) {}    

    virtual void display()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};
// End class

int main() {