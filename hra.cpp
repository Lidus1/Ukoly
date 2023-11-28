
// program pro vytvoření a spuštění hry šibenice

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>
#include <fstream>

using namespace std;

void HanginMan()
{
    cout << "  +---+" << endl;
    cout << "  |   |" << endl;
    cout << "  O   |" << endl;
    cout << " <I>  |" << endl;
    cout << "    |" << endl;
    cout << "      |" << endl;
    cout << "=========" << endl;


}

void Alphabet() {
    char Abeceda[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < 26; i++) {
        cout << Abeceda[i] << " ";
    }
}

int main() 

{
    Alphabet();
    cout << endl;

    HanginMan();
    return 0;











}











