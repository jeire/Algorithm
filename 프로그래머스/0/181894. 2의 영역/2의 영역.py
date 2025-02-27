def solution(arr):
    returnArr = []
    startIndex = -1
    stopIndex  = -1
    for index in range(0, len(arr)):
        # index >= 0, 왜냐하면 range가 0 ~ len(arr)이기 때문에
        if arr[index] == 2:
            if startIndex < 0:
                startIndex = index  #0
                stopIndex  = index  #0
            else:
                stopIndex = index

    if startIndex >= 0 and stopIndex >= 0:
        returnArr = arr[startIndex:stopIndex+1]
    else:
        returnArr = arr = [-1]
    return returnArr