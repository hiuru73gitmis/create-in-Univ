#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	int i,N,count=0;
	int A[200];
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	
	for(;;count++){
		for(i=0;i<N;i++){
			if((A[i] % 2) == 0){
				A[i] /= 2;
			}else{
				printf("%d",count);
				return 0;
			}
		}
	}
	
	return 0;
}
