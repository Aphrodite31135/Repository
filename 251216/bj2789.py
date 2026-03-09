# No. 2609

def gcd(a, b):
    if b==0:
        return a
    else:
        return gcd(b, a%b)
nums=list(map(int,input().split()))
nums.sort()
print(gcd(nums[1], nums[0]))
print(int(nums[0]*nums[1]/(gcd(nums[1], nums[0]))))



# No. 1546

# num=input()
# lst=list(map(int,input().split()))
# lst.sort()
# num=0
# for i in lst:
#     num+=(i/lst[-1]*100)
# print(round(num/len(lst),3))


# No. 1259

# num=0
# lst=[]
# while(True):
#     num=input()
#     if(int(num)==0):
#         break
#     else:
#         lst.append(num)
# for i in lst:
#     count=0
#     for j in range(int(len(i)/2)):
#         if(int(i[j])==int(i[-(1+j)])):
#             count+=1
#     if(count==int(len(i)/2)):
#         print("yes")
#     else:
#         print("no")


# No. 15829

# r, M=31, 1234567891
# L=int(input())
# string=input()
# hashnum=ord(string[0])-96
# count=1
# while(count<L):
#     hashnum+=(ord(string[count])-96)*r
#     r*=31
#     count+=1
#     if(hashnum>M):
#         hashnum%=M
# print(hashnum)

# No. 2798

# N, M=map(int,input().split())
# lst=list(map(int,input().split()))
# lst.sort()
# count=[]
# for i in range(len(lst)-2):
#     for j in range(1,len(lst)-1):
#         for k in range(2,len(lst)):
#             if(i==j or j==k or i==k):
#                 continue
#             else:
#                 if(lst[i]+lst[j]+lst[k]<=M):
#                     count.append(lst[i]+lst[j]+lst[k])
#                 else:
#                     continue
# count.sort()
# print(count.pop())