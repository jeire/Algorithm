def solution(n, numlist):
    answer = []               # 기존 리스트에서 제거하는 것보다 새 리스트에 추가하는 것이 복사로 인한 부하가 적습니다
    for i in numlist:         # numlist의 모든 요소를 검사합니다
        if i % n == 0:        # n의 배수라는 것은 n으로 나누면 나머지가 0이라는 뜻입니다
            answer.append(i)  # append(값)은 해당 list에 요소를 추가하는 함수입니다.
    return answer