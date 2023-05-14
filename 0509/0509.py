class Student :
    def __init__ (self, name = "", age = 1, department = {"Software"}) :
        self.name = name
        if age < 1 :
            self.age = 1
        else :
            self.age = age
        self.department = department
    def GetStdName(self) :
        return self.name
    def GetStdAge(self) :
        return self.age
    def GetStdDept(self) :
        return self.department
    def AddStdAge(self) :
        self.age+=1
    def AddStdDept(self, addDept) :
        self.department.add(addDept)
    def ShowStdInfo(self) :
        print(f"===학생 정보===\n이름 : {self.name}\n나이 : {self.age}\n전공 : {str(self.department).strip()}")

s=Student("Hong Gil-dong", 21)
s.ShowStdInfo()