#include<stdio.h>
void reverse(int arr[],int a,int b){
	int i=a,j=b;
	while(i<=j){
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
	return ;
}
int main(){
	int arr[7]={1,2,3,4,5,6,7};
	int n=7;
	int i;
	int k=5;
	k=k%n;
	reverse(arr,0,6);
	reverse(arr,0,2);
	reverse(arr,3,6);
    for( i=0;i<=6;i++){
    	printf("%d",arr[i]);
	}	
	return 0;
}
