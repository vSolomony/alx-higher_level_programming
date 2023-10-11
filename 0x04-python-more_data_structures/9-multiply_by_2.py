#!/usr/bin/python3
def multiply_by_2(a_dictionary):
    NewDir = a_dictionary.copy()
    list_keys = list(NewDir.keys())

    for i in list_keys:
        NewDir[i] *= 2

    return NewDir
