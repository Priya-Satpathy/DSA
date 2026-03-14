// find the diff no in the array
#include<stdio.h>
int main()
{
    int a[100], i, size, s = 0,max, small;
    

    printf("Write the total numbers you want to add: ");
    scanf("%d",&size);
    
    printf("Enter the %d numbers:",size);
    for(i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
       
    }
	max = a[0];
	 for(i = 1; i < size; i++)
    {
       if(a[i]>max)
	   {
       	 max = a[i];
	   }
       
    }
    	small = a[0];
	 for(i = 1; i < size; i++)
    {
       if(a[i]< small)
	   {
       	 small = a[i];
	   }
       
    }
   	
   	printf("The difference between largest and smallest element is %d",max-small);


   
}
