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