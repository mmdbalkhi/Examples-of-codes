# Factorial

> Factorial, in mathematics, the product of all positive integers less than or equal to a given positive integer and denoted by that integer and an exclamation point. Thus, factorial seven is written 7!, meaning 1 × 2 × 3 × 4 × 5 × 6 × 7. Factorial zero is defined as equal to 1.

## Code

### Erlang

```erlang
-module (factorail).
-export ([factorail/1]).

factorail(1) -> 1;
factorail(2) -> 2;
factorail(N) -> factorail(N-1)*N.
```

### Rust

```rust
// lean rust!
// find number's Factorial

fn main() {
        println!("{}", factorial(4));
}

fn factorial(num:u32) -> u32 {

        let mut rot:u32 = 1;

        for i in 1..num+1 {
            rot *= i;
        }
        rot
}
```

### Python

```python
def factorial(num):
    if num == 0:
        return 1
    else:
        return num * factorial(num-1)
number = int(input("Enter your number = "))
print(factorial(number))
```

