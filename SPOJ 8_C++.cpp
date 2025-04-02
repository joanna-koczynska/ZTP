#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {

    int t;
    cin >> t;

    string expr, onp="";

    for (int x = 0; x < t; x++)
    {
        cin >> expr;

        stack<char>symbols; //stos ze znakami '(' / '+'

        for (int i = 0; i < expr.length(); i++)
        { 
            if (isalnum(expr[i])) //jeżeli znak to litera 
                onp += expr[i];

            if (!isalnum(expr[i])) //jeżeli '(' / '+'
                symbols.push(expr[i]);

            if (expr[i] == ')') //jezeli znajdzie nawias zamykający
            {
                symbols.pop();
                while (symbols.top() != '(') //dopoki na wierzcholku nie będzie nawiasu otwierajacego
                {
                    onp += symbols.top();
                    symbols.pop();
                }
                symbols.pop(); //usuwamy nawias '('
            }
        }
            
        cout << onp << endl;
        onp = "";
    }

    return 0;
}
