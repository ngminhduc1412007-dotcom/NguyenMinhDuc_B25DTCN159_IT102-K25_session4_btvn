#include <stdio.h>
#include <math.h>

int main(){
	int number;
	scanf("%d",&number);
	if (number % 3 == 0 && number % 5 ==0){
		printf ("so chia het cho 3 va 5");
	}else{
		printf ("so khong chia het cho 3 va 5");
	}
	return 0;
}
