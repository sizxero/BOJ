import sys
from collections import deque;

t = int(input())
for _ in range(t):
    n, m = map(int, sys.stdin.readline().rstrip().split())
    focus = deque(list(map(int, sys.stdin.readline().rstrip().split())))
    target = deque([ False for _ in range(len(focus))])
    target[m] = True

    while focus != deque(sorted(focus, reverse=True)) and target[0]:
        maxval = max(focus)
        top = focus.popleft()
        if top != maxval:
            focus.append(top)
            focus.rotate(1)
            target.rotate(1)
            if m == 0:
                m = len(focus)-1
            else:
                m -= 1

    if(m == 0):
        print(1)
    else:
        print(m)