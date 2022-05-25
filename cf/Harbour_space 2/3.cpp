#include <bits/stdc++.h>
using namespace std;
#define ll long 


int main()
{

    ll int t;
    cin >> t;
    while (t--)
    {

        double bre = 0;
        ll double hc, dc;
        cin >> hc >> dc;
        ll double hm, dm;
        cin >> hm >> dm;

        ll double k, w, a;
        cin >> k >> w >> a;

        for (double i = 0; i <= k; i++)
        {

            ll double aa = hc + i * a;
            ll double ww = dc + (k - i) * w;

            ll double tcal1 = ceil(aa / dm);
            ll double tcal2 = ceil(hm / ww);

            // cout << tcal1 << " h " << tcal2 << endl;

            if (tcal1 >= tcal2)
            {
                cout << "YES" << endl;
                bre = 1;
                break;
            }
        }

        if (bre == 1)
        {
            // cout << "YES" << endl;
            continue;
        }

        cout << "NO" << endl;
    }
}