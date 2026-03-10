//Find the index of largest no
#include<stdio.h>
int main(){
	int index, a[100],i,size,max;
	
	printf("Enter the size of the array:");
	scanf("%d",&size);
	
	printf("Enter the no according to your given size:");
	for(i=0;i<size;i++){
			scanf("%d",&a[i]);
	}
	printf("The max index is:");
	max = a[0];
	index = 0;
	for(i=1;i<size;i++){
		if(a[i]>max){
			max = a[i];
			index = i;
		}
		
	}
	printf("The largest index no is: %d",index);
}
