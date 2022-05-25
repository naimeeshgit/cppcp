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
        int n;
        cin >> n;
        int a[n];
        int b[n];

        // scan a,b
        fo(i, n) {
            cin >> a[i];
        }
        fo(i, n) {
            cin >> b[i];
        }

        fo(i,n) {
            if(a[i]<b[i]) {
                swap(a[i], b[i]);
            }
        }

        // get max of a,b
        int max_a = a[0];
        int max_b = b[0];
        fo(i, n) {
            if(a[i]>max_a) {
                max_a = a[i];
            }
            if(b[i]>max_b) {
                max_b = b[i];
            }
        }

        int ans = max_a*max_b;

        cout << ans << endl;

        
    }
}