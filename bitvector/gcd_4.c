long gcd_test(long a, long b)
{
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    if (a == 0) {
        return b;
    }

    while (b != 0) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;
}


int main()
{
    long x;
    long y;
    long g;

    x = 63;
    y = 18;

    g = gcd_test(x, y);

    assert(x % g == 0);
    assert(y % g == 0);
    assert(g == 9);

    return 0;
}