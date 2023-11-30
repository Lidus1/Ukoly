

class Lod:
    __sever:int = 0
    __vychod:int = 0
    __stupne:int = 90



    def __init__(self, sever:int, vychod:int, stupne:int)->None:
        self.__sever = sever
        self.__vychod = vychod
        self.__stupne = stupne

    def _repr_(self)->str:
        return f"Severni souradnice je: {self.__sever}, 
        vychodni souradnice je: {self.__vychod}, 
        stupne je: {self.__stupne}"

    def pohyb(self, smer:str, hodnota:int)->None:
        match smer:
            case "N":self.__sever += hodnota
            case "S":self.__sever -= hodnota
            case "E":self.__vychod += hodnota
            case "W":self.__vychod -= hodnota
            case "L":self.__stupne -= hodnota
            case "R":self.__stupne += hodnota
            case "F":
                match self.__stupne:
                    case 0:
                        self.__sever += hodnota
                    case 90:
                        self.__vychod += hodnota
                    case 180:
                        self.__sever -= hodnota
                    case 270:
                        self.__vychod -= hodnota
                    case _:pass

    def rotace(self, smer:str, hodnota:int)->None:
        if (smer == "L"):
            self.__stupne -= hodnota
        elif (smer == "R"): 
            self.__stupne += hodnota
        if (self._stupne<0):
            self.__stupne += 360
        elif (self.__stupne >= 360):
            self.__stupne -= 360


    def naviguj(self, soubor:str)->None:
        with open(input.txt, "r", encoding="utf-8") as file:
            data = file.read().split("\n")
            for i in data:
                self.pohyb(i[0], int(i[1:]))
                print(i)
                print(self)





              





    def main():
        novaLod = Lod(90, 0, 0)



