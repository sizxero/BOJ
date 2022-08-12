import sys
t = int(input())

for _ in range(t):
    brakets = sys.stdin.readline().rstrip()
    brakets_stack = []

    for braket in brakets:
        if braket == '(':
            brakets_stack.append(braket)
        else:
            if len(brakets_stack) != 0:
                if brakets_stack[-1] == '(':
                    brakets_stack.pop()
            else:
                brakets_stack.append(braket)

    if len(brakets_stack) == 0:
        print('YES')
    else:
        print('NO')
