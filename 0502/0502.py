"""Exercise:Function"""
# def factorial(nm:int) -> int :
#     if nm == 1 :
#         return 1
#     else :
#         return nm*factorial(nm-1)

"""Exercise:File"""
myInfo21={"Kim Kyoung-Beom":2023105409}
keys=list(myInfo21.keys()).strip("[]")
values=list(myInfo21.values()).strip("[]")
with open("./0502/test.txt", "wt") as writing :
    writing.writelines(f"{values}")
    writing.write(f"{keys}")
with open("./0502/test.txt","r") as reading :
    print(reading.read())