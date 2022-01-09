#include <bits/stdc++.h>
using namespace std;



int main() {

    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;


        vector<char> a;

        for(int i=0; i<n; i++) {
            char x;
            cin >> x;
            a.push_back(x);
        }


        
        int k = 0;


        if(n==1 ){
            k = 1;
        }

        else {
        if (a[0] <= a[1])
        {
            k = 1;
            
        }
        else {
            for(int i=0; i<n; i++) {
                k++;
                if(a[i] < a[i+1]) {
                    break;
                }
                
                
            }

        }

        }

    
        // print a[0] to a[k-1] and then a[k-1] to a[0]
        for(int i=0; i<k; i++) {
            cout << a[i] ;
        }
        for(int i=k-1; i>=0; i--) {
            cout << a[i] ;
        }
        cout << endl;


    }
}