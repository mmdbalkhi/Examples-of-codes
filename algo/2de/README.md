# Solve 2nd degree equation

A polynomial having degree 2 is considered a second-degree equation and it is also called a quadratic equation. The standard form of the second-degree equation is ax2+bx+c=0. Delta in the second-degree equation is used to find the type of roots that the polynomial has. If the Delta value for a polynomial is greater than zero (Delta>0) then the polynomial has two real distinct roots. If the Delta value for a polynomial is equal to zero (Delta=0) then the polynomial has only one root. If the Delta value is less than zero (Delta<0) then the polynomial has two imaginary roots.

If the quadratic equation is of form ax2+bx+c=0 then the formula for finding the delta is given below-

```
    Delta = b2-4ac
```

```python
#!/usr/bin/env python3

a, b, c = map(
    int,
    input(
        "please Enter a, b and c in this equation ax\u00B2 + bx + c = 0: \n>"
    ).split(),
)


delta = b**2 - 4 * a * c

if delta < 0:
    raise ValueError(
        "This equation has no Answer in R because delta is a negative number."
    )
if delta >= 0:
    sqrt_of_delta = __import__("math").sqrt(delta)
    x1 = (-b + sqrt_of_delta) / (2 * a)
    x2 = (-b - sqrt_of_delta) / (2 * a)

print(f"{x1} {x2} are answers")
```

## source of details:

- [geeksforgeeks](https://www.geeksforgeeks.org/how-to-find-the-delta-in-second-degree-equations/)
