
#include <iostream>
#include <string> 
#include <algorithm>
#include <math.h>

using namespace std;

string addToString(string x)
{
	int carry=1, digit;
	for (int i = x.length() - 1; i >= 0; i--)
	{
		digit = x[i] - '0';
		digit += carry;         
		if (digit > 9) {
			x[i] = '0';        
			carry = 1;          
		}
		else {
			x[i] = digit + '0';
			carry = 0;          
			break;
		}
		
	}
	if (carry == 1) {
			x.insert(x.begin(), '1');
		}
	return x;
}



int main()
{
	int t, left_int, middle_int;
	string left, right, revL, k, palindrom, newLeft, middle;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> k;
		left = k.substr(0, floor((float)k.length() / 2));
		right = k.substr(ceil((float)k.length() / 2) , floor((float)k.length() / 2));
		revL = left;
		reverse(revL.begin(), revL.end());


		if (k.length() == 1 && k!="9")
		{
			cout<< stoi(k)+1<<endl;
		}

		else if (k.length() == 1 && k == "9")
		{
			cout << stoi(k) + 2<<endl;
		}
		else
		{
			//parzyste
			if (k.length() % 2 == 0)
			{
				if (revL > right)
				{
					palindrom = left + revL; //34|43
					cout << palindrom << endl;
				}
				else
				{
					if (left.back() == '9')
					{
						
						newLeft = addToString(left); //dodanie 1 do lewej strony

						if (newLeft.length() > left.length()) //jezeli dł sie zmieniła 99->100
						{
							left = newLeft;
							revL = left.substr(0, left.length() - 1); //podciąg bez ostatniej cyfry 
							reverse(revL.begin(), revL.end());

							palindrom = left + revL; //100 0 01
							cout << palindrom << endl;
						}
						else
						{ //dł sie nie zmieniła 19->20
							left = newLeft;
							revL = left;
							reverse(revL.begin(), revL.end());

							palindrom = left + revL; //20|02
							cout << palindrom << endl;
						}
					}
					else //ostatnia cyfra lewej strony nie jest 9 (21)
					{
						left_int = left[left.length()-1] - '0'; //ostatnia cyfra na int
						
						left_int += 1;
						
						newLeft = to_string(left_int);
						left[left.length() - 1] = newLeft[0]; //ostatnia cyfra to teraz nowa +1
						revL = left;
						reverse(revL.begin(), revL.end()); 

						palindrom = left + revL; //22|22
						cout << palindrom << endl;
					}
				}
			}

			//nieparzyste
			else
			{
				middle = k.substr(ceil((float)k.length() / 2) - 1, 1); //wyznaczamy środek

				if (revL > right) //12 3 12
				{
					palindrom = left + middle + revL;
					cout << palindrom << endl; // 12 3 21
				}



				if (revL <= right) 
				{
					if (middle != "9") //8 0 8
					{
						middle_int = stoi(middle);
						middle_int += 1; //dodajemy do srodka 1
						palindrom = left + to_string(middle_int) + revL; //8 1 8
						cout << palindrom << endl;
					}

					if (middle == "9") //10 9 01
					{
						
						newLeft = addToString(left + middle); //łaczymy lewą str i srodek i dodajemy 1
						
						if (newLeft.length() > (left.length() + 1)) //jezeli dł sie zmieniła po dodaniu 1
						{
							left = newLeft.substr(0, newLeft.length() - 1); // lewa str = bez nowego wyliczonego środka
						}
						else
						{
							left = newLeft; //109+1 = 110
						}
						revL = newLeft.substr(0, newLeft.length() - 1); //odwracamy tylko lewą str bez srodka
						reverse(revL.begin(), revL.end());

						palindrom = left + revL; //11 0 11
						cout << palindrom << endl;
					}

				}
			}

		}
		}
}