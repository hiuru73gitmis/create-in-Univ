#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void hanoi(int from, int to, int n)
{
	int vacant;
	
	vacant = 3-from-to; // �� vacant �̒l�����߂�
	
	if (n == 1){ // �~�Ղ� 1 ���̂Ƃ��͎���
		printf("%d --> %d\n", from, to);
	}else{
		hanoi(from, vacant, n-1); // from ���� vacant �� n 1 ���ړ�
		hanoi(from, to, 1); // from ���� to �� 1 ���ړ�
		hanoi(vacant, to, n-1); // vacant ���� to �� n 1 ���ړ�
	}
}

int main(void){
	int from=0, to=1, n=4;
	
	hanoi(from,to,n);
	
	return 0;
}