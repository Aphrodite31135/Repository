# No. 2292

# N=int(input())
# count=1
# cur=1
# while(cur<N):
#     if(cur==N):
#         break
#     else:
#         cur+=6*count
#         count+=1
# print(count)

# No. 2231

# N=int(input())
# result=0
# for i in range(1,N):
#     temp=0
#     string=str(i)
#     for j in string:
#         temp+=int(j)
#     if(i+temp==N):
#         result=i
#         break
# print(result)


# No. 1978

# N=int(input())
# nums=list(map(int,input().split()))
# count=0
# for i in nums:
#     if i==2:
#         count+=1
#     for j in range(2,i):
#         if(i%j==0):
#             break
#         if(j==i-1):
#             count+=1
# print(count)


# No.30802

# N=int(input())
# lst=list(map(int,input().split()))
# T,P = map(int, input().split())
# result=0
# for i in lst:
#     if i%T==0:
#         result+=int(i/T)
#     else:
#         result+=int(i/T+1)
# print(result)
# print(f"{int(N/P)} {int(N%P)}")


# No. 4153

# lst = list()
# while(True):
#     lst.append(list(map(int, input().split())))
#     if lst[-1]==[0,0,0]:
#         lst.pop()
#         break
# import math
# answer = list()
# for i in lst:
#     i.sort()
#     if (pow(i[0],2)+pow(i[1],2))==pow(i[2],2):
#         print("right")
#     else:
#         print("wrong")