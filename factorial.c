#include<stdio.h>
int main(){
	int i;
	int no,fact =1;
printf("enter a no\n")	;
scanf("%d",&no);
		for(i=no;i>=1;i--){
		fact=fact*i;	
	}
	printf("fact is %d",fact);
	

return 0;
}

