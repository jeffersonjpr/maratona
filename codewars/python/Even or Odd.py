#https://www.codewars.com/kata/53da3dbb4a5168369a0000fe

#referencia
#https://pt.stackoverflow.com/questions/161505/em-python-existe-opera%C3%A7%C3%A3o-tern%C3%A1ria


#Minha versão
def even_or_odd(number):
    return "Even" if number % 2 == 0 else "Odd"

#Versao mais elegante
def even_or_odd(number):
    return "Odd" if number % 2 else "Even"
