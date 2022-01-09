#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<lli> vlli;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    lli t;
    cin >> t;

    while(t--)
    {
        lli n,k,x;
        cin >> n >> k >> x;
        
        char str[n];
        cin >> str;
        // cout << str << endl;
        int ast_count = 0;

        string s;
        int part_count = 1;
        vlli v;
        int check = 1;


        char c1 = str[0];
        s.PB(c1);



        REP(i,1,n-1)
        {
            
            char c;
            c = str[i];
            // remove more than two consecutive *
            if(i > 0 && str[i] == '*' && str[i-1] == '*')
            {
               part_count++;
               
            }
            else {
                s.PB(c);
                v.PB(part_count);
                check = 0;
            }
            

            if(check == 0)
            {
                part_count = 1;
                check = 1;
            }
            

            
        }

        cout << s << endl;
        // print vector v
        for(int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;










        
        
    
    }


    return 0;
}