// Fibonacci numbers
    // 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
    // f1 = 1, f2 = 1, ..., fn = f_(n-2) + f_(n-1)

// recursive function
double Fib (unsigned n)
{
    if (n <= 2)
        return 1;
    else
        return Fib(n - 1) + Fib(n - 2);
}
