

import math
import time


cisla = [int(line.strip()) for line in open("cisla.txt", 'r')]
print(cisla)

def soucet(cisla):
    for i in cisla:
        for j in cisla:
            if i + j == 2020:
                return i, j, i+j, i*j
            
                
print(soucet(cisla))















