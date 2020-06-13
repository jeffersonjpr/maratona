#https://www.codewars.com/kata/54da5a58ea159efa38000836

#referencias
#https://www.guru99.com/python-list-count.html

#minha versão
def find_it(seq):
    for x in seq:
        if seq.count(x) % 2 == 1:
            return x
