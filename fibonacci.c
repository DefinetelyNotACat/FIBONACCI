#include <stdio.h>
void fibonacci(long long number)
{
    // 1， 1， 2， 3， 5， 8， 13, 21, ...
    //int a, b = 1;
    long long a = 1;
    long long b = 1;
    printf("%lld %lld ", a,b);
    long long c = a + b;
    long long i = 2;
    while (c <= number)
    {
        ++i;
        printf("%lld ", c);
        c = a + b;
        b = a;
        a = c;
    }
    printf("\nho trovato %lld numeri", i);

}
void main()
{
    long long number;
    scanf("%lld", &number);
    fibonacci(number);
}

