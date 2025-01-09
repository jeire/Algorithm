def solution(price):
    # 조건문의 조건을 겹치지 않게 써야 합니다. 안그러면 앞에서 다 걸려서 뒤의 조건들이 무의미해져요
    # 연산자를 헷갈리지 않게 조심합니다. & 와 and를 헷갈릴 수 있어요
    if price >= 500000:
        return int(price * 0.8)
    elif price >= 300000:
        return int(price * 0.9)
    elif price >= 100000:
        return int(price * 0.95)
    return price
