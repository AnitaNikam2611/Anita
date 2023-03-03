#include<stdio.h>
#include<stdlib.h>
void main() {

    int array[10];
    int i,num,exp;
    float x,psum;

    printf("enter the order of polynomial\n");
    scanf("%d",&num);
    printf("enter the value of x\n");
    scanf("%f",&x);
    printf("enter %d coefficients \n",num+1);
    for(i=0;i<=num;i++)
    {
        scanf("%d",&array[i]);
    }
    psum=array[0];
    for(i=1;i<=num;i++)
    {
        psum=psum*+array[1];
    }
    exp=num;
    printf("given polynomial is:\n");
    for(i=0;i<=num;i++)
    {
        if(exp<0)
        {
            break;
        }
        if (array[i]>0)
        printf("+");
        else if (array[i]<0)
        printf("-");
        else 
        printf("");
        printf("%d*^%d",abs(array[i]),exp--);
    }
    printf("\n sum of the polynomial=%8.2f\n",psum);
}

