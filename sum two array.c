#include<stdio.h>
int main(){
	int i;
	int a[10];
	int b[10];
	int c[10];
	printf("enter ten number ");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	
	printf("enter ten number");
	for(i=0;i<10;i++)
		scanf("%d",&b[i]);
	
	printf("enter the third number");
	for(i=0;i<10;i++){
		
		c[i]= a[i]+b[i];
	}
	
	for(i=0;i<10;i++){
	
		printf("%d\n",c[i]);
	}		
	
}
