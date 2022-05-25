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
        ll int n, x, y;
        cin >> n >> x >> y;

        ll int a = x;
        ll int b = x + 3;

        int arr[n];
        fo(i, n)
        {
            cin >> arr[i];
        }

        // sum of arr
        ll int sum = 0;
        fo(i, n)
        {
            sum += arr[i];
        }

        if (sum + x < y)
        {
            cout << "ye: Bob" << endl;
        }
        else
        {
            // bitwise XOR x with all numbers of arr
            ll int ans = x;
            fo(i, n)
            {
                if (ans ^ arr[i] < ans || ans ^ arr[i] < ans + arr[i])
                {
                    ans = ans ^ arr[i];
                }
                else
                {
                    ans = ans + arr[i];
                }
            }

            ll int ans1 = x + 3;
            fo(i, n)
            {
                if (ans1 ^ arr[i] < ans1 || ans1 ^ arr[i] < ans1 + arr[i])
                {
                    ans1 = ans1 ^ arr[i];
                }
                else
                {
                    ans1 = ans1 + arr[i];
                }
            }

            if(ans > y )
            {
                cout << "Bob" << endl;
            }
            else if(ans1 > y)
            {
                cout << "Alice" << endl;
            }
        }
    }
}