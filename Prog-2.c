//avg sum 
#include<stdio.h>
int main()
{
    int a[100], i, size, s = 0;
    float avg;

    printf("Write the total numbers you want to add: ");
    scanf("%d",&size);
    
    printf("Enter the %d numbers:",size);
    for(i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
        s = s + a[i];
    }

   	printf("Average is :");
   	avg = s/size;
    printf("Sum = %d\n", s);
    printf("Average = %f", avg);

   
}

