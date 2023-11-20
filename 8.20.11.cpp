
#include <iostream>


using namespace std;

class Shape
{
    public:
        Shape();    // constructor

};

Shape::Shape()
{
    cout << "Vykresli obrazec" << endl;
}

class Square : public Shape
{
    private:
        int a;


    public:
        Square();   // constructor
        Square(int a);
        int getA();
};

Square::Square()
{
    cout << "Vykresli ctverec" << endl;
}

Square::Square(int a)
{
    this->a = a;
    cout << "Vykresli ctverec o strane " << a << endl;
}

class Rectangle : public Square
{
    private:
        int b;

    public:
        Rectangle();    // constructor
        Rectangle(int a, int b);
        int getB();
};

Rectangle::Rectangle()
{
    cout << "Vykresli obdelnik" << endl;
}

Rectangle::Rectangle(int a, int b) : Square(a)
{
    this->b = b;
    cout << "Vykresli obdelnik o stranach " << a << " a " << b << endl;
}

int Rectangle::getB()
{
    return b;
}

int Square::getA()
{
    return a;
}

class Obsah : public Rectangle 
{
    private:
        int obsah;

    public:
        Obsah();
        Obsah(int a, int b);
        int getObsah();
};

int Obsah::getObsah()
{
    return obsah;
}

Obsah::Obsah()
{
    cout << "Vypocitej obsah" << endl;
}

Obsah::Obsah(int a, int b) : Rectangle(a, b)
{
    this->obsah = a * b;
    cout << "Vypocitej obsah obdelniku o stranach " << a << " a " << b << endl;

}


class Obvod : public Rectangle
{
    private:
        int obvod;

    public:
        Obvod();
        Obvod(int a, int b);
        int getObvod();
};

int Obvod::getObvod()
{
    return obvod;
}

Obvod::Obvod()
{
    cout << "Vypocitej obvod" << endl;
}

Obvod::Obvod(int a, int b) : Rectangle(a, b)
{
    this->obvod = 2 * (a + b);
    cout << "Vypocitej obvod obdelniku o stranach " << a << " a " << b << endl;
}

class ObsahSquare : public Square
{
    private:
        int obsah;

    public:
        ObsahSquare();
        ObsahSquare(int a);
        int getObsah();
};

int ObsahSquare::getObsah()
{
    return obsah;
}

ObsahSquare::ObsahSquare()
{
    cout << "Vypocitej obsah" << endl;
}

ObsahSquare::ObsahSquare(int a) : Square(a)
{
    this->obsah = a * a;
    cout << "Vypocitej obsah ctverce o strane " << a << endl;
}

class ObvodSquare : public Square
{
    private:
        int obvod;

    public:
        ObvodSquare();
        ObvodSquare(int a);
        int getObvod();
};

int ObvodSquare::getObvod()
{
    return obvod;
}

ObvodSquare::ObvodSquare()
{
    cout << "Vypocitej obvod" << endl;
}

ObvodSquare::ObvodSquare(int a) : Square(a)
{
    this->obvod = 4 * a;
    cout << "Vypocitej obvod ctverce o strane " << a << endl;
}



int main()
{

    Rectangle r2(2, 3);

    cout << "Strana a: " << r2.getA() << endl;
    cout << "Strana b: " << r2.getB() << endl;

    Obsah o2(2, 3);

    cout << "Obsah obdelniku: " << o2.getObsah() << endl;

    Obvod ob2(2, 3);

    cout << "Obvod obdelniku: " << ob2.getObvod() << endl;


    Square s2(2);

    cout << "Strana a: " << s2.getA() << endl;

    ObsahSquare os2(2);

    cout << "Obsah ctverce: " << os2.getObsah() << endl;

    ObvodSquare obs2(2);

    cout << "Obvod ctverce: " << obs2.getObvod() << endl;

    return 0;

}















