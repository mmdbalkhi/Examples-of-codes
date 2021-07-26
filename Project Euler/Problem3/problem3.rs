fn main() {
    println!("{}", biggest_prime_factor(600851475143));
}

fn sieve(ceil: usize) -> Vec<usize> {
    let mut is_prime = vec![true; ceil + 1];
    is_prime[0] = false;
    if ceil >= 1 {
        is_prime[1] = false
    }

    for num in 2..ceil + 1 {
        if is_prime[num] {
            let mut factor = num * num;
            while factor <= ceil {
                is_prime[factor] = false;
                factor += num;
            }
        }
    }

    is_prime
        .iter()
        .enumerate()
        .filter_map(|(p, &is_p)| if is_p { Some(p) } else { None })
        .collect()
}
fn biggest_prime_factor(n: usize) -> usize {
    for p in sieve((600851475143_f32.sqrt()) as usize).iter().rev() {
        if n % *p == 0 {
            return *p;
        }
    }
    return 0;
}
