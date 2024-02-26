#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	int S,s[4] = {0};
	int i,count=0;
	scanf("%d",&S);
	
	for(i=1; i<=3; i++){
		s[i] = S % 10;
		if(s[i] == 1){
			count++;
		}
		S = S / 10;
	}
	
	printf("%d\n",count);
	
	return 0;
}
