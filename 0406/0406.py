# def plus(a,b) -> int :
#    result = a + b
#    return result
# print(plus(3,4))

# # 예시문제
# def function1(strin) :
#     a=""
#     for i in strin :
#         if i != " " :
#             a+=i
#     return a
# print(function1("다나카"))
# print(function1("박 상근"))
# print(function1("홍    길동"))
# print(function1("제갈   공명"))
# print(function1("서문         탁"))

# from sympy.ntheory import factorint
# x=600851475143
# result = 0
# print(factorint(x)[-1])

def divide(a, b=10) :
    c = a / b
    return c
print(divide(1,2))
print(divide(1))
print(divide(1,b=2))
print(divide(b=2,a=1))