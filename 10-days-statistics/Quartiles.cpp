#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int elementsNumber;
    cin >> elementsNumber;
    int elements[elementsNumber];
    for(int i = 0; i < elementsNumber; i++)
        cin >> elements[i];
    sort(elements, elements + elementsNumber);
    int q1 = elements[elementsNumber / 4];
    int q2 = elements[elementsNumber / 2];
    int q3 = elements[elementsNumber - (elementsNumber / 4 + 1)];
    if(elementsNumber % 2 == 0)
        q2 = (q2 + elements[elementsNumber / 2 - 1]) / 2;
    if(((elementsNumber - (elementsNumber % 2)) / 2) % 2 == 0) {
        q1 = (q1 + elements[elementsNumber / 4 - 1]) / 2;
        q3 = (q3 + elements[elementsNumber - (elementsNumber / 4)]) / 2;
    }
    cout << q1 << "\n" << q2 << "\n" << q3 << "\n";
    return 0;
}