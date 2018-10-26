b = input()
lista = b.split()
b = [float (i) for i in lista]
media = (b[0]*2 + b[1]*3 + b[2] * 4 + b[3])/10

if media >= 7:
    print("Media: %.1f" % media)
    print("Aluno aprovado.")

if media >= 5 and media < 7:
    print("Media: %.1f" % media)
    print("Aluno em exame.")
    c = float(input())
    newmedia = (c + media) / 2
    if newmedia >= 5:
        print("Aluno aprovado.")
        print("Media final: %.1f" % newmedia)

    else:
        print("Aluno reprovado.")
        print("Media final: %.1f" % newmedia)

else:
    print("Media: %.1f" % media)
    print("Aluno reprovado.")
