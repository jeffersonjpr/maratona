#https://www.codewars.com/kata/577bd8d4ae2807c64b00045b

#minha verssao 1
def declare_winner(fighter1, fighter2, first_attacker):
    if fighter1.name != first_attacker:
        fighter1, fighter2 = fighter2, fighter1

    while fighter1.health > 0 and fighter2.health > 0:
        fighter2.health -= fighter1.damage_per_attack
        if fighter2.health <= 0:
            break
        fighter1.health -= fighter2.damage_per_attack

    return fighter1.name if fighter2.health <= 0 else fighter2.name
#minha versao 2
import math
def declare_winner(fighter1, fighter2, first_attacker):
    f1,f2 = (fighter1, fighter2) if fighter1.name == first_attacker else (fighter2,fighter1)

    r1 = math.ceil(f2.health / f1.damage_per_attack)
    r2 = math.ceil(f1.health / f2.damage_per_attack)

    return f1.name if r1 <= r2 else f2.name
