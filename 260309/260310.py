# BOJ 1920 존재 여부만 판단
'''
O(NlogN + MlogN) 정렬 NlogN 탐색
(st + en) / 2
mid<target -> st=mid+1
mid>target -> en=mid-1
st>en -> 배열 안에 없음
st=en -> 배열 안에 있음
'''

# BOJ 10816 존재 + 개수까지 판단
'''
target+1 or target-1로 구하면 최악의 경우 O(N)
특정 값이 있는 가장 왼쪽 인덱스와 가장 오른쪽 인덱스의 차이 = 등장 횟수
mid>target -> en=mid
mid<target -> st=mid+1
st=mid=en -> 가장 왼쪽 인덱스 구할 수 있음

** CPP_STL : lower_bound, upper_bound
return (배열 : pointer / vector : iter)
** CPP_STL을 쓰려면 정렬이 되어 있어야 함
(st + en + 1) / 2 <- 무한반복의 문제 해결 가능
'''

# BOJ 18870 좌표 압축
'''
좌표 압축
** CPP_STL : unique 중복 제거 + 쓰레기값 시작지점에서 iter가 가르킴 -> 이후 값들 pop_back()로 제거
각 좌표가 압축된 좌표에서 몇 번째인지 구하기 위해 lower_bound로 구할 수 있음 (O(NlogN))
'''

# BOJ 2293 세 수의 합
'''
O(N^4)에서 O(N^2LogN)까지 압축 가능
a[i] + a[j]의 결과를 O(N^2)로 구해서 벡터에 저장 two(i) + a[k] = a[l]로 압축 가능. 
a[k] 
'''

# BOJ 1654 Parametric Search - 최적화, 결정 문제
'''
단조 감소 or 단조 증가 함수일 경우에만 결정 문제로 바꿀 수 있음
문제에서 최소 or 최대 이야기가 있거나 범위가 매우 넓을 때
'''

# BOJ 1920
'''
N=int(input())
A=list(map(int, input().split()))
M=int(input())
targets=list(map(int, input().split()))
A.sort()
for m in range(M):
    st=0
    en=N-1
    found = 0
    while(st<=en):
        mid=(st+en)//2
        if(targets[m]<A[mid]):
            en=mid-1
        elif(targets[m]>A[mid]):
            st=mid+1
        else:
            found=1
            break
    print(found)
'''

# BOJ 10816
''' 시간초과 - 직접 구현한 이진탐색은 느리고, bisect 모듈을 써야만 빠름 '''
'''
import sys
input = sys.stdin.readline
N = int(input())
A=list(map(int, input().split()))
M=int(input())
targets=list(map(int, input().split()))
A.sort()
for i in targets:
    st=0
    en=N
    while(st<en):
        mid=(st+en)//2
        if(A[mid]>=i):
            en=mid
        else:
            st=mid+1
    LL=st
    st=0
    en=N
    while(st<en):
        mid=(st+en)//2
        if(A[mid]<=i):
            st=mid+1
        else:
            en=mid
    print(st-LL, end=" ")
'''
''' 그냥 dict로 갯수 세기 '''
'''
N = int(input())
A=list(map(int, input().split()))
M=int(input())
targets=list(map(int, input().split()))
count=dict()
for i in A:
    count[i] = count.get(i, 0) + 1
for i in targets:
    print(count.get(i, 0), end=" ")
    '''

# BOJ 18869
''' 시간초과 '''
'''
M, N=map(int, input().split())  # 우주 개수 M 행성 개수 N
lst=[]
for i in range(M):
    temp=[]
    lst.append(list(map(int, input().split())))

universe_unique=[] # 행성 크기가 몇 개 존재하는지 체크
for i in lst:
    templst=list(set(i))
    templst.sort()
    universe_unique.append(templst)

resultset=set()
for i in range(M):
    newlst=[]
    for j in range(N):
        newlst.append(universe_unique[i].index(lst[i][j]))
    
    resultset.add(tuple(newlst))

print(M-len(resultset))
'''

# BOJ 18870
'''
N=int(input())
X=list(map(int, input().split()))
temp = sorted(set(X))
dist_dict = {}
# for i in temp:
#     dist_dict[i]=dist_dict.get(i, temp.index(i))
for idx, value in enumerate(temp):
    dist_dict[value] = idx
for i in X:
    print(dist_dict[i], end=" ")
'''