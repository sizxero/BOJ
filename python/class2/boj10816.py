import sys
n = int(input())
numcard = [0 for _ in range(20000001)]
cards = sys.stdin.readline().rstrip().split()
for card in cards:
    numcard[int(card)+10000000] += 1

m = int(input())
cardidxs = sys.stdin.readline().rstrip().split()
for cardidx in cardidxs:
    print(numcard[int(cardidx)+10000000], end=' ')