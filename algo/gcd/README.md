# gcd(Greatest common divisor)

The greatest common divisor (GCD) of two or more numbers is the greatest common factor number that divides them, exactly. It is also called the highest common factor (HCF). For example, the greatest common factor of 15 and 10 is 5, since both the numbers can be divided by 5. 15/5 = 3. 10/5 = 2.

![image](https://www.gstatic.com/education/formulas2/472522532/en/greatest_common_divisor.svg)



```python
#!/usr/bin/env python3

def gcd(a: int, b: int) -> int:
    """ """

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
```
