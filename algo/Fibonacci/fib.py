def fib_rec(n):
    if n == 0:
        return 1
    if n == 1:
        return 1
    return fib_rec(n-1) + fib_rec(n-2)


print(fib_rec(10))
