int sum_f(int *array, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += 10 * array[i];
    return sum;
}


int f()
{
    int a[] = {1,2,3,4,5,6,7,8,9,11};
    return sum_f(a, 9);
}

int f1()
{
    int a[] = {
        1,2,3,4,5,6,7,8,9,111,2,3,4,5,6,7,8,9,
        111,2,3,4,5,6,7,8,9,111,2,3,4,5,6,7,8,9,
        111,2,3,4,5,6,7,8,9,4,5,6,7,8,9,4,5,6,7,
        8,9,4,5,6,7,8,9,4,5,6,7,8,9
    };
    return sum_f(a, 9);
}


int main()
{
    f();
    return 0;
}
