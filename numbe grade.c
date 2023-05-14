#include<stdio.h>
int main(){
	int  marks ,sub1,sub2,sub3,sub4,sub5,grad,sum;
	float per;
	printf("enter your marks sub1");
	scanf("%d",&sub1);
	
		printf("enter your marks sub2");
	scanf("%d",&sub2);
	
		printf("enter your marks sub3");
	scanf("%d",&sub3);
	
		printf("enter your marks sub4");
	scanf("%d",&sub4);
	
		printf("enter your marks sub5");
	scanf("%d",&sub5);
	
	sum=sub1+sub2+sub3+sub4+sub5;
	printf("sum=%d",sum);
	
	per=(sum*100)/500;
   if(per>=90){
	printf("grade a");
}
    else if(per>=70){
	printf("grade b");
}
   else	if(per>=60){
	printf("grade c");
}
  else	if(per>=40){
	printf("grade d");
}
	else{
		printf ("fail");
	}
		
}
