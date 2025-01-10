def solution(array, height):
    array.sort()    # list를 정렬합니다
    for i in range(len(array)):
        if array[i] > height:      # 머쓱이보다 키가 큰 사람이 나오면
            return len(array) - i  # 전체 list의 길이에서 해당 index를 빼면 됩니다.
    return 0  # 머쓱이보다 키가 큰 사람이 없으면 반복문을 끝까지 실행하게 되므로 0명입니다
