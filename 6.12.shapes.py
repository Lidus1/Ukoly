class Shape:
    def __init__(self):
        print("Vykresli obrazec")

class Square(Shape):
    def __init__(self, a):
        super().__init__()
        self.a = a
        print(f"Vykresli ctverec o strane {a}")

    def getA(self):
        return self.a

class Rectangle(Square):
    def __init__(self, a, b):
        super().__init__(a)
        self.b = b
        print(f"Vykresli obdelnik o stranach {a} a {b}")

    def getB(self):
        return self.b



class Obsah(Rectangle):
    def __init__(self, a, b):
        super().__init__(a, b)
        self.obsah = a * b
        print(f"Vypocitej obsah obdelniku o stranach {a} a {b}")

    def getObsah(self):
        return self.obsah

class Obvod(Rectangle):
    def __init__(self, a, b):
        super().__init__(a, b)
        self.obvod = 2 * (a + b)
        print(f"Vypocitej obvod obdelniku o stranach {a} a {b}")

    def getObvod(self):
        return self.obvod

class ObsahSquare(Square):
    def __init__(self, a):
        super().__init__(a)
        self.obsah = a * a
        print(f"Vypocitej obsah ctverce o strane {a}")

    def getObsah(self):
        return self.obsah

class ObvodSquare(Square):
    def __init__(self, a):
        super().__init__(a)
        self.obvod = 4 * a
        print(f"Vypocitej obvod ctverce o strane {a}")

    def getObvod(self):
        return self.obvod

class Circle(Shape):
    def __init__(self, r):
        super().__init__()
        self.r = r
        print(f"Vykresli kruh o polomeru {r}")

    def getR(self):
        return self.r        


class ObvodCircle(Circle):
    def __init__(self, r):
        super().__init__(r)
        self.obvod = 2 * 3.14 * r
        print(f"Vypocitej obvod kruhu o polomeru {r}")

    def getObvod(self):
        return self.obvod

class ObsahCircle(Circle):
    def __init__(self, r):
        super().__init__(r)
        self.obsah = 3.14 * r * r
        print(f"Vypocitej obsah kruhu o polomeru {r}")

    def getObsah(self):
        return self.obsah        

class Cube(Square):
    def __init__(self, a):
        super().__init__(a)
        print(f"Vykresli krychli o strane {a}")

class Objem(Cube):
    def __init__(self, a):
        super().__init__(a)
        self.objem = a * a * a
        print(f"Vypocitej objem krychle o strane {a}")

    def getObjem(self):
        return self.objem

class Block(Rectangle):
    def __init__(self, a, b, c):
        super().__init__(a, b)
        self.c = c
        print(f"Vykresli kvadr o stranach {a}, {b} a {c}")

    def getC(self):
        return self.c

class ObjemBlock(Block):
    def __init__(self, a, b, c):
        super().__init__(a, b, c)
        self.objem = a * b * c
        print(f"Vypocitej objem kvadru o stranach {a}, {b} a {c}")

    def getObjem(self):
        return self.objem

class Cylinder(Circle):
    def __init__(self, r, v):
        super().__init__(r)
        self.v = v
        print(f"Vykresli valec o polomeru {r} a vysce {v}")

    def getV(self):
        return self.v

class ObjemCylinder(Cylinder):
    def __init__(self, r, v):
        super().__init__(r, v)
        self.objem = 3.14 * r * r * v
        print(f"Vypocitej objem valce o polomeru {r} a vysce {v}")

    def getObjem(self):
        return self.objem    

class Ball(Circle):
    def __init__(self, r):
        super().__init__(r)
        print(f"Vykresli kouli o polomeru {r}")

class ObjemBall(Ball):
    def __init__(self, r):
        super().__init__(r)
        self.objem = 4/3 * 3.14 * r * r * r
        print(f"Vypocitej objem koule o polomeru {r}")

    def getObjem(self):
        return self.objem



r2 = Rectangle(2, 3)
print("Strana a:", r2.getA())
print("Strana b:", r2.getB())

o2 = Obsah(2, 3)
print("Obsah obdelniku:", o2.getObsah())

ob2 = Obvod(2, 3)
print("Obvod obdelniku:", ob2.getObvod())

s2 = Square(2)
print("Strana a:", s2.getA())

os2 = ObsahSquare(2)
print("Obsah ctverce:", os2.getObsah())

obs2 = ObvodSquare(2)
print("Obvod ctverce:", obs2.getObvod())

ci2 = Circle(2)
print("Polomer:", ci2.getR())
print("Obvod kruhu:", ci2.getObvod())

oci2 = ObsahCircle(2)
print("Obsah kruhu:", oci2.getObsah())

c2 = Cube(2)
print("Strana a:", c2.getA())

o3 = Objem(3)
print("Objem krychle:", o3.getObjem())

b2 = Block(2, 3, 4)
print("Strana a:", b2.getA())
print("Strana b:", b2.getB())
print("Strana c:", b2.getC())

ob3 = ObjemBlock(2, 3, 4)
print("Objem kvadru:", ob3.getObjem())

cy2 = Cylinder(2, 3)
print("Polomer:", cy2.getR())
print("Vyska:", cy2.getV())

oc2 = ObjemCylinder(2, 3)
print("Objem valce:", oc2.getObjem())

ba2 = Ball(2)
print("Polomer:", ba2.getR())

ob4 = ObjemBall(2)
print("Objem koule:", ob4.getObjem())

















