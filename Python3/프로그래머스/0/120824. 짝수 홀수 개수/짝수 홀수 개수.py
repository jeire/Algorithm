def solution(num_list):
    answer = [0, 0]         # 짝수와 홀수의 갯수를 카운트할 list 초기화
    for i in num_list:      # 리스트의 요소를 추출할 i와 반복문
        if i % 2 == 0:      # 2로 나누어 나머지가 0이면 짝수
            answer[0] += 1  # 짝수 개수 카운트 1 증가
        else:               # 나머지가 0이 아니면 홀수
            answer[1] += 1  # 홀수 개수 카운트 1 증가
    return answer
