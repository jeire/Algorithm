import math

def solution(n):
    """
    2가지 방법이 있습니다.
    첫번째 방법은 반복문으로 1의 제곱부터 시작해서 n보다 커지는 제곱수까지 반복문을 실행합니다.
    만약 n과 같은 값이 반복문 도중에 없었다면 제곱수가 아닌 것입니다.
    두번째 방법은 Math module에서 제공하는 sqrt()를 쓰는 것입니다.
    """
    return 1 if math.sqrt(n) % 1 == 0 else 2