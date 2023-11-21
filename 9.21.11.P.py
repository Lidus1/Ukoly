




def koruna(vyska:int =5)->None:
    for i in range (vyska):
        print(" "*(vyska-i-1),"*"*(2*i+1))

def kmen(vyska_stromu: int = 5,vyska_kmene:int =3, sirka:int =3)->None:
    for _ in range(vyska_kmene):
        print(" "*int(vyska_stromu-sirka/2),"#"*sirka)

def test():
    pass    

koruna()    
kmen()






