import sys
from collections import deque;

t = int(input())
for _ in range(t):
    n, m = map(int, sys.stdin.readline().rstrip().split())
    focus = list(map(int, sys.stdin.readline().rstrip().split()))
    q = deque(focus)
    focus[m] = 'target'
    answer = 0


    while True:
        if q[0] == max(q):
            answer += 1
            if focus[0] == 'target':
                print(answer)
                break
            else:
                q.popleft()
                focus.pop(0)
        else:
            q.append(q.popleft())
            focus.append(focus.pop(0))