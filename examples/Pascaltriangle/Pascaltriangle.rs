

fn main()
{
	let n = 10;

	for k in 0..n // TODO: Rust Not C! That's why I have to fix the print as soon as possible!
	{
		for m in 0..k+1
		{
			println!("{}", pascaltriangle(k, m));
		}
		println!("\n");

	}
}

fn pascaltriangle(n:u32, i:u32) -> i64 {
	if n == i || i == 0 {
		return 1;
	}
	else{
		return pascaltriangle(n-1, i) + pascaltriangle(n-1, i-1);

	}
}