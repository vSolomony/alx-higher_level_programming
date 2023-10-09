#!/usr/bin/python3
def max_integer(my_list=[]):
    next = 0
    for i in my_list:
        if i > next:
            next = i
    return next
