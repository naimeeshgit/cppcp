#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;

        if (n % 2 == 0)
        {
            if (k > n / 2)
            {
                cout << "-1" << endl;
            }
            else
            {
                char M[n][n];

                int count_k = 0;

                for (int i = 0; i < n; i = i + 1)
                {
                    for (int j = 0; j < n; j = j + 1)
                    {

                        M[i][j] = '.';
                    }
                }

                for (int i = 0; i < n; i = i + 2)
                {
                    int j = i;
                    M[i][j] = 'R';
                    count_k++;

                        if(count_k >= k)
                        break;
                }

                for (int i = 0; i < n; i = i + 1)
                {
                    for (int j = 0; j < n; j = j + 1)
                    {

                        cout << M[i][j] << "";
                    }
                    cout << endl;
                }
            }
        }
        else
        {
            int count_k = 0;

            if (k > (n + 1) / 2)
            {
                cout << "-1" << endl;
            }
            else
            {

                char M[n][n];

                for (int i = 0; i < n; i = i + 1)
                {
                    for (int j = 0; j < n; j = j + 1)
                    {

                        M[i][j] = '.';
                    }
                }

                for (int i = 0; i < n; i = i + 2)
                {
                   int j = i;
                    M[i][j] = 'R';
                    count_k++;

                        if(count_k >= k)
                        break;
                }

                for (int i = 0; i < n; i = i + 1)
                {
                    for (int j = 0; j < n; j = j + 1)
                    {

                        cout << M[i][j] << "";
                    }
                    cout << endl;
                }
            }
        }
    }
}