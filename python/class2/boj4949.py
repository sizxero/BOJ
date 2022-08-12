import sys

string = ''
while string != '.':
    string = sys.stdin.readline()[:-1]
    brakets_stack = []
    if string != '.':   
        for s in string:
            if s == '(' or s == '[' :
                brakets_stack.append(s)
            elif s == ')' or s == ']':
                if len(brakets_stack) != 0:
                    if s == ')':
                        if brakets_stack[-1] == '(':
                            brakets_stack.pop()
                        else:
                            brakets_stack.append(s)
                    elif s == ']':
                        if brakets_stack[-1] == '[':
                            brakets_stack.pop()
                        else:
                            brakets_stack.append(s)
                else:
                    brakets_stack.append(s)

        if len(brakets_stack) == 0:
            print('yes')
        else:
            print('no')
