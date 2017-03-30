#! /usr/bin/env python3
# -*- coding: UTF-8 -*-
import sys

def rev_list(lst):
    if type(lst).__name__ == 'list':
        lst.reverse()
        for l in lst:
            rev_list(l)

for line in sys.stdin:
    lst = eval(line)
    rev_list(lst)
    print(lst)
