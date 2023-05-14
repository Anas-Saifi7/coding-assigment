#include<stdio.h>
int main(){
	int x,y,z;
	printf("enter the value of two number");
	scanf("%d %d",&x,&y);
	z=x;
	x=y;
	y=z;
	printf("x=%d,y=%d ,z=%d",x,y);
	return 0;
	
}
