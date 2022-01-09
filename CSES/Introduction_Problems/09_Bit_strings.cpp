#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int expo(int n)
{
    int ans = 2;
    for (int i = 1; i < n; i++)
    {
        ans *= 2;
        ans %= MOD;
    }
    return ans;
}

int main()
{
    long int n;
    cin >> n;

    long long int result = expo(n)%MOD;
    cout << result << endl;
}