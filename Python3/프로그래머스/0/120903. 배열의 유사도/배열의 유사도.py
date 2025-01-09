def solution(s1, s2):
    # set는 겹치는 요소가 없는 list라고 생각하면 됩니다.
    return len(set(s1)&set(s2));
