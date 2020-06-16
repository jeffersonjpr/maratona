#https://www.codewars.com/kata/53f0f358b9cb376eca001079/

#python nao aceita multiplos construtores
#a solução é definir valores base
#referencia
#https://stackoverflow.com/questions/2164258/multiple-constructors-in-python

class Ball(object):
    def __init__(self, ball_type = "regular"):
        self.ball_type = ball_type
