#!/usr/bin/python3
def best_score(a_dictionary):
    if not a_dictionary:
        return None
    valueoo = list(a_dictionary.keys())
    return max(valueoo)