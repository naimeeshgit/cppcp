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


int mex_finder(vector <int> a, int term) {
    
    
    // make a vector b == sorted form of a from a[0] to a[term-1]
    vector <int> b(term);
    for (int i = 0; i < term; i++) {
        b[i] = a[i];
    }
    sort(b.begin(), b.end());
    int mex = 0;
    for (int i = 0; i < term; i++) {
        if(b[i] == mex)
        {
            mex++;
        }
    }
    return mex;

}


int main() {
    amazing;
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector <int> a(n);
        vector<int> s;

        int mex_init = a[0];
        // cout << mex_init << endl;
        for(int i=1; i<n; i++)
        {
            int mex_return = mex_finder(a, i);
           //  cout << mex_return << endl;
            if(mex_init < mex_return)
            {
                mex_init = mex_return;
            }
            else{
                  s.push_back(mex_init);
            }
        }
      
        for(int i=0; i<s.size();i++)
        {
            cout << s[i] << " ";
        }

        
        

    }
}