from collections import deque
n, k = map(int, input().split())
people = deque([i+1 for i in range(n)])

while len(people) > 0:
    if len(people) == n:
        print('<', end='')
    people.rotate(-k+1)
    print(people.popleft(), end='')
    if len(people) != 0:
        print(',', end=' ')
    if len(people) == 0:
        print('>')
