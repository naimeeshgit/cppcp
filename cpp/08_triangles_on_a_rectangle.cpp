#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (lli i = a; i <= b; i++)
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    lli t;
    cin >> t;

    while(t--) {
        
        lli h,w;
        cin >> w >> h;



        lli k1;
        cin >> k1;
        int v1[k1];
        REP(i,0,k1-1) {
            cin >> v1[i];
        }



        lli k2; 
        cin >> k2;
        lli v2[k2];
        REP(i,0,k2-1) {
            cin >> v2[i];
        }

        lli X_0 = h*(v1[k1-1] - v1[0]);
        lli X_h = h*(v2[k2-1] - v2[0]);

        lli area = max(X_0,X_h);

        
        lli k3;
        cin >> k3;
        lli v3[k3];
        REP(i,0,k3-1) {
            cin >> v3[i];
        }

        lli k4;
        cin >> k4;
        lli v4[k4];
        REP(i,0,k4-1) {
            cin >> v4[i];
        }

        lli Y_0 = w*(v3[k3-1] - v3[0]);
        lli Y_w = w*(v4[k4-1] - v4[0]);

        lli area2 = max(Y_0,Y_w);

        lli ans = max(area,area2);

        cout << ans << endl;


         
    }


    return 0;
}