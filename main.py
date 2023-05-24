import os
import sys

text2 = ""
start = open("./tex/0.txt","r")
text2 += start.read() + "\n"

for file in os.listdir("./files"):
    text2 += "\n\section*{zadanie " + file[:-4] + "}\n"
    filepath = str("./files/"+file)
    text = open(filepath, "r") 
    lines = text.readlines()
    text2 += "\n" + open("./tex/1.txt", "r").read() + "\n"
    for line in lines:
        if line.startswith("#include") or line.startswith("using namespace std;"):
            pass
        else:
            text2 += line                 
    text2 += "\n" + open("./tex/2.txt", "r").read() + "\n"
text2 += open("./tex/3.txt", "r").read() + "\n"

open("main.tex","w").write(text2)