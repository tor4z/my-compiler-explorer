int square(int num) {
    return num * num;
}


int sum(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j)
{
    int x = 99;
    int y = a+b+c+d+e+f+g+h+i+j+x;
    x = x*210;
    return y+x;
}


int sum_array(int *array, int n)
{
    int result = 0;
    for (int i=0;i<n;i++)
    {
        result += array[i];
    }
    return result;
}


int main()
{
    int a [] ={8,9,7};
    int r = sum(1,2,3,4,5,6,7,8,9,10);
    square(7);
    sum_array(a, 3);
    return 0;
}