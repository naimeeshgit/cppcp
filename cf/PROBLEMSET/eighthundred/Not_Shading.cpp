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

int main()
{
    amazing;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, r, c;
        cin >> n >> m >> r >> c;
        r = r-1;
        c = c-1;
        vector<vector<char>> a(n, vector<char>(m));
        int check_B = 0;
        int both = 0;
        int only_r = 0;
        int only_c = 0;
        fo(i, n)
        {
            fo(j, m)
            {
                cin >> a[i][j];
                if (a[i][j] == 'B')
                {
                    check_B++;
                    if (i == r && j==c)
                    {
                        both = 1;
                        
                    }
                    else if (i == r)
                    {
                        only_r = 1;
                    }
                    else if (j == c)
                    {
                        only_c = 1;
                    }

                    
                }
            }
        }
        // // print t,n,m,r,c
        // cout << t << " " << n << " " << m << " " << r << " " << c << endl;

        // // print a
        // fo(i, n)
        // {
        //     fo(j, m)
        //     {
        //         cout << a[i][j];
        //     }
        //     cout << endl;
        // }

        if (check_B == 0)
        {
            cout << "-1" << endl;
        }
        else if (check_B > 0)
        {

            if (both==1)
            {
                cout << "0" << endl;
            }

            else if (only_c || only_r)
            {
                cout << "1" << endl;
            }

            else
            {
                cout << "2" << endl;
            }
        }
        
    }
}