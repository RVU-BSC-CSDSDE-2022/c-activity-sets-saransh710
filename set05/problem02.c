#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

Fraction reduceFraction(Fraction f) {
    int g = gcd(f.num, f.den);
    f.num /= g;
    f.den /= g;
    return f;
}

int compareFractions(Fraction f1, Fraction f2) {
    Fraction fr1 = reduceFraction(f1), fr2 = reduceFraction(f2);
    int lcm = fr1.den * fr2.den / gcd(fr1.den, fr2.den);
    int num1 = lcm / fr1.den * fr1.num, num2 = lcm / fr2.den * fr2.num;
    return num1 - num2;
}

Fraction smallestOfThreeFractions(Fraction f1, Fraction f2, Fraction f3) {
    Fraction smallest = f1;
    if (compareFractions(f2, smallest) < 0) smallest = f2;
    if (compareFractions(f3, smallest) < 0) smallest = f3;
    return smallest;
}

int main() {
    Fraction f1 = {1, 2}, f2 = {2, 3}, f3 = {3, 4};
    Fraction smallest = smallestOfThreeFractions(f1, f2, f3);
    printf("The smallest fraction is %d/%d\n", smallest.num, smallest.den);
    return 0;
}
