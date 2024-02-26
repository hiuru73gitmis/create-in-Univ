#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int a[], int n){
	int i,j,tmp;
	
	for(i=0; i <= n-2; i++){
		for(j=0; j <= n-2-i; j++){
			if(a[j] > a[j+1]){
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
	
	return;
}

int main (void){
	int a[4] = {5, 8, 4, 2};
	int n;
	n = sizeof(a) / 4;
	int i;
	
	bubble_sort(a, n);
	
	for(i=0; i < n; i++){
		printf("%d ",a[i]);
	}
	
	return 0;
}
