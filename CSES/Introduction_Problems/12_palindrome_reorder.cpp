#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.size();
    vector<int> alphabets(26);
    long long int odd_count = 0;

    for (int i = 0; i < len; i++)
    {
        int x = s[i] - 'A';
        alphabets[x]++;
    }

    // for(int i=0; i<26;i++)
    // {
    //     cout << alphabets[i] << " ";

    // }

    // for(int i=0; i<26;i++)
    // {
    //     char c = i+'A';
    //     cout << c << " ";

    // }

    for (int i = 0; i < 26; i++)
    {
        if (alphabets[i] % 2 != 0)
        {
            odd_count++;
        }
    }
    if (odd_count > 1)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        string ans;
        char mid_char = '\0';
        for (int i = 0; i < 26; i++)
        {
            if (alphabets[i] % 2 != 0)
            {
                mid_char = i + 'A';

                // cout << "h" << mid_char << endl;

                alphabets[i] = alphabets[i] - 1;
            }
        }

        // all even left
        for (int i = 0; i < 26; i++)
        {
            if (alphabets[i] != 0)
            {
                for (int j = 0; j < alphabets[i] / 2; j++)
                {
                    char c = i + 'A';
                    // cout << c << endl;
                    ans.push_back(c);
                }
            }
        }
        // ans.push_back(mid_char);
        string sna = string(ans.rbegin(),ans.rend());
        string answer;
        if(mid_char != '\0')
        answer = ans + mid_char + sna;
        else 
        answer = ans + sna;

        cout << answer << endl;


       
    }
}