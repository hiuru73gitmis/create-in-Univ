#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	int A,B,C,X;
	int i,j,m,count=0,sum;
	
	scanf("%d\n",&A);
	scanf("%d\n",&B);
	scanf("%d\n",&C);
	scanf("%d",&X);
	
	for(i=0;i<=A;i++){
		for(j=0;j<=B;j++){
			for(m=0;m<=C;m++){
				sum = 500*i + 100*j + 50*m;
				if(sum == X){
					count++;
				}
			}
		}
	}
	
	printf("%d\n",count);
	
	return 0;
}
