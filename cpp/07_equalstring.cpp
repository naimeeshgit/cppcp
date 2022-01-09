#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {

        string s;
        cin >> s;

        int n = s.length();

        int N = 0;
        int E = 0;

        for(int i = 0; i < n; i++) {
            if(s[i] == 'N') {
                N++;
            } else {
                E++;
            }

           

         }
         
          if(N==1) {
                cout << "NO" << endl;
            }
            else {
                cout << "YES" << endl;
            }

    }


}