#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--) {
        int X;
        cin >> X;

        string s;
        cin >> s;

        int c,n,d;
        c=0;
        n=0;
        d=0;
        for(int i=0; i<s.size(); i++) {
            if(s[i] == 'C') {
                c++;
            }
            else if(s[i] == 'N') {
                n++;
            }
            else if(s[i] == 'D') {
                d++;
            }
        }

        int point_c = 0;
        int point_chef = 0;

        point_c = c*2 + d;
        point_chef = n*2 + d;

        if(point_c > point_chef) {
            cout << 60*X << endl;
        }
        else if(point_c == point_chef)
        {
            cout << 55*X << endl;
        }
        else cout << 40*X << endl;
    }
}