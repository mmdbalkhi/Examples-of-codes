fn fib(n: i32) -> u64 {
	if n < 0 {
		panic!("{} is negative! negative Numbers not Support ed!", n);
	}
	match n {
		0     => panic!("zero is not support"),
		1 | 2 => 1,
		3     => 2,
		/*
		50    => 12586269025,
		*/
		_     => fib(n - 1) + fib(n - 2)
	}
}


fn main()
{
    println!("{}", fib(10));
}