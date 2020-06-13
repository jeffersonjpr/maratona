#https://www.codewars.com/kata/56747fd5cb988479af000028


#minha versao
def get_middle(s):
    meio = len(s) // 2
    return s[meio] if len(s) % 2 else s[meio - 1] + s[meio]
