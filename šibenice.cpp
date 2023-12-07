
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include <list>



using namespace std;


string generujSlova()
{

    ifstream soubor("slova.txt");
    string slovo;
    string slova[100]; 
    for (int i = 0; i < 100; ++i)
    {
        soubor >> slova[i];
    }
    soubor.close();
    slovo = slova[rand() % 100];   
    return slovo;
    
}

list<int> hledejPismeno(string slovo, char pismeno)
{
    list<int> pozice;
    
    for (int i = 0; i < slovo.length(); i++)
    {
        if (slovo[i] == pismeno)
        {
            pozice.push_back(i);
        }
    }
    return pozice;
   
}







int main()
{
    
    char pismeno;
    string aaa = generujSlova();
    cin >> pismeno;
    cout << aaa << endl;
    cout << hledejPismeno(aaa, pismeno).size() << endl; 


















    return 0;
}


// funkce, která kontroluje, zda je slovo napsané celé správně

