// lean rust!
// find number's factorail

fn main() {
        println!("{}", factorail(4));
}

fn factorail(num:u32) -> u32 {
        match num{
                1 => 1,
                2 => 2,
                _ => factorail(num-1)*num
        }
}