# Fibonacci

> The Fibonacci sequence is a set of numbers that starts with a one or a zero, followed by a one, and proceeds based on the rule that each number (called a Fibonacci number) is equal to the sum of the preceding two numbers. ... F (0) = 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ... In some texts, it is customary to use n = 1

## Code

### C

```c
#include <stdio.h>

int fib(int n)
{
	switch (n)
	{
		case 0: return 0;
		case 1: return 1;
		case 2: return 1;
	}
	return fib(n-1)+fib(n-2);
}

int main()
{
	printf("%d\n", fib(10));
	return 0;
}
```

# C#

```cs
public class game
{

    static int fib(int number)
    {
        switch (number)
        {
            case 1:
                return 1;
            case 2:
                return 1;
            default:
                return fib(number - 1) + fib(number - 2);
        }
    }
    static void Main()
    {
        Console.WriteLine(fib(10));
    }

}
```

### Erlang

```erlang
% Power By Jadi Presention

-module (fib).
-export ([fib/1]).

fib(N) -> fib_internal(N, 0, 1).

fib_internal(0, Result, _) -> Result;
fib_internal(Iter, Result, Next) when Iter > 0 ->
    fib_internal(Iter-1, Next, Next+Result).
```

### Python

```python
def fib(n):
    a, b = 0, 1
    while a < n:
        print(a, end=" ")
        a, b = b, a + b
    print()

fib(1000)

```
