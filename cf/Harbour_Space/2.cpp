#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int index = 0;
        int max_sum = 0;

        if (s.size() == 1)
        {
            cout << s << endl;
            continue;
        }

        if (s.size() == 2)
        {
            int summ = s[0] - '0' + s[1] - '0';
            
            string ans;
            // convert summ into string
            string str = to_string(summ);
            for (int i = 0; i < str.size(); i++)
            {
                ans.push_back(str[i]);
            }

            cout << ans << endl;
            continue;
        }

        int check = 0;
        int check_sum = 0;
        // check if two digit sums are forming or not
        for (int i = 0; i < s.size() - 1; i++)
        {

            int sum = s[i] - '0' + s[i + 1] - '0';
            if (sum > 9)
            {
                check = 1;
            }
            else
            {
                check_sum = s[0] - '0' + s[1] - '0';
            }
        }

        if (check == 0)
        {
            string ans;

            ans.push_back(check_sum + '0');
            // copy rest of the string from s[2] to s[n-1] into ans
            for (int i = 2; i < s.size(); i++)
            {
                ans.push_back(s[i]);
            }

            cout << ans << endl;
        }

        else
        {

            int t_check = 0;
            int sum = 0;
            for (int i = s.size() - 1; i > 0; i--)
            {
                sum = s[i] - '0' + s[i - 1] - '0';
                if (sum > 9)
                {
                    t_check = 1;
                    index = i;
                    break;
                }
            }

            if (t_check == 1)
            {
                sum = s[index] - '0' + s[index - 1] - '0';
            }

            // copy full s into ans except change s[index] and s[index-1]
            string ans;
            for (int i = 0; i < index-1; i++)
            {
                ans.push_back(s[i]);
            }

            string str = to_string(sum);
            for (int i = 0; i < str.size(); i++)
            {
                ans.push_back(str[i]);
            }

            for (int i = index + 1; i < s.size(); i++)
            {
                ans.push_back(s[i]);
            }
            cout << ans << endl;
        }
    }
}