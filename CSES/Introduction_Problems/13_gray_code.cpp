#include <bits/stdc++.h>
using namespace std;

int two_expo(int n)
{
    int multi = 2;

    for (int i = 1; i < n; i++)
    {
        multi *= 2;
    }

    return multi;
}

void binary_converter(int n, int digits)
{
    int s[digits] = {0};
    int len = digits;
    // cout << n << endl;
    

    while(n/2 !=0 || n%2 !=0)
    {
        //cout << n << endl;
        int r = n%2;
        // cout << r << "";
        s[digits-1]  = r;
        digits--;
        
        n = n/2;

        if(n==0)
        break;

    }

    for(int i=0; i< len; i++)
    {
        cout << s[i] << "";
    }
    cout << endl;
    return;

}

int main()
{
    int n;
    cin >> n;

    int nums = two_expo(n);
    // cout << nums << endl;

    for (int i = 0; i < nums; i++)
    {
        binary_converter(i,n);
    }
}