#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    // cout << t << endl;

    while (t--)
    {
        int n;
        cin >> n;
        // cout << n << endl;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }

        // for(int i=0; i<n ;i++)
        // {
        //      cout << a[i] << endl;
        // } 

        pair<float, int> p;
        int max = 0;
        for (int i = 0; i < n-1; i++)
        {
            int termx = a[i];

            for (int j = i+1; j < n; j++)
            {
                int termy = a[j];
                float diff = termy - termx;
                float diff_index = j - i;

                float cd = diff / diff_index;

                float first_term = termx - i * cd;

                vector<float> b;

                int count = 0;
                for (int i = 0; i < n; i++)

                {

                    b[i] = first_term + i * cd;

                    if (b[i] == a[i])
                    {
                        count++;
                    }
                }
                if (max < count)
                {
                    max = count;
                    p.first = cd;
                    p.second = j;
                }
            }
        }

        int ans = n - max;
        cout << ans << endl;
    }
}