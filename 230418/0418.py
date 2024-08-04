""" 자주 쓰이는 모듈 """
# import random
# num=random.random()     # 0.0 <= num <= 1.0
# print(num)
# L=[1,2,3,4,5]
# num=random.sample(L,2)  # L에서 2개의 숫자를 임의로 선택
# print(num)

# import time
# print(time.ctime())     # 현재 시간
# time.sleep(5)           # 5초 대기

# import requests
# response = requests.get("http://www.naver.com")
# print(response.status_code)
# print(response.headers)
# print(response.text)

""" 직접 만든 모듈 import 하기 """
# import Making_Module as MM
# print(MM.plus(1,2))
# print(MM.S)
# print(MM.__name__)
# print(__name__)

# from Making_Module import S # 모듈의 특정 함수 / 변수만 import 하기
# print(S)

""" lambda 함수 [parameters]: [return value] """
# def math(func,num) :
#     if type(num) != int :
#         return None
#     result=func(num)
#     return result
# print(math(lambda n:n*n,10))

""" map(func,value) """
# def square(n) :
#     return n*n
# def half(n) :
#     return int(n/2)
# L=[1,2,3,4,5]
# result=map(square,L)
# print(result)
# print(list(result))
# T=(2,4,6,8,10)
# result=map(half,T)
# print(list(result))

""" 함수 단순화 """
# def square(n) :
#     return n*n
# def half(n) :
#     return n/2
# def minus_one(n) :
#     return n-1
# def math(func,num) :
#     if type(num) != int :
#         return None
#     result = func(num)
#     return result
# print(math(square,10))      # 100
# print(math(half,10))        # 5
# print(math(minus_one,10))   # 9

""" 함수 이름을 인자로 넘기기 """
# def square(n) :
#     return n*n
# def math(func,num) :    # 함수 이름을 파라미터, 인자로 넘길 수 있음 func() = square()
#     result = func(num)
#     return result
# print(math(square,10))  # 100