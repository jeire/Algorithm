def CalcGCD(num1, num2):
    if num1 < num2:  # 항상 num1이 num2보다 크도록 변경
        tmp = num1
        num1 = num2
        num2 = tmp
    remain = -1
    while num2 != 0:  # while문은 최대공약수를 구하는 알고리즘입니다.
        remain = num1 % num2
        num1 = num2
        num2 = remain
    return num1

def solution(numer1, denom1, numer2, denom2):
    # 일단 기약분수를 고려하지 않고 통분을 먼저 진행합니다.
    numer = numer1 * denom2 + numer2 * denom1
    denom = denom1 * denom2

    gcd = CalcGCD(numer, denom)          # 기약분수를 만들기 위해 분모와 분자의 최대공약수를 구합니다.
    answer = [numer / gcd, denom / gcd]  # 최대공약수로 분모와 분자를 나누면 됩니다.
    return answer
