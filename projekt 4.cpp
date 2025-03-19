#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    string l, r1, r2, r3;
    int space, sum;
    cin >> n ;
    cin.ignore();
        for (int i = 0; i < n; i++)
        {
           getline(cin, l);
           
          space= l.find(" ");
          r1 = l.substr(0, space);
          r2 = l.substr(space + 1);

        reverse(r1.begin(), r1.end());
        reverse(r2.begin(), r2.end());

        sum = stoi(r1) + stoi(r2);

        r3 = to_string(sum);
        reverse(r3.begin(), r3.end());

        sum = stoi(r3);

        cout << sum << endl;
      
}
       
}
