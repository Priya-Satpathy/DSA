#include <stdio.h>
void main()
{
	int arr[100],i,size,large=0,temp=0,index;
	
	printf("Enter size of array: ");
	scanf("%d",&size);

    printf("Enter %d numbers:",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    large = arr[0];
    for(i=1;i<size;i++){
    	if(arr[i]>large){
    		
    		large = arr[i];  
			index=i;
			break;
			
    	}
		
    	
	}
	
	printf("The largest number index in array is %d",index);

}
