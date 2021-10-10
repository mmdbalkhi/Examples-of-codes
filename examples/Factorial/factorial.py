def factorial(num):
    if num == 0:
        return 1
    else:
        return num * factorial(num - 1)


number = 10
print(factorial(number))
