#https://www.codewars.com/kata/54c27a33fb7da0db0100040e

#referencias
#https://www.geeksforgeeks.org/python-math-function-sqrt/#:~:text=sqrt()%20function%20is%20an,number%20passed%20in%20the%20parameter.

#minha versao
import math

def is_square(n):
    return True if n >= 0 and n == int(math.sqrt(n)) ** 2 else False

#versao mais elegante
import math
def is_square(n):
    return n > -1 and math.sqrt(n) % 1 == 0

import math
def is_square(n):
    return n > -1 and math.sqrt(n).is_integer()
