#!/usr/bin/python3
def max_integer(my_list=[]):
    next = 0
    if my_list == []:
        return None
    for i in my_list:
        if i > next:
            next = i
    return next
