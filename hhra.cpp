
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <fstream>
#include <ctime>
#include <cstdlib>



using namespace std;


string generujSlova()
{
   int cislo = rand() % 100;
    string slovo = "";
    ifstream input ("slova.txt");
    for (int i = 0; i < cislo; i++)
    {
        input >> slovo;
    }

    return slovo;

    



}