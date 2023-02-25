#include <stdio.h>
int multiply(int a, int b)
{
    if(b == 0) {
        return 0;
    } else {
        return (a + multiply(a, b-1));
    }
}
main()
{
    int a, b, product;
    printf("\nHarsh Shetye_60009210068\n");
    printf("Enter two numbers \n");
    scanf("%d %d",&a,&b);
    product = multiply(a,b);
    printf("Multiplication of two numbers is %d",product);
}
