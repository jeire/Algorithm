def solution(array, height):
    array.sort()    # list를 정렬합니다
    for i in range(len(array)):
        if array[i] > height:
            return len(array) - i
    return 0