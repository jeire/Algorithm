def double_value(n):
    """주어진 정수 n의 값을 두 배로 만드는 도우미 함수입니다."""
    return n * 2

def solution(numbers):
    """각 원소를 두 배로 만든 배열을 반환합니다."""
    doubled_numbers = list(map(double_value, numbers))  # double_value 함수를 사용하여 각 원소 두 배
    return doubled_numbers  # 결과 리스트 반환