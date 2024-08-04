""" 2022 중간고사 기출문제 """

def function01(nm1:int, nm2:int) :
    return nm1+nm2

def function02(menu) :
    sum=0
    for i in menu :
        sum+=i
    return sum

def function03(nm1, nm2) :
    small_nm, large_nm, sum=0,0,0
    if nm1>nm2 :
        small_nm=nm2
        large_nm=nm1
    else :
        small_nm=nm1
        large_nm=nm2
    for i in range(small_nm+1,large_nm,1) :
        sum+=i
    return sum

def function04(menu) :
    sum=0
    for i in menu :
        if i%2 ==0 :
            sum+=i
    return sum

def function05(name:str) :
    result=""
    for i in range(len(name)) :
        if i==0 :
            result+=name[i].upper()
        else :
            result+=name[i].lower()
    return result

def function06(name:str) -> bool :
    string=[]
    for i in name :
        string.append(i)
    for i in range(len(name)//2) :
        if string[i].lower()!=string[len(name)-i-1].lower() :
            return False
    return True

def function07(menu) :
    result=0
    menu=set(menu)
    result=sum(menu)
    return result

def function08(*nms) :
    result=0
    for i in nms :
        if i%2==0 :
            result+=i
    return result

def function09(*nms,**dictform) : 
    result=0
    if dictform :
        for i in dictform.values() :
            if result<i :
                result=i
        return result
    else :
        return -1

def function10(count) :
    nm1, nm2, result=1,1,1
    if count == 1 or count == 2 :
        return 1
    else :
        count-=2
        for i in range(count) :
            result=nm1+nm2
            nm1,nm2=nm2,nm1+nm2
        return result