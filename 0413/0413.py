def cal(a)  :
    b=4
    def  minus(a=2) :
        # global b # __main__'s b
        nonlocal b # cal's b
        b=5
        print(a,b) # 1 5
    minus(a)
    print(a,b)
a,b=1,2
cal(a)
print(a,b)

# # 재귀함수
# def factorial(a=1): 
#     if(a>1) :
#         return a*factorial(a-1)
#     if(a==1) :
#         return 1
# p1=int(input("숫자: "))
# print(f"결과: {factorial(p1)}")

# def plus(a,b) :
#     "Return a total Parameter \nexample)\nplus(int a, int b) { \n   return (a + b); \n}"
#     return a+b
# help(plus)
# print(plus(1,2))

# n1=6
# n2=7
# n3=8
# s1="Hello"
# s2="World"
# print(n1,n2,n3,s1+s2, sep="")

# def func4(a,*b,c=10,**d) :
#     print(a,b,c,d)
# func4(1,2,c=3)
# func4(1,2,3,4,5,e=6)

# def func3(a,*b,c=10) :
#     print(a,b,c)
# # func3(1,2,3,c=4)
# # func3(1,2)
# func3(1,2,3,4)

# def func2(a,*b,c) :
#     print(a,b,c)
# # func2(1,2,c=3)
# func2(1,c=3)

# def func(msg, **kwargs) :
#     return kwargs ["name"] # name의 경우 error
# print(func("Hi", name="Park",age=20))