#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;

        int a[26] = {0};
        string ans;

        for(int i=0; i<s.size();i++)
        {
            a[s[i]-'a']++;
        }

        for(int i=0; i<26;i++)
        {
            if(a[i] !=0)
            {
                if(a[i]==2)
                {
                    ans.push_back(i+'a');
                    ans.push_back(i+'a');
                }
                else
                {
                    ans.push_back(i+'a');
                }
            }
        }

        cout << ans << endl;
    }
}