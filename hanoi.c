#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void hanoi(int from, int to, int n)
{
	int vacant;
	
	vacant = 3-from-to; // 柱 vacant の値を求める
	
	if (n == 1){ // 円盤が 1 枚のときは自明
		printf("%d --> %d\n", from, to);
	}else{
		hanoi(from, vacant, n-1); // from から vacant へ n 1 枚移動
		hanoi(from, to, 1); // from から to へ 1 枚移動
		hanoi(vacant, to, n-1); // vacant から to へ n 1 枚移動
	}
}

int main(void){
	int from=0, to=1, n=4;
	
	hanoi(from,to,n);
	
	return 0;
}