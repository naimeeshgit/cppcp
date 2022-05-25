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

        int size = s.size();

        int te = stoi(s);

        if (te % 7 == 0)
        {
            cout << te << endl;
        }
        else
        {
            int bre = 0;

            if (s.size() == 1)
            {
                int temp = stoi(s);
                temp = temp - temp % 7;
                cout << temp << endl;
            }
            else if (s.size() == 2)
            {
                int temp = stoi(s);

                // tens digit:
                int y = temp / 10;
                // cout << y << endl;
                for (int i = 0; i < 10; i++)
                {
                    int t = y * 10 + i;
                    if (t % 7 == 0)
                    {
                        cout << t << endl;
                        bre=1;
                        break;
                    }
                }
            }

            if (bre == 1)
            {
                continue;
            }

            else if (s.size() == 3)
            {
                int temp = stoi(s);
                int y = temp / 100;
                int z = (temp % 100) /10;
                // cout << y<< " " << z << endl;
                for (int i = 0; i < 10; i++)
                {
                    int t = y * 100 + z * 10 + i;
                    // cout << t << endl;
                    if (t % 7 == 0)
                    {
                        cout << t << endl;
                        bre=1;
                        break;
                    }
                }

            }
             if (bre == 1)
            {
                continue;
            }
        }
    }
}