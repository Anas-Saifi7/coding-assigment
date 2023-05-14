#include<stdio.h>
int main(){
	int i,j;
	int r,c;
	printf("enter the row and column");
	scanf("%d %d",&r,&c);
	int arr[r][c];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&arr[i][j]);
		}
	}
//	printf("\n");
		for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
