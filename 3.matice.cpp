

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>




using namespace std;


int** createMatrix(int rows, int cols)
{
	int** matrix = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new int[cols];
	}
	return matrix;
}



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
	
	int rows;
	cout << "Zadej pocet radku prvni matice: " << endl;
	cin >> rows;

	
	int cols;
	cout << "Zadej pocet sloupcu prvni matice: " << endl;
	cin >> cols;

	
	int** matrix = createMatrix(rows, cols);
	cout << "Zadej hodnoty prvni matice: " << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> matrix[i][j];

		}
	}

	
	cout << "Prvni matice: " << endl;
	for (int i = 0; i < rows; i++)
	{
		cout << endl;
		for (int j = 0; j < cols; j++)
		{
			cout << matrix[i][j] << " ";
		}
        cout << endl;
	}


	
	int rows2;
	cout << "Zadej pocet radku druhe matice: " << endl;
	cin >> rows2;

	
	int cols2;
	cout << "Zadej pocet sloupcu druhe matice: " << endl;
	cin >> cols2;

	
	int** matrix2 = createMatrix2(rows2, cols2);
	cout << "Zadej hodnoty druhe matice: " << endl;
	for (int i = 0; i < rows2; i++)
	{
		for (int j = 0; j < cols2; j++)
		{
			cin >> matrix2[i][j];
		}

	}

	
	cout << "Druha matice: " << endl;
	for (int i = 0; i < rows2; i++)
	{
		cout << endl;
		for (int j = 0; j < cols2; j++)
		{
			cout << matrix2[i][j] << " ";
		}
        cout << endl;
	}

	
	if (rows != rows2 || cols != cols2)
	{
		cout << "Matice nemaji stejny pocet radku a sloupcu, nelze provest operace." << endl;
		return 0;
	}

	
	cout << "Soucet matic: " << endl;
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        cout << (matrix[i][j] + matrix2[i][j]) << " ";
    }
    cout << endl;
}

	
cout << "Soucin matic: " << endl;
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        cout << (matrix[i][j] * matrix2[i][j]) << " ";
    }
    cout << endl;
}
    
        
cout << "Podil matic: " << endl;    
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        cout << (matrix[i][j] / matrix2[i][j]) << " ";
    }
    cout << endl;
}
    
      
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


