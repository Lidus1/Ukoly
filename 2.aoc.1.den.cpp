#include <iostream>
#include <string>
#include <fstream>
#include <vector>


using namespace std;

int main()
{
   
    ifstream soubor("cisla.txt");
    vector<int> cisla;
    int cislo;
    while (soubor >> cislo) {
		cisla.push_back(cislo);
        }
	for (int i = 0; i < cisla.size(); i++) {
        cout << cisla[i] << endl;
        
	}
	soubor.close();
	
    
    for (int i = 0; i < cisla.size(); i++) {
        for (int j = 0; j < cisla.size(); j++) {
            if (cisla[i] + cisla[j] == 2020) 
  
            {
                cout << "Cisla a a b jsou: " << endl; 
                cout << cisla[i] << endl;
                cout << cisla[j] << endl;
                cout << "Soucet cisel a a b je:" <<endl;
                cout << cisla[i] + cisla[j] << endl;
                cout << "Součin cisle a a b je:" << endl;
				cout << cisla[i] * cisla[j] << endl;

                 

               

			}
            
		}
	}

    for (int i = 0; i < cisla.size(); i++) {
        for (int j = 0; j < cisla.size(); j++) {
            for (int k = 0; k < cisla.size(); k++) {
                if (cisla[i] + cisla[j] + cisla[k] == 2020) 
  
            {
                cout << "Cisla a a b a c jsou: " << endl; 
                cout << cisla[i] << endl;
                cout << cisla[j] << endl;
                cout << cisla[k] << endl;
                cout << "Soucet cisel a a b a c je:" <<endl;
                cout << cisla[i] + cisla[j] + cisla[k] << endl;
                cout << "Součin cisle a a b a c je:" << endl;
                cout << cisla[i] * cisla[j] * cisla[k] << endl;


}
}
}
}
    return 0;
}
