#include <bits/stdc++.h> 
using namespace std; 
#define ll long long
// Function to return gcd of a and b 
ll int gcd(ll int a, ll int b) 
{ 
 if (a == 0) 
 return b; 
 return gcd(b % a, a); 
} 
// Function to find gcd of array of 
// numbers 
ll int findGCD(ll int arr[], ll int n) 
{ 
 ll int result = arr[0]; 
 for (ll int i = 1; i < n; i++) 
 result = gcd(arr[i], result); 
 return result; 
} 
// Driven code 
int main() 
{ 
    ll int t;
    cin>>t;

    while(t--)
    {
        ll int n;
        cin>>n;

        ll int arr[n];
        ll int arr1[n/2];
        ll int arr2[(n+1)/2];

        for(ll int i=0;i<n;i++)
        {
            cin>>arr[i];

            if(i%2 == 0) 
            {
                arr1[i/2] = arr[i];
            }
            else
            {
                arr2[(i+1)/2] = arr[i];
            }

        }

        int gcd1 = findGCD(arr1,n/2);
        int gcd2 = findGCD(arr2,(n+1)/2);

        if(gcd1 )
        cout<<findGCD(arr,n)<<endl;
    }
} 