import sys
pokemon_num, quiz_num = map(int, sys.stdin.readline().rstrip().split())
pokemon = []
for _ in range(pokemon_num):
    pokemon.append(sys.stdin.readline())

for _ in range(quiz_num):
    quiz = sys.stdin.readline()
    try:
        idx = int(quiz)
        print(pokemon[idx-1])
    except:
        print(pokemon.index(quiz)+1)
