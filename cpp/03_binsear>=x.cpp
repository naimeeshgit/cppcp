#include <bits/stdc++.h>
using namespace std;


int binarysearch(int *arr, int l, int r, int x) {

   int ans = -1;
   while(l<=r)
   {
       int m = l + (r-l)/2;

       if(arr[m] >= x)
       {
         ans = arr[m];
         r = m-1; // to search on the left for smaller numbers which are greater than x
       }

       else l = m + 1; // if m < x => search on the right for bigger numbers.

   }

   return ans;


}



int main() {


    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cin >> x;
    int ans = binarysearch(arr, 0, n-1, x);
    cout << ans << endl;


}