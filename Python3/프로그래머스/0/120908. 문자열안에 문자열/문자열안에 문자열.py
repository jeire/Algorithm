def solution(str1, str2):
    """
    in 키워드는 뒤에 나올 자료구조에 in 앞의 요소가 있는지 검색하여 True 혹은 False를 반환합니다.
    그런데 True를 int로 형변환하면 1, False를 int로 형변환하면 0입니다.
    문제에서는 없을 경우 2를 반환해야 하므로 not을 붙여서 뒤집어야 합니다.
    즉 1 + (있으면 0, 없으면 1)
    이렇게 만들 수 있으면 됩니다.
    """
    return 1 + int(str2 not in str1)
