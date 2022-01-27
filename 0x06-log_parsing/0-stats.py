#!/usr/bin/python3
""" lets not declare to much Ill see if it compiles first """
from sys import stdin


codes = {"200": 0, "301": 0, "400": 0, "401": 0,
         "403": 0, "404": 0, "405": 0, "500": 0}
theCode = 0
lCount = 0
fSize = 0


def printIt(codes, fSize):
    print("File size: " + str(fSize))
    for line in sorted(codes.keys()):
        if codes[line] > 0:
            print(line + ": " + str(codes[line]))

if __name__ == "__main__":
    try:
        for line in stdin:
            lCount += 1
            splitLine = line.split()

            if len(splitLine) > 1:
                fSize += int(splitLine[-1])

            if len(splitLine) > 2 and splitLine[-2].isnumeric():
                theCode = splitLine[-2]
            else:
                theCode = 0

            if theCode in codes.keys():
                codes[theCode] += 1

            if lCount % 10 == 0:
                printIt(codes, fSize)

        printIt(codes, fSize)

    except KeyboardInterrupt:
        printIt(codes, fSize)
