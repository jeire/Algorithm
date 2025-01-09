def solution(s1, s2):
    # set는 python에서 집합 연산을 할 수 있게 해주는 자료구조입니다.
    # 문제는 교집합을 구하는 문제이므로 set를 쓰면 교집합을 구하는 연산을 할 수 있죠
    return len(set(s1)&set(s2));
