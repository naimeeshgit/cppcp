#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        long long int l, r, k;
        cin >> l >> r >> k;
        int tot = r - l + 1;


        if (k == 0 && l == 1)
        {
            cout << "NO" << endl;
            
        }
        else if (k == 0 && l == r && l > 1)
        {
            cout << "YES" << endl;
            
        }

        else if (tot == 1 && l == 1)
        {
            cout << "NO" << endl;
            
        }
        else if (tot == 1 && l > 1)
        {
            cout << "YES" << endl;
            
        }

        else if (l % 2 == 0 && tot % 2 != 0 && k >= (tot - 1) / 2)
        {
            cout << "YES" << endl;
            
        }
        else if (tot % 2 == 0 && k >= tot / 2)
        {
            cout << "YES" << endl;
            
        }
        else if (l % 2 != 0 && tot % 2 != 0 && k >= (tot + 1) / 2)
        {
            cout << "YES" << endl;
            
        }

        else
        {
            cout << "NO" << endl;
            
        }
    }

    return 0;
}