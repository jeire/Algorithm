def solution(numbers):
    numbers.sort()  # 제공되는 정렬 함수를 사용합니다. 아무런 매개변수도 쓰지 않으면 오름차순 정렬을 합니다.
    # 오름차순 정렬된 배열에서 가장 큰 값은 맨 뒷자리입니다.
    return numbers[-1] * numbers[-2]  # 주소에 -1을 넣으면 맨뒷자리, -2를 넣으면 바로 앞자리입니다.
