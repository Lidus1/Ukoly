

import math
import random

def matice (radek, sloupec):
    matice = [[random.randint(0, 9) for _ in range(sloupec)] for _ in range(radek)]
    return matice

def vypis(matice, radek, sloupec):
    print("Matice:")
    for i in range(radek):
        for j in range(sloupec):
            print(matice[i][j], end=" ")
        print()

def matice1 (radek1, sloupec1):
    matice1 = [[random.randint(0, 9) for _ in range(sloupec1)] for _ in range(radek1)]
    return matice1

def vypis(matice1, radek1, sloupec1):
    print("Matice:")
    for i in range(radek1):
        for j in range(sloupec1):
            print(matice1[i][j], end=" ")
        print()


print ("Zadejte rozměry matice: ")
radek = int(input("\t Počet řádků: "))
sloupec = int(input("\t Počet sloupců: "))
matice = matice(radek, sloupec)

vypis(matice, radek, sloupec)

print ("Zadejte rozměry druhé matice: ")
radek1 = int(input("\t Počet řádků: "))
sloupec1 = int(input("\t Počet sloupců: "))
matice1 = matice1(radek1, sloupec1)

vypis(matice1, radek1, sloupec1)




                        
            





















