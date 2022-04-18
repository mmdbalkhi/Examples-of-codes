# Pascal's(khayyam/newton) triangle

<img src="https://upload.wikimedia.org/wikipedia/commons/f/f6/Pascal%27s_triangle_5.svg" align="right" height="240px">

> In [mathematics](https://en.wikipedia.org/wiki/Mathematics), Pascal's triangle is a [triangular array](https://en.wikipedia.org/wiki/Triangular_array) of the [binomial coefficients](https://en.wikipedia.org/wiki/Binomial_coefficient) that arises in probability theory, combinatorics, and algebra. In much of the [Western world](https://en.wikipedia.org/wiki/Western_world), it is named after the French mathematician [Blaise Pascal](https://en.wikipedia.org/wiki/Blaise_Pascal), although other mathematicians studied it centuries before him in India, [^1] Persia, [^2] China, Germany, and Italy.[^3]

<img src="https://upload.wikimedia.org/wikipedia/commons/0/0d/PascalTriangleAnimated2.gif" align="right" height="240px">

> The rows of Pascal's triangle are conventionally enumerated starting with row {\displaystyle n=0}n=0 at the top (the 0th row). The entries in each row are numbered from the left beginning with {\displaystyle k=0}k=0 and are usually staggered relative to the numbers in the adjacent rows. The triangle may be constructed in the following manner: In row 0 (the topmost row), there is a unique nonzero entry 1. Each entry of each subsequent row is constructed by adding the number above and to the left with the number above and to the right, treating blank entries as 0. For example, the initial number in the first (or any other) row is 1 (the sum of 0 and 1), whereas the numbers 1 and 3 in the third row are added to produce the number 4 in the fourth row.

* To read more, refer to this [link](https://en.wikipedia.org/wiki/Pascal%27s_triangle) in Wikipedia.

---

## Codes

### code For C

```c
#include <stdio.h>

long pascaltriangle(int, int);

int main() {
 	int n = 10;

	for(int k = 0; n >= k; k++) {
		for(int s = 0; s < n-k; s++)
			printf(" ");
		for(int m = 0; k >= m; m++) {
			long f = pascaltriangle(k, m);
			printf("%ld ", f);
		}
		printf("\n");
	}
	return 0;
}

long pascaltriangle(int n, int i) {
	if(n == i || i == 0)
		return 1;
	else
		return pascaltriangle(n-1, i) + pascaltriangle(n-1, i-1);
}
```

### code For rust

‍‍‍

```rust

fn main()
{
	let n = 10;

	for k in 0..n
	{
		for m in 0..k+1
		{
			print!("{}", pascaltriangle(k, m));
		}
		print!("\n");

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

```

---

## notes

[^1]: Maurice Winternitz, History of Indian Literature, Vol. III
[^2]: Coolidge, J. L. (1949), "The story of the binomial theorem", The American Mathematical Monthly, 56 (3): 147–157, doi:10.2307/2305028, JSTOR 2305028, MR 0028222.
[^3]: Peter Fox (1998). Cambridge University Library: the great collections. Cambridge University Press. p. 13. ISBN 978-0-521-62647-7.
