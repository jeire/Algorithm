def double_value(n):
    """주어진 정수 n의 값을 두 배로 만드는 도우미 함수입니다."""
    return n * 2

def solution(numbers):
    for i in range(len(numbers)):  # 배열의 처음부터 끝까지 index로 접근합니다.
        numbers[i] *= 2            # 배열의 각 요소에 2를 곱하여 다시 요소에 덮어씁니다.
    return numbers                 # 결과 리스트 반환