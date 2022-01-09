#include <bits/stdc++.h>
using namespace std;

// Function prints all elements in a vector of pairs of int and char
void printVector(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}


//Function doubles the value of each element in the vector
void doubleVector(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
        v[i] *= 2;
}

int main() {


    vector<  int  > a = {1,7,8,6,2};
    printVector(a);
    doubleVector(a);
    printVector(a);
    return 0;
}