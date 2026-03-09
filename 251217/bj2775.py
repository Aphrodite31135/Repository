# No. 14626

string=input()
count=0
failed=0
for i in range(len(string)):
    if(string[i]=='*'):
        failed=i
    else:
        if(i%2==0):
            count+=int(string[i])
        else:
            count+=3*int(string[i])
if(failed%2==0):
    print((10-(count%10)%10))
else:
# 평범한 브루트포스 알고리즘
    for i in range(10):
        if((count+3*i)%10==0):
            print(i)
# 확장된 유클리드 호제법에 따라 찾는 법
    print((10-(count%10))*7%10)


# No. 11050

# def fac(i):
#     if i<=1:
#         return 1
#     else:
#         return i*fac(i-1)
# N, K=map(int,input().split())
# Cache=fac(N-K)
# print(int(fac(N)/(fac(K)*fac(N-K))))


# No. 10989

# import sys
# input=sys.stdin.readline
# write=sys.stdout.write
# N=int(input())
# lst=[0]*10001
# for i in range(N):
#     lst[int(input())]+=1
# CHUNK=1000 
# # CHUNK 단위로 묶어서 출력하지 않으면 
# # 최악의 경우 10,000,000개의 같은 숫자를
# # 한번에 write해야 하는 경우가 생김
# for i in range(0,10001):
#     c=lst[i]
#     while c>0:
#         t=CHUNK if c>1000 else c
#         write((str(i)+"\n")*t)
#         c-=t


# No. 2869

# A, B, V=map(int, input().split())
# day=1+(V-A)/(A-B)
# if int(day)<day:
#     print(int(day)+1)
# else:
#     print(int(day))

# No. 2775

# T=int(input())
# k, n=[], []
# for i in range(T):
#     k.append(int(input()))
#     n.append(int(input()))
# maxk, maxn=sorted(k).pop(), sorted(n).pop()
# building=[]
# for i in range(maxk+1):
#     room=[i for i in range (1,maxn+1)]
#     building.append(room)
# for i in range(1,maxk+1):
#     count=0
#     for j in range(0,maxn):
#         count+=building[i-1][j]
#         building[i][j]=count
# for T in range(T):
#     print(building[k[T]][n[T]-1])