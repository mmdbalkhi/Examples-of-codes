//Problem2

fn main()
{
    let mut i = 1;
    let mut sum = 0;
    while fib(i) < 4000000{
        i += 1;
        if fib(i) % 2 == 0{
            sum += fib(i);
        }
    }println!("{}", sum);
    
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
