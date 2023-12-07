import requests
import re
from os.path import join, realpath, dirname, exists

with open(join(dirname(realpath(__file__)),"othelo.txt"), "r", encoding="utf-8") as f:
    book = f.read()
    vety_bez_tecek = re.split(r'\.{3,}', book)
    vety = re.split(r'\b[a-z][a-z]*\b(\b[a-z]*[.!?])(?=\W{1})', vety_bez_tecek[0])
    pocet_vet = len(vety)
    print("Pocet vet: ", pocet_vet)

    




