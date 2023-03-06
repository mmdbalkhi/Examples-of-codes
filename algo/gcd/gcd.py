#!/bin/python3


def gcd(a: int, b: int) -> int:
    """The greatest common divisor (GCD) of two or more numbers
    is the greatest common factor number that divides them, exactly
    """
    # a / b = 1
    if a == b:
        return a

    # By default, we consider that a is greater than b.
    if b > a:
        a, b = b, a

    if a % b == 0:
        return b

    return gcd(b, a % b)


if __name__ == "__main__":
    a, b = map(int, input("please enter a and b to find gcd: \n>").split())
    print(gcd(a, b))
