def solution(array):
    """
    list를 정렬하는 함수는 sorted(리스트 이름)라는 함수가 있습니다.
    중앙값을 구하는 것이므로 list의 주소는 0부터 n까지일 것이고
    가운데의 주소는 n입니다.
    즉 전체 길이를 len()으로 구한 뒤 2로 나누면 되겠죠.
    return sorted(array)[len(array) // 2]
