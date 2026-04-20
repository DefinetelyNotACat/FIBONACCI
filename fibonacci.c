#include <stdio.h>
void fibonacci(long long user_number)
{
    // 1， 1， 2， 3， 5， 8， 13, 21, ...
    long long a = 1;
    long long b = 1;
    printf("%lld %lld ", a,b);
    long long c = a + b;
    long long i = 2;
    while (c <= user_number)
    {
        ++i;
        printf("%lld ", c);
        c = a + b;
        b = a;
        a = c;
    }
    printf("\i found %lld numbers", i);

}
void main()
{
    long long number;
    scanf("%lld", &number);
    fibonacci(number);
}

