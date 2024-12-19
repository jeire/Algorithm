def CalcGCD(num1, num2):
    if num1 < num2:  # 항상 num1이 num2보다 크도록 변경
        tmp = num1
        num1 = num2
        num2 = tmp
    remain = -1
    while num2 != 0:
        remain = num1 % num2
        num1 = num2
        num2 = remain
    return num1

def solution(numer1, denom1, numer2, denom2):
    numer = numer1 * denom2 + numer2 * denom1
    denom = denom1 * denom2
    gcd = CalcGCD(numer, denom)
    answer = [numer / gcd, denom / gcd]
    return answer