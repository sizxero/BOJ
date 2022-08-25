import sys
pokemon_num, quiz_num = map(int, sys.stdin.readline().rstrip().split())
pokemon = {}
for i in range(pokemon_num):
    input_str = sys.stdin.readline().rstrip()
    pokemon[i+1] = input_str
    pokemon[input_str] = i+1


for _ in range(quiz_num):
    q = sys.stdin.readline().rstrip()
    try:
        print(pokemon[q])
    except:
        print(pokemon[int(q)])
