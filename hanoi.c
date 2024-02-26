#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void hanoi(int from, int to, int n)
{
	int vacant;
	
	vacant = 3-from-to; // ’Œ vacant ‚Ì’l‚ð‹‚ß‚é
	
	if (n == 1){ // ‰~”Õ‚ª 1 –‡‚Ì‚Æ‚«‚ÍŽ©–¾
		printf("%d --> %d\n", from, to);
	}else{
		hanoi(from, vacant, n-1); // from ‚©‚ç vacant ‚Ö n 1 –‡ˆÚ“®
		hanoi(from, to, 1); // from ‚©‚ç to ‚Ö 1 –‡ˆÚ“®
		hanoi(vacant, to, n-1); // vacant ‚©‚ç to ‚Ö n 1 –‡ˆÚ“®
	}
}

int main(void){
	int from=0, to=1, n=4;
	
	hanoi(from,to,n);
	
	return 0;
}