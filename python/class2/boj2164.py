from collections import deque

n = int(input())
cards = deque([i+1 for i in range(n)])

while len(cards) > 1:
    cards.popleft()
    cards.rotate(-1)

print(cards[0])