#include<stdio.h>
int main (){
	int a[100],size,max,i;
	printf("enter size of array");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
		max=a[0];
	
	for(i=0;i<size;i++){
		
		if(a[i]>max){
			max=a[i];
		}
	}
	printf(" maximum number of array %d",max);
	return 0;
}
