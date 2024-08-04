#L=[10,20,30]
#for element in enumerate(L) :
#    print(element)

#T=("a","b","c")
#for element in enumerate(T,5) :
#    print(element)

#while True :
#    guess = int(input("암호 입력: "))
#    if(guess == password) :
#        print("암호 일치")
#        break
#    else :
#        print("암호 불일치")
#print("프로그램 종료")

# coding = utf-8


#import sys
#print(sys.getdefaultencoding())
#print(sys.getfilesystemencoding())    

def plus_one(n) :
    print(f"n is not {n} anymore.")
    n+=1
    print(f"n is {n} from now.")
    return n

def main() :
    i=int(input("입력: "))
    print("출력:", plus_one(i))

main()