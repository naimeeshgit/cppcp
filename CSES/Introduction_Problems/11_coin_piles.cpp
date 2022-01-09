#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin >> t;

    while(t--) {
       long long int a,b;
       cin >> a >> b;
       if(a<b)
       swap(a,b);

       if(a>2*b)
       cout << "NO" << endl;

       else {
           a %=3 , b%=3 ;
           if(a<b)
           swap(a,b);

           if((a==2 && b==1) || (a==0 && b==0))
           cout << "YES" << endl;
           else cout << "NO" << endl;
       }
    }
}