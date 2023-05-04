import random as r

nickname = "Noob_:p"

def rock_paper_scissors() :
    num = r.random()
    if num<1/2: 
        return "paper"
    elif num<17/20: 
        return "rock"
    else: 
        return "scissors"