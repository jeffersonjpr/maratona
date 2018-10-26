b = input()
lista = b.split()
b = [float(i) for i in lista]
media = (b[0] * 2.0 + b[1] * 3.0 + b[2] * 4.0 + b[3]) / 10.0

print("Media: %.1f" % media)

if media >= 7:
    print("Aluno aprovado.")

elif media >= 5 and media < 7:
    print("Aluno em exame.")
    c = float(input())
    print("Nota do exame: %.1f" % c)
    newmedia = (c + media) / 2.0
    if newmedia >= 5:
        print("Aluno aprovado.")
    else:
        print("Aluno reprovado.")
    print("Media final: %.1f" % newmedia)

else:
    print("Aluno reprovado.")
