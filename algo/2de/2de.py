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
