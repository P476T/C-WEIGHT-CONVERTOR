#include<stdio.h>
int main(){
    
    printf("weight converter");
    printf(" press 1 for kilograms to grams\n press 2 for grams to kilograms");
    int choice;
    scanf("%d",&choice);
    if(choice==1)
    {
        int totalgram;
        printf("you are selected for kg to grms\n");
        int kg=0;
        printf("enter the kilo");
        scanf("%d",&kg);
        totalgram=kg*1000;
        printf("\n the total gram is %d",totalgram);


    }
    else if(choice==2)
    {
        int grtg;
        printf("you are selected for grms to kgs\n");
        int g=0;
        printf("enter the grams");
        scanf("%d",&g);
        grtg=g/1000;
        printf("\n the total kgs is %d",grtg);

    }

}