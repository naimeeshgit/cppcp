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

        vector<int> l(n), r(n), c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> l[i] >> r[i] >> c[i];
        }

        int cheap_min;
        int cheap_max;
        int max_int;

        for (int s = 1; s < n; s++)
        {
            cheap_min = 0;
            cheap_max = 0;
            max_int = 0;

            for (int i = 0; i < s; i++)
            {
                if (l[i] <= l[cheap_min])
                {
                    if (l[i] < l[cheap_min])
                        cheap_min = i;

                    else if (c[i] <= c[cheap_min])
                        cheap_min = i;
                }

                if (r[i] <= r[cheap_max])
                {
                    if (r[i] < r[cheap_max])
                        cheap_max = i;

                    else if (c[i] <= c[cheap_max])
                        cheap_max = i;
                }

                if (r[i] - l[i] <= r[max_int] - l[max_int])
                {
                    if (r[i] - l[i] < r[max_int] - l[max_int])
                        max_int = i;

                    else if (c[i] <= c[max_int])
                        max_int = i;
                }
            }

            if(l[max_int] == l[cheap_min] && r[max_int] == r[cheap_max] && c[max_int] < c[cheap_min] + c[cheap_max])
            {
                cout << c[max_int] << endl;


            }
            else {
                int sum = c[cheap_min] + c[cheap_max];
                cout << sum << endl;
            }
        }
    }
}