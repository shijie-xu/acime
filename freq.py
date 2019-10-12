# -*- coding:utf-8 -*-
import re

char_dict = {}
test_count = 10
with open("chaizi-ft.txt") as fileIn:
    line = fileIn.readline()
    while line:
        hanzi = re.split("\t| ", line.strip("\r\n"))
        for c in hanzi:
            if c in char_dict:
                char_dict[c] = char_dict[c]+1
            else:
                char_dict[c] = 1
        line = fileIn.readline()
    sorted_char_dict = sorted(char_dict.items(), key=lambda x:x[1], reverse=True)
    for c in sorted_char_dict:
        print c[0],c[1]
