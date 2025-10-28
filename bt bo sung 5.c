#include <stdio.h>
#include <math.h>

int main(){
	int a;
	int b;
	int c;
	
	printf ("nhap so thu 1: ");
	scanf ("%d",&a);
	printf ("nhap so thu 2: ");
	scanf ("%d",&b);
	printf ("nhap so thu 3: ");
	scanf ("%d",&c);
	
	if (a < c && b > c && c > a){
		printf ("so thu 3 thuoc trong khoang");
	}else {
		printf ("so thu 3 khong thuoc trong khoang");
	}
	
	return 0;
} 
