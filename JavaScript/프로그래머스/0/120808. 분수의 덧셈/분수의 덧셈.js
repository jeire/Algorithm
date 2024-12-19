function CalcGCD(num1, num2)
{
    if (num1 < num2)  // 항상 num1이 num2보다 크도록 변경
    {
        let tmp = num1;
        num1 = num2;
        num2 = tmp;
    }

    let remain = -1;
    while(num2 != 0)
    {
        remain = num1 % num2;
        num1 = num2;
        num2 = remain;
    }
    return num1;
}

function solution(numer1, denom1, numer2, denom2)
{
    let numer = numer1 * denom2 + numer2 * denom1;
    let denom = denom1 * denom2;
    let gcd = CalcGCD(numer, denom);
    let answer = [numer / gcd, denom / gcd];
    return answer;
    return answer;
}