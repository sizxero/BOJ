import sys
m = int(input())
setanswer = []

for i in range(m):
    arr = sys.stdin.readline().rstrip().split()
    operator = arr[0]
    if len(arr) == 2:
        operand = int(arr[1])

    if operator == 'add':
        if operand not in setanswer:
            setanswer.append(operand)
    elif operator == 'remove':
        if operand in setanswer:
            setanswer.remove(operand)
    elif operator == 'check':
        if operand not in setanswer:
            print(0)
        else:
            print(1)
    elif operator == 'toggle':
        if operand not in setanswer:
            setanswer.append(operand)
        else:
            setanswer.remove(operand)
    elif operator == 'all':
        setanswer = [i for i in range(1, 21)]
    elif operator == 'empty':
        setanswer = []
