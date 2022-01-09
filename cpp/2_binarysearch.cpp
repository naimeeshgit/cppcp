#include <bits/stdc++.h>
using namespace std;


int binarysearch(int *arr, int l, int r, int x) {

    while(l<=r) {      
        int m = l + (r-l)/2;

        if(arr[m] == x)
        return m;

        if(arr[m] > x)
        r = m-1;

        else l = m+1;

    }

    return -1;



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
    int index = binarysearch(arr, 0, n-1, x);
    cout << index << endl;


}