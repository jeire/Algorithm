def solution(n):
    # range를 사용할 줄 알면 쉽습니다. 홀수는 1부터 시작해 2씩 증가하니까요.
    # 다만 n이 홀수인 경우 n도 포함시켜야 하니까 stop을 n+1로 해주어야 합니다.
    return list(range(1, n+1, 2))
