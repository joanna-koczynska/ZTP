//FCTRL2 - Small factorials
#include <iostream>
#include <vector>
#include <string>
using namespace std;

string multiplies_str(string a, string b) {
	int memory, temp;
	string multi;
	for (int i = a.length() - 1; i >= 0; i--)
	{
		for (int j = b.length()-1; j >= 0; j--)
		{
			temp = (a[i] - '0') * (b[i] - '0');
			memory = temp / 10;

		}
	}
}

int main()
{
	int t, n;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		
	}
	
}
