#https://www.codewars.com/kata/54ff3102c1bad923760001f3

#Minha versao
def get_count(input_str):
    vogais = "aeiou"
    return sum(1 for x in input_str if x in vogais)

#Versao mais elegante
def getCount(input_str):
    return sum(letra in 'aeiou' for letra in input_str)
