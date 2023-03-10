# Is prime Or no?

> A prime number is a natural number greater than 1 that is not a product of two smaller natural numbers. A natural number greater than 1 that is not prime is called a composite number. For example, 5 is prime because the only ways of writing it as a product, 1 × 5 or 5 × 1, involve 5 itself

## code

```rust
// Check Is Prime ✅ Or No ✔️

fn main()
{
    let num = 12;

    if is_prime(num){
        println!("number {} is prime!", num);
    }
    else {
        println!("number {} is not prime!", num);
    }
}

fn is_prime(num:i32) -> bool
{
    let mut prime = true;
    for i in 2..num/2 {
        if num % i == 0 {
            prime = false;
            break;
        }
    }
    prime // this commend equal is the return prime;
}
```
