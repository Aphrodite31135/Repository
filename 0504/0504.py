class Student :
    """ 생성자 호출 """
    def __init__(self, myname, mystd_num, mydept,mygrade = 1, myscore = 0.0) :
        self.name = myname
        self.std_number = mystd_num
        self.department = mydept
        self.grade = mygrade if mygrade>=1 else 1
        self.score = myscore if myscore>=0.0 else 0.0
    """ 함수 정의 """
    def AddGrade() :
        grade+=1
    def AddScore(myscore:float) :
        score += myscore

student = Student("홍길동","2024105000", "Software")
print(student.name)