#include<stdio.h>
int main(){
	int x;
	printf("enter any number");
	scanf("%d",&x);
	if(x%400==0 ||x%4==0 &&x%100!=0){
		printf("year is leapyear");
	}
	else{
		printf("year is not leapyear");
	}
	return 0;
}
