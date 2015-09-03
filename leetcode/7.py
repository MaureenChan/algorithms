def reverse(x):
    flag = 1 if x > 0 else 0
    if flag == 0:
        x = -x

    result = 0
    while x != 0 :
        left = x % 10
        x = x / 10
        result = result * 10 + left


    if result < 0:
        return -1

    else :
        if flag == 0:
            result = 0 - result
        return result

