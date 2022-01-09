#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    
    int sum = n*(n+1)/2;

    if(sum%2==0)
    {
        
        if(n%4==0)
        {
            int x = n/4;
            set<int> s1;
            set<int> s2; 
            for(int i=0; i<x; i++)
            {
                int j = i*4;
                s1.insert(j+2);
                s1.insert(j+3);
                s2.insert(j+1);
                s2.insert(j+4);
            }

            cout << "YES" << endl;
            // print size of s1 and its elements
            cout << s1.size() << endl;
            for(auto it = s1.begin(); it != s1.end(); ++it)
            {
                cout << *it << " ";
            }
            cout << endl;
            // print size of s2 and its elements
            cout << s2.size() << endl;
            for(auto it = s2.begin(); it != s2.end(); ++it)
            {
                cout << *it << " ";
            }

        }
        else if(n%4==3)
        {
            int r = 3;
            int x = n/4; 
            set<int> s1;
            set<int> s2;
            for(int i=1; i<x+1; i++)
            {
                int j = i*4;
                s1.insert(j+1);
                s1.insert(j+2);
                s2.insert(j);
                s2.insert(j+3);
            }

            s2.insert(3);
            s1.insert(1);
            s1.insert(2);
            
            cout << "YES" << endl;
            // print size of s1 and its elements
            cout << s1.size() << endl;
            
            for(auto it = s1.begin(); it != s1.end(); ++it)
            {
                cout << *it << " ";
            }
            cout << endl;
            // print size of s2 and its elements
            cout << s2.size() << endl;
            for(auto it = s2.begin(); it != s2.end(); ++it)
            {
                cout << *it << " ";
            }
            

            
              

        }

        return 0;        
    }
    else
    {
        cout << "NO" << endl;
        return 0;
    }
}