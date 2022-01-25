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
        int n, m, r_i, c_i, r_f, c_f;
        cin >> n >> m >> r_i >> c_i >> r_f >> c_f;

        r_i = r_i - 1;
        c_i = c_i - 1;
        r_f = r_f - 1;
        c_f = c_f - 1;

        if (r_i <= r_f && c_i <= c_f)
        {
            cout << min(r_f - r_i, c_f - c_i) << endl;
        }

        else
        {

            // find the rebound
            int d_r = n - r_i;
            int d_c = m - c_i;

            // check nearest rebound
            int rebound = min(d_r, d_c);

            if (rebound >= c_f - c_i)
            {
                cout << c_f - c_i << endl;
            }

            else if (rebound >= r_f - r_i)
            {
                cout << r_f - r_i << endl;
            }

            else
            {
                if(d_r < d_c) // rebound on bottom
                {
                    cout << min(d_r+c_f-c_i, r_f+d_r) << endl;
                }
                else
                {
                    cout << min(d_c+r_f-r_i, c_f+d_c) << endl;

                }

            }
        }
    }
}