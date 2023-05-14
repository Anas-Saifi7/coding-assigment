#include<stdio.h>
int main(){
	int marks,sum,s1,s2,s3,s4,s5;
	float per;
	printf("enter your s1 marks");
	scanf("%d",&s1);
	
		printf("enter your s2 marks");
	scanf("%d",&s2);
	
		printf("enter your s3 marks");
	scanf("%d",&s3);
	
		printf("enter your s4 marks");
	scanf("%d",&s4);
	
		printf("enter your s5 marks");
	scanf("%d",&s5);
	
	sum=s1+s2+s3+s4+s5;
	printf("sum=%d",sum);
         
    per=(sum*100)/500;
    printf("per=%f",per);
}
