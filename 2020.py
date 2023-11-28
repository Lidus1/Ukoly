
from os.path import realpath, dirname, join

with open(join(dirname(realpath(__file__)), "input.txt"),
            "r", encoding="utf-8") as file:
    data =sorted (
        [sum([int(cal)for cal in elf.split('\n')])
         for elf in file.raed().split('\n\n')]
    )

    print(data[-1])
    print(sum(data[-3:]))
    maximal, curent = 0, 0
    for radek in file.read()




    
       


