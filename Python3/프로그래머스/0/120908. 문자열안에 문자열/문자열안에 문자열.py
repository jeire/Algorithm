def solution(str1, str2):
    i = 0
    j = 0
    answer = 2
    while i < len(str1):
        if str1[i] == str2[j]:
            j += 1
            if j == len(str2):
                answer = 1
                break;
        else:
            answer = 2
            j = 0
        i += 1           
    
    return answer