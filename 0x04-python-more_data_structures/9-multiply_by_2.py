#!/usr/bin/python3
def multiply_by_2(a_dictionary):
    for_key = list(a_dictionary.key())
    for i in for_key:
        result = a_dictionary[i] * 2
    return result
