from random import randint

def pow(x, y, z):
    num = 1
    while y:
        if y & 1:
            num = num * x % z
        y >>= 1
        x = x * x % z
    return num
    
def isPrime(n, k=10):
    if n <= 1:
        return False
    if n <= 3:
        return True
    for i in range(k):
        a = randint(2, n - 1)
        if pow(a, n - 1, n) != 1:
            return False
    return True


if isPrime(131):
    print("Prime")
else:
    print("Not prime")