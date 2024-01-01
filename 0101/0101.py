test_case=0
test_list=[]

def Cal(n1, n2) :
    count = n2-n1
    num=1
    for i in range(n2,count,-1) :
        num*=n2
        n2-=1
    return num

def Fac(n) :
    num = 1
    for i in range(1,n+1) :
        num*=i
    return num

test_case=int(input())
for i in range(test_case) :
    nm1, nm2 = map(int, input().split())
    test_list.append([nm1, nm2])

for lst in test_list :
    print(int(Cal(lst[0], lst[1])/Fac(lst[0])))