def solution(n):
    ans = 0
    tmp = n
    while tmp >= 5:
        if tmp % 125 == 0:
            ans += 3
        elif tmp % 25 == 0:
            ans += 2
        elif tmp % 5 == 0:
            ans += 1
        tmp -= 1
    return ans


num = int(input())
print(solution(num))
