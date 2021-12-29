double f2(double a, float b)
{
    return a * 2 + b;
}


float f()
{
    float pi= 3.14;
    double e = 2.7;
    f2(e, pi);
    return pi;
}

int main()
{
    f();
    return 0;
}
