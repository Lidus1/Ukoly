from os.path import realpath, dirname, join
from re import finditem

def main():
    with open(join(dirname(realpath(__file__)), "input.txt"),
               "r", encoding="utf-8") as file:
        input = file.read().split('\n')
        numbers = [y,it.start()]
    print(numbers)
     

    