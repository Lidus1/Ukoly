from os.path import realpath, dirname, join

with open(join(dirname(realpath(__file__)), "moresecode.txt"), "r", encoding="utf-8") as file:
    data = file.read().split("\n") 

    d={}
    for i in data:
        d[i.split(" ")[0]] = i.split(" ")[1]

text =input("Zadejte slovo: " )
print(text)

def preloz(text):
    morse = ""
    for i in text:
        morse += d[i.upper()] + " "
    return morse

print(preloz(text))

















    
    




