

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

struct Otazka {
    string otazka;
    string odpovedA;
    string odpovedB;
    string odpovedC;
    string spravnaOdpoved;
};



int main() {

    vector<Otazka> otazkySeznam;

    ifstream otazky2;
    otazky2.open("otazky.txt");
    if (otazky2.is_open()) {
        string radek;
        while (getline(otazky2, radek)) {
            Otazka otazka;
            stringstream ss(radek);
            getline(ss, otazka.otazka, ';');
            getline(ss, otazka.odpovedA, ';');
            getline(ss, otazka.odpovedB, ';');
            getline(ss, otazka.odpovedC, ';');
            getline(ss, otazka.spravnaOdpoved, ';');
            otazkySeznam.push_back(otazka);
        }
    }

    int spravneOdpovedi = 0;
    int spatneOdpovedi = 0;
    for (int i = 0; i < otazkySeznam.size(); i++) 
    {
        Otazka otazka = otazkySeznam[i];
        cout << otazka.otazka << endl;
        cout << "A) " << otazka.odpovedA << endl;
        cout << "B) " << otazka.odpovedB << endl;
        cout << "C) " << otazka.odpovedC << endl;
        cout << "Zadejte odpověď: ";
        string odpoved;
        cin >> odpoved;
        if (odpoved == otazka.spravnaOdpoved) {
            cout << "Správně!" << endl;
            spravneOdpovedi++;
        }
        else {
            cout << "Špatně!" << endl;
            spatneOdpovedi++;
        }

        cout << endl;
        cout << "Správně: " << spravneOdpovedi << endl;
        cout << "Špatně: " << spatneOdpovedi << endl;
        cout << endl;

    }

    return 0;

}



       











    

