
#include <iostream>
using namespace std;
int main()
{
    int T, N, zeroCounter = 0;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> N;

        while (N>=5)
        {
           N /= 5;
           zeroCounter += N;
        }
        cout << zeroCounter << endl;
        zeroCounter = 0;
       
    }
}