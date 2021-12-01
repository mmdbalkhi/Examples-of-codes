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