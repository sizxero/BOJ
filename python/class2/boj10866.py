import sys
from collections import deque

n = int(input())

deq = deque([])

for _ in range(n):
    command = sys.stdin.readline().rstrip().split()
    operator = command[0]
    if len(command) == 2:
        operand = command[1]
    
    if operator == 'push_front':
        deq.appendleft(operand)
    elif operator == 'push_back':
        deq.append(operand)
    elif operator == 'pop_front':
        if len(deq) == 0:
            print(-1)
        else:
            print(deq.popleft())
    elif operator == 'pop_back':
        if len(deq) == 0:
            print(-1)
        else:
            print(deq.pop())
    elif operator == 'size':
        print(len(deq))
    elif operator == 'empty':
        if len(deq) == 0:
            print(1)
        else:
            print(0)
    elif operator == 'front':
        if len(deq) == 0:
            print(-1)
        else:
            print(deq[0])
    elif operator == 'back':
        if len(deq) == 0:
            print(-1)
        else:
            print(deq[-1])