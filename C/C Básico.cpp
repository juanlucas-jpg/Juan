int main ()
{
    int a, b, c;
    printf ("Digite tres numeros inteiros: 1 2 3 ");
    scanf ("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
        printf ("%d e o maior\n", a);
    else if (b > a && b > c)
        printf ("%d e o maior\n", b);
    else if (c > a && c > b)
        printf ("%d e o maior\n", c);
    else
        printf ("Os numeros sao iguais\n");
    return 0;
}