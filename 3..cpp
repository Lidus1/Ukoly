// vytváření dvou matic pomocí dynmického pole a jejich násobení, dělení, sčítání a odčítání 

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>




using namespace std;

// vytvoření matice pomocí dynamického pole, aby se daly zadávat různé hodnoty
int** createMatrix(int rows, int cols)
{
	int** matrix = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new int[cols];
	}
	return matrix;
}


// vytvoření 2. matice pomocí dynamického pole
int** createMatrix2(int rows, int cols)
{
	int** matrix2 = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		matrix2[i] = new int[cols];
	}
	return matrix2;
}


int main()
{
	// zadej počet řádků první matice
	int rows;
	cout << "Zadej pocet radku prvni matice: " << endl;
	cin >> rows;

	// zadej počet sloupců první matice
	int cols;
	cout << "Zadej pocet sloupcu prvni matice: " << endl;
	cin >> cols;

	// zadej hodnoty první matice podle počtu řádků a sloupců
	int** matrix = createMatrix(rows, cols);
	cout << "Zadej hodnoty prvni matice: " << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> matrix[i][j];

		}
	}

	// vypiš první matici
	cout << "Prvni matice: " << endl;
	for (int i = 0; i < rows; i++)
	{
		cout << endl;
		for (int j = 0; j < cols; j++)
		{
			cout << matrix[i][j] << " ";
		}
	}


	// zadej počet řádků druhé matice
	int rows2;
	cout << "Zadej pocet radku druhe matice: " << endl;
	cin >> rows2;

	// zadej počet sloupců druhé matice
	int cols2;
	cout << "Zadej pocet sloupcu druhe matice: " << endl;
	cin >> cols2;

	// zadej hodnoty druhé matice podle počtu řádků a sloupců
	int** matrix2 = createMatrix2(rows2, cols2);
	cout << "Zadej hodnoty druhe matice: " << endl;
	for (int i = 0; i < rows2; i++)
	{
		for (int j = 0; j < cols2; j++)
		{
			cin >> matrix2[i][j];
		}

	}

	// vypiš druhou matici
	cout << "Druha matice: " << endl;
	for (int i = 0; i < rows2; i++)
	{
		cout << endl;
		for (int j = 0; j < cols2; j++)
		{
			cout << matrix2[i][j] << " ";
		}
	}

	// podmínka stejného počtu řádků a sloupců
	if (rows != rows2 || cols != cols2)
	{
		cout << "Matice nemaji stejny pocet radku a sloupcu, nelze provest operace." << endl;
		return 0;
	}

	// výpočet součtu matic a vypsání výsledku 
	cout << "Soucet matic: " << endl;
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        cout << (matrix[i][j] + matrix2[i][j]) << " ";
    }
    cout << endl;
}

	//násobení matic
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        cout << (matrix[i][j] * matrix2[i][j]) << " ";
    }
    cout << endl;
}
    
        //dělení matic
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        cout << (matrix[i][j] / matrix2[i][j]) << " ";
    }
    cout << endl;
}
    
        //odčítání matic    
cout << "Rozdil matic: " << endl;
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        cout << (matrix[i][j] - matrix2[i][j]) << " ";
    }
    cout << endl;
}

    return 0;
    



}


