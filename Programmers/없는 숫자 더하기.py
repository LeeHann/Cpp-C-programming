def solution(numbers):
    answer = 0
    for item in numbers:
        answer += item
    answer = 45 - answer
    return answer

# def solution(numbers):
#     return 45 - sum(numbers)


print(solution([1,2,3,4,6,7,8,0]))
