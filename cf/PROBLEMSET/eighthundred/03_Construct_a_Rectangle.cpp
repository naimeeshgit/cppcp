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
        ll int a,b,c;
        cin >> a >> b >> c;
      
      // when two are equal:
        if(a == b) {
            if(c%2 == 0) {
                cout << "YES" << endl;
                continue;
            } 
        }
        else if(c==b) {
            if(a%2 == 0) {
                cout << "YES" << endl;
                continue;
            }
        }
        else if(c==a) {
            if(b%2 == 0) {
                cout << "YES" << endl;
                continue;
            }
        }
        

      // when unequal
        if(a==b+c)
            cout << "YES" << endl;
        else if(b==a+c)
            cout << "YES" << endl;
        else if(c==a+b)
            cout << "YES" << endl;
        else cout << "NO" << endl;
        
        
        
    }
}