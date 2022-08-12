import sys
from collections import deque;

t = int(input())
for _ in range(t):
    n, m = map(int, sys.stdin.readline().rstrip().split())
    focus = deque(list(map(int, sys.stdin.readline().rstrip().split())))
    
    while focus[m] != max(focus):
        if focus[0] == max(focus):
            focus.popleft()
        else:
            focus.rotate(1)

        if m <= 0:
            m = len(focus)-1
        else:
            m -= 1

    print(m+1)
