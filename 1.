#include <iostream>

using namespace std;

int main()
{
	int vyska;
	int sirkak;
	int vyskak;

	cout << "Zadejte vysku koruny: ";
	cin >> vyska;
	cout << "Zadejte sirku kmene: ";
	cin >> sirkak;
	cout << "Zadejte vysku kmene: ";
	cin >> vyskak;

	for (int i = 1; i <= vyska; i++)
	{
		for (int m = 0; m < vyska - i; m++)
		{
			cout << " ";
		}

		for (int j = 0; j < i; j++)
		{
			if (j==0)cout << "*";
			else cout << "**";
		}
		cout << endl;
		 
	}

	for (int i = 0; i < vyskak; i++)

	{
		for (int i = 0; i < (vyska-(sirkak+1)/2); i++)
		{
			cout << " ";
		}
		for (int i = 0; i < sirkak; i++)
		{
			cout << "!";
		}
		cout << endl;
	}


}