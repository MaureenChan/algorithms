def isUgly(num):
    seq = [2,3,5]
    factor = set(seq)
    if num == 0:
        return False
    for i in factor:
        while (num % i == 0):
            num = num / i
        if num == 1:
            return True


    return False





if __name__ == '__main__':
    y = isUgly(14)
    print y
