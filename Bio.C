#include <stdio.h>
typedef struct bio {
    int num;
    char fname[100];
    char lname[100];
    char dob[100];
} bio;
int main()
{
    char name[100],dob[100];
    int num;
    struct bio b1;
    printf("\nHarsh Shetye_60009210068\n");
    printf(" \n Enter first name : ");
    scanf(" %s", &b1.fname);
    printf (" \n Enter last name : ");
    scanf(" %s", &b1.lname);
    printf(" Enter the date of birth: ");
    scanf(" %s", &b1.dob);
    printf(" Enter the mobile number: ");
    scanf(" %d", &b1.num);
    printf("\nName: %s %s",b1.fname,b1.lname);
    printf("\nDate of birth: %s",b1.dob);
    printf("\nMobile number: %d",b1.num);
}