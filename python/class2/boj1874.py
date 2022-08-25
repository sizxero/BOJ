n = int(input())

stack = [0]
for _ in range(n):
    num = int(input())
    if stack.top() < num:
        break