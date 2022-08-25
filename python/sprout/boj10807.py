import sys
n = int(input())
numarr = list(map(int, sys.stdin.readline().rstrip().split()))
v = int(input())
cnt = 0
for num in numarr:
    if num == v:
        cnt += 1

print(cnt)