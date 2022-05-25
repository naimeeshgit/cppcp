#include <bits/stdc++.h>
using namespace std;

int solve(string A)
{

    int num = 0;
    int self = 0;
    bool vowel = false;
    bool consonant = false;
    int a[A.size()-1] = {0};

    for (int i = A.size() - 1; i >= 0; i--)
    {
        if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u')
        {
            vowel = true;
        }
        else {
            vowel = false;
        }
        for (int j = i - 1; j >= 0; j--)
        {
            if(vowel == true && (A[j] != 'a' && A[j] != 'e' && A[j] != 'i' && A[j] != 'o' && A[j] != 'u'))
            {
                a[j] = 1;

            }
            else if(vowel == false && (A[j] == 'a' || A[j] == 'e' || A[j] == 'i' || A[j] == 'o' || A[j] == 'u'))
            {
                a[j] = 1;
            }
        }
    }

    for (int i = A.size() - 2; i >= 0; i--)
    {
        a[i] = a[i] + a[i + 1];
    }

    // sum of a
    for (int i = 0; i < A.size(); i++)
    {
        num = num + a[i];
    }

    return num;
}




int main()
{
    int n = solve("aba");
    cout << n << endl;
}
