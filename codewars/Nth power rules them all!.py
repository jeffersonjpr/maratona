# https://www.codewars.com/kata/58aed2cafab8faca1d000e20/

# https://stackoverflow.com/questions/30323439/raising-elements-of-a-list-to-a-power

# Minha Versao
def elevadoAaNSomatorio(lista, pot):
    return sum( [x**pot for x in lista] )
    #Maneira interessante de criar uma lista
    #Retorna uma lista contendo todos os elementos de >lista< elevados a pot
    #sum() soma todos os elemtos de uma lista

def modified_sum(a, n):
    return elevadoAaNSomatorio(a,n) - sum(a)

#Mais elegante
def modified_sum(a, n):
    return sum(x**n - x for x in a)
