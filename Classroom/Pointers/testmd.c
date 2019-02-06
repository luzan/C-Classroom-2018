#include<stdio.h>
int main(){
	int x[3][3] = {{1,2,30},{5,6,9},{4,7,8}};
	int i,j;
	int *p;
	p = &x[0][0];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ", *(p+i*3+j));
		}
	}
	
	return 0;
}
