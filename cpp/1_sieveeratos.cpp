#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 1] = {0};

    int k = 2;

    int prime_count = 0;

    // i = 2, -> 4,5,6,7....
    // i=3, -> 9,10,11,12,....

    for (int i = 2; i <= n + 1; i++)
    {
        int j = i * i;
        for (; j < n + 1; j++)
        {
            if (a[j] != 1)
            {
                if (j % i == 0)
                {
                    a[j] = 1;
                }
            }
        }

        for (int k = 2; k < n + 1; k++)
        {
            if (a[k] == 0)
            {
                cout << k << " ";
                prime_count++;
            }
        }
        cout << endl;
        if (i * i > n)
            break;
    }

    int prime_array[prime_count];

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            prime_array[i] = i;
        }
    }

    for (int t = 0; t < n; t++)
    {
        for (int i = 0; i < prime_count; i++)
        {
            if(a[t] > 1) continue;
            else if(t%prime_array[i]==0)
            {
                a[t] = prime_array[i];
            }
            
        }
    }

    
}
