r = 31
m = 1234567891

l = int(input())
engstr = input()

answer = 0
for i, es in enumerate(engstr):
    answer += (ord(es)-96)*(r**i)

print(answer%m)