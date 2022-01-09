#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long

int main() {

    ll int arr[3];
    ll t;
    scanf("%lld", &t);

    while(t--) {

        int check1 = 0;
        int check2 = 0;

        ll int a[7];
        
        for(ll i = 0; i < 7; i++) {
            scanf("%lld", &a[i]);
        }

        if(a[3] + a[4] + a[5] == 2*a[6])
        {
            check1 = 1;

        }
        // if check1 == 1 then that means a,b,c < a+b, b+c, c+a

        else check2 = 1;

        if(check1 == 1) {
         arr[0] = a[0];
            arr[1] = a[1];
            arr[2] = a[2];
        }

        else if(check2 == 1) {
            arr[0] = a[0];
            arr[1] = a[1];
            arr[2] = a[3];
        }
        

        printf("%lld %lld %lld\n", arr[0], arr[1], arr[2]);
    }
}