#https://www.codewars.com/kata/52fba66badcd10859f00097e

#REFERENCIA
#https://www.geeksforgeeks.org/join-function-python/


#minha versao
def disemvowel(string):
    resposta = ""
    for x in string:
        if x not in "aeiouAEIOU":
            resposta += x
    return resposta

#versão mais elegante
def disemvowel(string):
    return "".join(x for x in string if x not in "aeiouAEIOU")
