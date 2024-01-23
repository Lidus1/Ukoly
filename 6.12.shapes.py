class Tvar:
    def __init__(self):
        print("Vykresli obrazec")

class Ctverec(Tvar):
    def __init__(self, a):
        super().__init__()
        self.a = a
        print(f"Vykresli ctverec o strane {a}")

    def getA(self):
        return self.a

    def Obsah(self):
        return self.a * self.a

    def Obvod(self):
        return 4 * self.a

class Obdelnik(Ctverec):
    def __init__(self, a, b):
        super().__init__(a)
        self.b = b
        print(f"Vykresli obdelnik o stranach {a} a {b}")

    def getB(self):
        return self.b

    def Obsah(self):
        return self.a * self.b

    def Obvod(self):
        return 2 * (self.a + self.b)

class Kruh(Tvar):
    def __init__(self, r):
        super().__init__()
        self.r = r
        print(f"Vykresli kruh o polomeru {r}")

    def getR(self):
        return self.r

    def Obvod(self):
        return 2 * 3.14 * self.r

    def Obsah(self):
        return 3.14 * self.r * self.r

class Krychle(Ctverec):
    def __init__(self, a):
        super().__init__(a)
        print(f"Vykresli krychli o strane {a}")

    def Objem(self):
        return self.a * self.a * self.a

class Kvadr(Obdelnik):
    def __init__(self, a, b, c):
        super().__init__(a, b)
        self.c = c
        print(f"Vykresli kvadr o stranach {a}, {b} a {c}")

    def getC(self):
        return self.c

    def Objem(self):
        return self.a * self.b * self.c

class Valec(Kruh):
    def __init__(self, r, v):
        super().__init__(r)
        self.v = v
        print(f"Vykresli valec o polomeru {r} a vysce {v}")

    def getV(self):
        return self.v

    def Objem(self):
        return 3.14 * self.r * self.r * self.v

class Koule(Kruh):
    def __init__(self, r):
        super().__init__(r)
        print(f"Vykresli kouli o polomeru {r}")

    def Objem(self):
        return 4/3 * 3.14 * self.r * self.r * self.r


r2 = Obdelnik(2, 3)
print("Strana a:", r2.getA())
print("Strana b:", r2.getB())
print("Obsah obdelniku:", r2.Obsah())
print("Obvod obdelniku:", r2.Obvod())

s2 = Ctverec(2)
print("Strana a:", s2.getA())
print("Obsah ctverce:", s2.Obsah())
print("Obvod ctverce:", s2.Obvod())

ci2 = Kruh(2)
print("Polomer:", ci2.getR())
print("Obvod kruhu:", ci2.Obvod())
print("Obsah kruhu:", ci2.Obsah())

c2 = Krychle(2)
print("Strana a:", c2.getA())
print("Objem krychle:", c2.Objem())

b2 = Kvadr(2, 3, 4)
print("Strana a:", b2.getA())
print("Strana b:", b2.getB())
print("Strana c:", b2.getC())
print("Objem kvadru:", b2.Objem())

cy2 = Valec(2, 3)
print("Polomer:", cy2.getR())
print("Vyska:", cy2.getV())
print("Objem valce:", cy2.Objem())

ba2 = Koule(2)
print("Polomer:", ba2.getR())
print("Objem koule:", ba2.Objem())



















