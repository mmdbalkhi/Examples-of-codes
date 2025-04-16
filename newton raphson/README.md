# √2 Approximation using Newton-Raphson Method in C

This project demonstrates how to compute the square root of 2 (`√2`) in the C programming language without using any built-in math libraries like `<math.h>`.

The method used is the **Newton-Raphson iterative method**.

---

## 🧮 Mathematical Background

To compute $\sqrt{2}$, we solve the equation:

```math
x^2 - 2 = 0
```

Let:

```math
f(x) = x^2 - 2 \\
f'(x) = 2x
```

Using the Newton-Raphson update formula:

```math
x_{n+1} = x_n - \frac{f(x_n)}{f'(x_n)} = x_n - \frac{x_n^2 - 2}{2x_n}
```

We can simplify this into:

```math
x_{n+1} = \frac{1}{2} \left(x_n + \frac{2}{x_n}\right)
```

---

## 💡 How it Works

The program starts with an initial guess (e.g. `x = 1`) and repeatedly applies the Newton-Raphson formula until the result converges to a value with high precision (controlled by `epsilon`).

---

## 🔧 How to Build and Run

```bash
gcc sqrt2.c -o sqrt2
./sqrt2
```

Expected output:

```
sqrt(2) ≈ 1.4142135624
```

> note: The implementation avoids using the `math.h` library entirely.
