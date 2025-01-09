def solution(array):
    array.sort()
    return array[len(array) // 2 - int(len(array) % 2 == 0)]