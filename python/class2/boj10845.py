import sys
from collections import deque

n = int(input())

queue = deque([])

for _ in range(n):
    command = sys.stdin.readline().rstrip().split()
    operator = command[0]
    if len(command) == 2:
        operand = command[1]
    
    if operator == 'push':
        queue.append(operand)
    elif operator == 'pop':
        if len(queue) == 0:
            print(-1)
        else:
            print(queue.popleft())
    elif operator == 'size':
        print(len(queue))
    elif operator == 'empty':
        if len(queue) == 0:
            print(1)
        else:
            print(0)
    elif operator == 'front':
        if len(queue) == 0:
            print(-1)
        else:
            print(queue[0])
    elif operator == 'back':
        if len(queue) == 0:
            print(-1)
        else:
            print(queue[-1])