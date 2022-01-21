#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int t[n];
        for (int i = 0; i < n; i++)
        {
            cin >> t[i];
        }

        int h[n];
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }

        if (t[0] == 0)
        {
            cout << h[0] << endl;
            continue;
        }

        else
        {

            int mana = h[0] * (h[0] + 1) / 2;
            // cout << mana << endl;

            for (int i = 1; i < n; i++)
            {

                // CASE 1: t[i] - t[i-1] > h[i]
                if (t[i] - t[i - 1] > h[i])
                {
                    mana += h[i] * (h[i] + 1) / 2;
                }

                // CASE 2: t[i] - t[i-1] <= h[i]
                else if (t[i] - t[i - 1] <= h[i])
                {
                    int temp = t[i] - h[i-1];
                    mana += temp * (temp + 1) / 2;
                }
            }

            cout << mana << endl;
        }
    }
}