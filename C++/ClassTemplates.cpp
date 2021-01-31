#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
#include<string.h>

#define cin ios_base::sync_with_stdio(false);cin.tie(NULL); cin
#define concatenate add

// template <class T> class AddElements {
//     public:
//         T element;
//         AddElements(T i) {element = i;}
//         T add(T i) {return element + i;}
    
// };

// template <> class AddElements <string> {
//     public:
//         string element;
//         AddElements(string i) {element = i;}
//         string concatenate(string element2) {
//             return element + element2;
//         }
// };

// template <class T> class AddElements {
//     public:
//         T element;
//         AddElements(T i) {
//             element = i;
//         }
//         T add(T i){
//             return element+i;
//         }
//         T concatenate(T i){
//             return element+i;
//         }
// };

template<typename T>
class AddElements {
    private:
    T element;
    public:
    AddElements(T element){
        this->element = element;
    }
    T add(T a){ return element +a;}
};

int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}
