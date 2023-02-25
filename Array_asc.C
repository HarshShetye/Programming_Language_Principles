#include<stdio.h>
void sort(int n, int* ptr)
{
    int i, j, t;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (*(ptr + j) < *(ptr + i)) {
                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
    printf("Sorted Array is:\n");
    for (i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
}
int main()
{
    int n,i,H[100];
    printf("\nHarsh Shetye_60009210068\n");
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the array Elements\n");
    for (i=0; i<n; i++)
        scanf("%d",&H[i]);
    sort(n, H);
    return 0;
}
