# Factorial

> Factorial, in mathematics, the product of all positive integers less than or equal to a given positive integer and denoted by that integer and an exclamation point. Thus, factorial seven is written 7!, meaning 1 × 2 × 3 × 4 × 5 × 6 × 7. Factorial zero is defined as equal to 1.

# Code

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

