#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

void leftRotation(vector<int> elements, int numberRotations)
{
    int aux = 0;
    int numberElements = elements.size() - 1;
    for (int i = 0; i < numberRotations; i++)
    {
        aux = elements[numberElements];
        elements[numberElements] = elements[0];
        for (int j = 0; j < elements.size() - 2; j++)
        {
            elements[j] = elements[j+1];
        }
        elements[numberElements - 1] = aux;
    }

    for (int k = 0; k < elements.size(); k++)
        {
            cout << elements[k] << " ";
        }
        
        cout << endl;
    
}



int main()
{
    string nd_temp;
    getline(cin, nd_temp);

    vector<string> nd = split_string(nd_temp);

    int n = stoi(nd[0]);

    int d = stoi(nd[1]);

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split_string(a_temp_temp);

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }

    leftRotation(a, d);

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
