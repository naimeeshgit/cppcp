#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265
#define br cout << endl
#define sp cout << " "
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define amazing ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define file_read                     \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
typedef vector<pii> vpii;
typedef vector<pll> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
int MOD = 1e9 + 7;

int main() {
    amazing;
    int t;
    cin >> t;
    while(t--) {
        int n,k;
        cin >> n >> k;
        int count = 0;

        for(int i=1; i<=n*k; i++)
        {
            if(i%2!=0)
            {
                count++;
            }

        }

        if(count % k !=0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            int arr[n][k];
            int t = 1;
            // fill all the odd numbers from 1 to n*k in the arr
            for(int i=0; i<count/k; i++)
            {
                for(int j=0; j<k; j++)
                {
                    arr[i][j] = t;
                    t+=2;
                }
            }

            t = 2;
            for(int i=count/k; i<n; i++)
            {
                for(int j=0; j<k; j++)
                {
                    arr[i][j] = t;
                    t+=2;
                }
            }

            // print
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<k; j++)
                {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
        }
    
        
    }
}