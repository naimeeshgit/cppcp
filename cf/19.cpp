#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        // cout << t << endl;
        int n;
        cin >> n;
        int arr[n];

        int one_count = 0;
        int odd_count = 0;

        for (int i=0; i<n; i++)
        {
            cin >> arr[i];

            if(i>=1 && i<n-1)
            {
                if(arr[i]==1)
                {
                    one_count++;
                }
                if(arr[i]%2!=0)
                {
                    odd_count++;
                }
                
            }

        }

        cout << odd_count << " " << one_count << endl;

        int ans = 0;

        if(n==3)
        {
            if(odd_count==1)
            {
                cout << "-1" << endl;
            }
            else
            {
                cout << "1" << endl;
            }
        }

        else if(one_count == n-2)
        {
            cout << "-1" << endl;
        }

        else {
             for(int i=1; i<n-1; i++)
             {
                  
                ans += arr[i]/2 + arr[i]%2;
                  
             }

             cout << ans << endl;
        }


        

        

    }
}