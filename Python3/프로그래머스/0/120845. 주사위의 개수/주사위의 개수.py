def solution(box, n):
    # 가로, 세로, 높이를 n으로 나누면 각 변에 세울 수 있는 주사위의 개수가 됩니다
    # 그걸 곱하면 주사위의 총 개수입니다
    return (box[0] // n) * (box[1] // n) * (box[2] // n)
