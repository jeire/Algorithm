def solution(n):
    answer = 0  # 더한 값을 저장할 변수 0으로 초기화
    for i in range(2, n + 1, 2):  # 짝수는 2에서 시작해서 2씩 증가합니다. 그리고 n이 짝수이면 n도 포함해야 합니다
        answer += i               # 기존 합에 새로운 짝수 더하기
    return answer
