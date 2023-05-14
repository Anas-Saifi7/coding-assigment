#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c,large;
	printf("enter three number");
	scanf("%d",&a);
     scanf("%d",&b);
      scanf("%d",&c);
      large=a;
      if(b>large){
      	large =b;
	  }
	  if(c>large){
	  	large =c;
	  }
	  printf("\n largest number =%d",large);
      return 0;
  }
