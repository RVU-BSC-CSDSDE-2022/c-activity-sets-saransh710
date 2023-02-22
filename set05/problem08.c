#include <stdio.h>

typedef struct fraction
{
    int num, den;
} Fraction;

int input_n()
{
    int n;
    printf("Enter the number of fractions to add: ");
    scanf("%d", &n);
    return n;
}

Fraction input_fraction()
{
    Fraction f;
    printf("Enter the numerator: ");
    scanf("%d", &f.num);
    printf("Enter the denominator: ");
    scanf("%d", &f.den);
    return f;
}

void input_n_fractions(int n, Fraction f[n])
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter fraction %d:\n", i + 1);
        f[i] = input_fraction();
    }
}

int find_gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return find_gcd(b, a % b);
}

Fraction add_fractions(Fraction f1, Fraction f2)
{
    Fraction result;
    result.num = (f1.num * f2.den) + (f2.num * f1.den);
    result.den = f1.den * f2.den;
    int gcd = find_gcd(result.num, result.den);
    result.num /= gcd;
    result.den /= gcd;
    return result;
}

Fraction add_n_fractions(int n, Fraction f[n])
{
    Fraction sum = f[0];
    for (int i = 1; i < n; i++)
    {
        sum = add_fractions(sum, f[i]);
    }
    return sum;
}

void output(int n, Fraction f[n], Fraction sum)
{
    printf("The sum of ");
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d/%d + ", f[i].num, f[i].den);
    }
    printf("%d/%d is %d/%d\n", f[n - 1].num, f[n - 1].den, sum.num, sum.den);
}

int main()
{
    int n = input_n();
    Fraction f[n];
    input_n_fractions(n, f);
    Fraction sum = add_n_fractions(n, f);
    output(n, f, sum);
    return 0;
}