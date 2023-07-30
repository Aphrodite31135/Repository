num = int(input())
lst = {1:0, 2:1, 3:1}
def func1(key,value) : # 딕셔너리 갱신
    global lst
    if key in lst.keys() : # 키 값이 이미 있을 때
        if lst[key]>value : # 딕셔너리의 값이 더 클 때
            lst[key]=value
    else : # 키 값이 없을 때
        lst[key] = value
def func2(cur) : # 딕셔너리에 추가
    global lst
    if cur/2 in lst.keys() : x = lst[cur/2]
    else : x = 1000000
    if cur/3 in lst.keys() : y = lst[cur/3]
    else : y = 1000000
    if cur-1 in lst.keys() : z = lst[cur-1]
    else : z = 1000000
    q = min(x,y,z)
    func1(cur,q+1)
def func3(num) :
    for i in range(1,num+1) :
        func2(i)
    print(lst[num])
func3(num)