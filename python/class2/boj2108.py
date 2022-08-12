import math

n = int(input())

num_dict = {}
num_sum = 0
max_num = -4001
num_arr = []
for _ in range(n):
    num = int(input().strip())
    num_sum += num
    num_arr.append(num)
    try:
        if num_dict[num] >= 1:
            num_dict[num] += 1
    except:
        num_dict[num] = 1

    if num_dict[num] > max_num and num_dict[num] != 1:
        max_num = num_dict[num]

if (max_num == -4001):
    max_num = 1

print(round(num_sum/n))
num_arr.sort()

print(num_arr[math.trunc(n/2)])
choibin = [k for k, v in sorted(num_dict.items())if v == max_num]

if len(choibin) > 1:
    print(choibin[1])
else:
    print(choibin[0])
print(num_arr[-1]-num_arr[0])