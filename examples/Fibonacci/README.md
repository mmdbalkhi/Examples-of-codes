# Fibonacci

> The Fibonacci sequence is a set of numbers that starts with a one or a zero, followed by a one, and proceeds based on the rule that each number (called a Fibonacci number) is equal to the sum of the preceding two numbers. ... F (0) = 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ... In some texts, it is customary to use n = 1

## Code

```rust
//Fibonacci
fn main()
{
    println("{}", fib(10));
    
}

fn fib(n: i32) -> u64 {
	if n < 0 {
		panic!("{} is negative! negative Numbers not Support", n);
	}
	match n {
		0     => panic!("zero is not support"),
		1 | 2 => 1,
		3     => 2,
		_     => fib(n - 1) + fib(n - 2)
	}
}

```
