//Fibonacci

fn main()
{
    println!("{}", fib(10));
    println!("{}", fib_loop(10));
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


fn fib_loop(num:u32) -> u64
{
    let mut Fibonacci;
    for i in 1..n+1{
        Fibonacci += i;
    }
    Fibonacci
}