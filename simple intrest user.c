#include<stdio.h>
void main(){
	float p,r,t,si;
	printf("enter the  principle money");
	scanf("%f",&p);
	
		printf("enter the  rate of intrest");
	scanf("%f",&r);
	
		printf("enter the  time");
	scanf("%f",&t);
	
	si = (p*r*t)/100;
	
	printf("si=%f",si);
	
	
}
