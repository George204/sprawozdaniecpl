import os
import sys

plik_tex = ""
plik_tex += open("./tex/0.txt","r").read() + "\n"
section = ""
for file in os.listdir("./files"):
    if file[:4] == section:
        same = True
    else:
        same = False
        section = file[:4]
    filepath = str("./files/"+file)
    text = open(filepath, "r") 
    lines = text.readlines()
    if file[-1] == "p":
        if same == False:
            plik_tex += "\n\section*{zadanie " + file[:-4] + "}\n"
        plik_tex += "\n" + open("./tex/1.txt", "r").read() + "\n"
    elif file[-1] == "y":
        if same == False:
            plik_tex += "\n\section*{zadanie " + file[:-3] + "}\n"
        plik_tex += "\n" + open("./tex/1.p.txt", "r").read() + "\n"
    for line in lines:
        if line.startswith("#include") or line.startswith("using namespace std;"):
            pass
        else:
            plik_tex += line                 
    plik_tex += "\n" + open("./tex/2.txt", "r").read() + "\n"
plik_tex += open("./tex/3.txt", "r").read() + "\n"
open("main.tex","w").write(plik_tex)
os.system("pdflatex main.tex")
os.system("del main.aux")
os.system("del main.log")
os.system("del main.tex")
#todo: pomijanie nie znany znaków przez pdflatex
#todo: poprawne sortowanie zadania a nie alfabetyczne 
#todo: pliki text jako algorytmy
