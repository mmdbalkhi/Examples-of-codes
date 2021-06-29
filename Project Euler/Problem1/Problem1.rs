fn main(){
    
    let mut sum = 0;
    for i in 1..10 {
        if i % 3 == 0 || i % 5 == 0 {
            sum += i;
        }
    }
    println!("{}", sum);
    
}