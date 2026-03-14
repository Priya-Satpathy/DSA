//find the 2nd smallest


#include<stdio.h>
int main()
{
    int a[100], i, size, min=0,minSecond;
    

    printf("Write the total numbers you want to add: ");
    scanf("%d",&size);
    
    printf("Enter the %d numbers:",size);
    for(i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
       
    }
    
	min = a[0];
	for(i = 1; i < size; i++)
    {
       if(a[i]<min)
	   {
    		min = a[i];
	   }
      
    }
  	  minSecond = 9999;   // important

   	  // Find second minimum
    for(i = 0; i < size; i++)
    {
          if(a[i] > min && a[i] < minSecond)
        {
            minSecond = a[i];
        }
    }

   	printf("Minimum is = %d\n",min);
    printf("Second Minimum is = %d",minSecond);



   
}
