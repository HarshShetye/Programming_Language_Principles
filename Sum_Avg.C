#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int sum=0;
    float avg;
    int number=0;
    int curr=1;
    printf("Harsh Shetye_60009210068\n");
    while(curr>0) {
        printf("enter a number : ");
        scanf("%d",&curr);

        if(curr<0)
            break;
        number++;
        sum+=curr;
        avg=((float)sum/(float)number);
    }
    goto negative;
negative : {
        printf("\nthe sum is %d and avg is %f",sum,avg);
        return 0;
    }

}
