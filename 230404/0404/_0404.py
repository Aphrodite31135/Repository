#L=[10,20,30]
#for element in enumerate(L) :
#    print(element)

#T=("a","b","c")
#for element in enumerate(T,5) :
#    print(element)

#while True :
#    guess = int(input("��ȣ �Է�: "))
#    if(guess == password) :
#        print("��ȣ ��ġ")
#        break
#    else :
#        print("��ȣ ����ġ")
#print("���α׷� ����")

# coding = utf-8


#import sys
#print(sys.getdefaultencoding())
#print(sys.getfilesystemencoding())    

-*- coding: utf-8 -*-

def plus_one(n) :
    print(f"n is not {n} anymore.")
    n+=1
    print(f"n is {n} from now.")
    return n

def main() :
    i=int(input("�Է�: "))
    print("output:", plus_one(i))

main()