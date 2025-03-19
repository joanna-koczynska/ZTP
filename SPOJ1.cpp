// projekt 1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
    int x;
	while (true)
	{
		cin >> x;
		if (x == 42)
			break;
		cout <<x<<endl;
	}
}
