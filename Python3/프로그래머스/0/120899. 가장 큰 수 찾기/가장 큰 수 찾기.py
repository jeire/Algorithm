def solution(array):
    biggest = array[0]  # list의 첫번째 요소를 가장 크다고 가정합니다.
    index = 0           # list의 첫번째 요소가 가장 크다고 보면 index == 0입니다.
    for i in range(1, len(array), 1):  # 0번째 요소를 기준으로 반복하므로 0번 주소는 제외해도 됩니다
        if array[i] > array[index]:    # 현재 최고값보다 새 index의 값이 더 크면
            biggest = array[i]         # 최댓값을 갱신해야 합니다.
            index = i                  # index도 갱신해야 합니다.
    return [biggest, index]