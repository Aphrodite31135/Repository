# 초기 설정
nums=input().split(' ')
d=dict()
for i in range(int(nums[0])):
    d[i+1]=list()
for i in range(int(nums[1])):
    temp=input().split(' ')
    d[int(temp[0])].append(int(temp[1]))
    d[int(temp[1])].append(int(temp[0]))
for i in range(int(nums[0])): 
    d[i+1].sort()

# BFS 계산
queue = [int(nums[2])]
count=0
while(len(queue)<int(nums[0])):
    for i in d[queue[count]]:
        if i not in queue:
            queue.append(i)
        else:
            continue
    count+=1

# 결과 출력
print(queue)