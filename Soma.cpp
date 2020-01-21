#include <stdio.h>
int main(){
	int x, y;
	y = 10;
	printf("Man digita um numero aew:");
	scanf("d%", &x);
	if (x<10){
	 x = x + y;
	}
	else{
	x = x - y;
	}
	printf("teu resultado eh esse men:%d");
	return 0;
}
