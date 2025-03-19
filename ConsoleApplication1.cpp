
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, m, s, q;
    vector <int> S, Q, R;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
            S.push_back(s);
    }


    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> q;
        Q.push_back(q);

    }


    bool flag;

    for (int i = 0; i < n; i++)
    {
        flag = false;
        for (int j = 0; j < m; j++)
        {
            if (S[i] == Q[j])
            {
                flag = true;
                break;
            }      
        }
        if (!flag)
        {
                R.push_back(S[i]);
        }  

    }

    for (auto x : R)
        cout << x << " "  ;



}


