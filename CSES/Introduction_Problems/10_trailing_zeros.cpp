#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    long long int trailing_zeros = 0;
    int divisor = 5;

    while (n / divisor > 0)
    {
        trailing_zeros += n / divisor;
        divisor *= 5;
    }
    cout << trailing_zeros << endl;
}