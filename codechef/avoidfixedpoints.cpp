#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<int> v;
        
        for(int i=0; i<n; i++)
        {
            int temp;
            cin >> temp;
            temp = temp-1;

            v.push_back(temp);

        }

        int check = -1;
        int k =0;
        int bookmark = 0;
        while(check < 0)
        {
           check = 0;
           for(int i=bookmark; i<v.size(); i++)
           {
               
               if(v[i] == i)
               {
                   bookmark = i;
                   k++;
                   auto itPos = v.begin() + i;
                   auto newIt = v.insert(itPos, -1);
                   check = -1;
                   break;
                
               }

           }

           if(check == 0)
           {
               break;
           }
        }


        cout << k << endl;

        // for(int i=0; i<v.size() ; i++)
        // {
        //     cout << v[i] << " ";
        // }
        
        // cout << endl;

    }
}