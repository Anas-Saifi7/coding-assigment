#include<stdio.h>
int main(){
	int maths=50;
	int evs=50;
	int fme=50;
	int che=50;
	int ece=50;
	printf("enter the five subjects");
//	scanf("%d, %d, %d, %d, %d",&maths,&evs,&fme,&che,&ece);
	int sum =maths + evs;
	sum+=fme;
	sum+=che;
	sum+=ece;
	printf("%d ",sum);
	int per= (sum*100)/500;
	printf("%d",per);
	return 0;
}
