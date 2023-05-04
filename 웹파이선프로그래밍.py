''' 연속되는 글자 찾기 '''
def has_consecutive_letter(strin) -> list :
    pre_letter=""
    for letter in strin :
        if str(letter) == str(pre_letter) :
            return True
        else :
            pre_letter=letter
            continue
    return False
print(has_consecutive_letter("apple"))
print(has_consecutive_letter("mommy"))
print(has_consecutive_letter("happy"))
print(has_consecutive_letter("kiss"))
print(has_consecutive_letter("python"))
print(has_consecutive_letter("sangkeunpark"))

''' 수 세기 '''
# input_str="ajkdlfjlkadjfdklfjk124u34jkdljflkdjfl43223jkldjfkldjkl12j1l0044jkldjklf1812j1k2jlkdjklfjdf8333jk4ljkldjflkd893jkldjfkldjf8922823jk2l3jkljdklfjdlfd9823232j32jdjflkdjf9823"
# strin=list(input_str)
# stri = ""
# count=0
# pre_bool=False
# for charecter in strin :
#     if pre_bool == False :
#         if charecter.isdigit() == True :
#             stri=""
#             stri+=charecter
#             pre_bool=True
#     else :
#         if charecter.isdigit() == True :
#             stri+=charecter
#         else :
#             count+=int(stri)
#             pre_bool=False
# if pre_bool == True :
#     count+=int(stri)
# print(count)


''' 배수 찾기 '''
# def get_multiples(nm1, nm2) :
#     count=0
#     for nm in range(1,101,1) : 
#         if nm%(nm1*nm2) != 0 :
#             if nm%nm1 == 0 or nm%nm2 == 0 :
#                 count+=nm
#                 continue
#     return count
# print(get_multiples(5, 10))
# print(get_multiples(20, 4))
# print(get_multiples(2, 3))


''' 베스트셀러 찾기 ''' # 다시 해보기
# def get_best_seller(best_seller) :
#     sale={}
#     for items in best_seller :
#         if items in sale :
#             sale[items]+=1
#         else :
#             sale[items]=1
#     best_nm = sorted(sale.values())[-1]
#     for name,nm in sale.items() :
#         if best_nm == nm :
#             return name
# print(get_best_seller(("book", "pen", "pen", "phone", "laptop", "phone", "phone", "laptop", "laptop", "laptop")))
# print(get_best_seller(("book", "pen", "pen")))
# print(get_best_seller(("laptop", "phone", "phone", "phone", "laptop")))


''' 출석부에서 중복 학생 제거 '''
# def get_unique_students(students) -> list:
#     std_set=set()
#     for nm in students :
#         std_set.add(nm.lower())
#     return len(std_set)
# print(get_unique_students(("KIM", "kim", "Lee", "Park")))
# print(get_unique_students(("park", "Park", "PARK")))
# print(get_unique_students(("Bob", "Tommy", "tommy")))
# print(get_unique_students(("lee",)))
# print(get_unique_students(("kim", "KIM", "Oh", "Park", "lee")))

''' 숫자 세기 '''
# strin="ajkdlfjlkadjfdklfjk124u34jkdljflkdjfl43223jkldjfkldjkl12j1l0044jkldjklf1812j1k2jlkdjklfjdf8333jk4ljkldjflkd893jkldjfkldjf8922823jk2l3jkljdklfjdlfd9823232j32jdjflkdjf9823"
# count=0
# for nm in strin :
#     if nm.isdigit() == True :
#         count+=int(nm)
# print(f"결과: {count}")

''' 3 또는 5의 배수 '''
# count=0
# for nm in range(1,1000) :
#     if nm%3 != 0 :
#         if nm%5 == 0 : 
#             count+=nm
#     else :
#         count+=nm
# print(f"결과: {count}")

''' 성 이름 붙여쓰기 '''
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