#include <stdio.h>
#include <math.h>

int main(){
	int soNam;
	printf ("vui long nhap so nam muon kiem tra: ");
	scanf("%d",&soNam);
	if (soNam % 4 == 0 && soNam % 100 != 0){
		printf ("nam %d la nam nhuan", soNam);
	}else {
		printf ("nam %d khong phai nam nhuan", soNam);
	}
	return 0; 
} 
