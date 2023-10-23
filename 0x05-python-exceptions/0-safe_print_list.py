#!/usr/bin/python3
def safe_print_list(my_list=[], x=0):
    try:
        count = 0
        output = ""
        for i in my_list:
            if i <= x:
                count += 1
                output += str(i)
        print(output)
        return count
    except:
        print("Error in INPUT!")
