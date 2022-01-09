#include <bits/stdc++.h>
using namespace std;


int main() {

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(101);

        for(int i=0; i<n; i++) {
            int x;
            cin >> x;
            
            if(x<0) {
                a[-x]++;
            } else {
                a[x]++;
            }
            
        }

    int count = 0;

        for(int i=0 ; i<101 ; i++){

            if(i == 0 && a[i] >=1) {
                count++;
            }
            else if(a[i] == 1) {
                count++;

            }
            else if(a[i] > 1) {
                count = count + 2;
            }

        }

        cout << count << endl;

    }
}
