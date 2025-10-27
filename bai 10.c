#include <stdio.h>
#include <math.h>

int main(){
	int a;
	int b;
	int c;
	int temp;
	
	printf ("nhap vao 3 so nguyen: ");
	scanf ("%d", &a);
	scanf ("%d", &b);
	scanf ("%d", &c);
	
	if (a > b){
	    temp = a;
		a = b;
		b = temp;
	}
	if (a > c){
		temp = a;
		a = c;
		c = temp; 
	}
	if (b > c){
		temp = b;
		b = c;
		c = temp;
	}
	
	printf ("so theo thu tu tang dan %d %d %d \n",a ,b, c);
	
	return 0;
}
