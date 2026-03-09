# No.1436

N=int(input())
count=0
string=[0,666,0]
while(count<N):
    if(string[0]%10==6):
        if(0<=string[2] and string[2]<9):
            string[2]+=1
        else:
            string[2]=0
            
    count+=1


# No. 1181

# N=int(input())
# dct=dict()
# for i in range(N):
#     temp=input()
#     if(len(temp) in dct.keys()):
#         if temp in dct[len(temp)]:
#             continue
#         else:
#             dct[len(temp)].append(temp)
#     else:
#         dct[len(temp)]=[temp]
# for i in sorted(dct.keys()):
#     dct[i].sort()
#     for j in dct[i]:
#         print(j)


# No. 28702

# lst=[]
# for i in range(3):
#     lst.append(input())
# for i in lst:
#     if i.isdigit():
#         i=int(i)
# target=0
# for i in range(len(lst)):
#     if(lst[2-i].isdigit()):
#         target=int(lst[2-i])+1+i
#         break
#     else:
#         continue
# if(target%3==0 and target%5==0):
#     print("FizzBuzz")
# elif target%3==0:
#     print("Fizz")
# elif target%5==0:
#     print("Buzz")
# else:
#     print(target)