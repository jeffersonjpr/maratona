# https://www.codewars.com/kata/55eea63119278d571d00006a

# referencia
# https://stackoverflow.com/questions/53513/how-do-i-check-if-a-list-is-empty
# https://stackoverflow.com/questions/3654830/why-are-there-no-and-operators-in-python
# https://www.geeksforgeeks.org/max-min-python/
# http://excript.com/python/operadores-in-not-in-python.html

# Minha Versao
def next_id(arr):
    if not arr or min(arr) > 0:
        return 0

    x = min(arr)

    for i in range(len(arr)):
        x += 1
        if x not in arr:
            return x

#Versao mais elegante
def next_id(arr):
    for i in range(len(arr) + 1):
        if i not in arr:
            return i

def next_id(arr):
    x = 0
    while x in arr:
        x += 1
    return x
