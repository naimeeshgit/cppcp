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

        // make a 2d vector with 2 rows and n columns
        struct ab {
            int a, b;
        
        };

        typedef struct ab ab;
        vector<ab> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i].a;
        }

        for(int i=0; i<n;i++)
        {
            cin >> v[i].b;
        }
        

        // sort according to b in decreasing order , if b is same then sort according to a in decreasing order
        sort(v.begin(), v.end(), [](ab a, ab b) {
            if (a.b == b.b)
                return a.a > b.a;
            return a.b > b.b;
        });

        // // print structure
        // for(int i = 0; i < n; i++) {
        //     cout << v[i].a << " " << v[i].b << endl;
        // }

        // now we have sorted according to b and a

        int check=1;
        int count = 0;
        int RAM=k;
        while(check!=0) {

            count = 0;
            for(int i=0; i<n;i++)
            {
                if(v[i].a <= RAM && v[i].a != -1)
                {
                    RAM = RAM + v[i].b;
                    v[i].a = -1;
                    // cout << "RAM" << RAM << endl;
                }
            }

            for(int i=0; i<n;i++)
            {
                if(v[i].a <= RAM && v[i].a != -1)
                {
                    count++;
                }

            }

            if(count == 0)
            {
                break;

            }

        }

        cout << RAM << endl;





        


        

        
        
    }
}