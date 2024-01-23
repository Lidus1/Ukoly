

#include <iostream>

using namespace std;

int main()
{
    int cislo;
    int vysledek = 1;

    cout << "Zadej cislo: ";
    cin >> cislo;

    for (int i = 1; i <= cislo; i++)
    {
        vysledek *= i;
    }

    cout << "Faktorial cisla " << cislo << " je " << vysledek << endl;

    return 0;
}
