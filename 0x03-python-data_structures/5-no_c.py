#!/usr/bin/python3
def no_c(my_string):
    result = ""
    for ch in my_string:
        if ch.lower() != "c":
            result += ch
    return result
