// find the smallest no in the array
#include<stdio.h>
int main()
{
    int a[100], i, size, small;
    

    printf("Write the size you want to give: ");
    scanf("%d",&size);
    
    printf("Enter the %d numbers:",size);
    for(i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
       
    }
	small = a[0];
	 for(i = 1; i < size; i++)
    {
       if(a[i]< small)
	   {
       	 small = a[i];
	   }
       
    }
   	
   	printf("Maximum is = %d",small);


   
}
