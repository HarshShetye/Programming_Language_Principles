#include<stdio.h>
int main()
{
    int a, b, c;
    printf("\nHarsh Shetye_60009210068\n");
    printf("Enter the sides of a Triangle.\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a<b+c && b<a+c && c<a+b) {
        printf("Triangle is constructable.\n");
        if (a==b && b==c)
            printf("Equilateral Triangle");
        else if ( a*a + b*b == c*c || c*c + b*b == a*a || a*a + c*c == b*b ) {
            printf("Right Angled Triangle.");
            return 0;
        } else if (a!=b && b!=c && c!=a)
            printf("Scalene Triangle");
        else
            printf("Isosceles Triangle");
    } else
        printf("Triangle is not constructable.");
    return 0;
}
