#https://www.codewars.com/kata/546e2562b03326a88e000020

#minha versao + versao mais elegante
def square_digits(num):
    resp = ""
    for x in str(num):
        resp += str(int(x) ** 2)
    return int(resp)
