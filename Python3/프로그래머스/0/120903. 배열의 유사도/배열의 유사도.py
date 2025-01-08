def solution(s1, s2):
    answer = 0
    for key1 in s1:
        for key2 in s2:
            if key1 == key2:
                answer += 1
    return answer