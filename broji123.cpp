#include <cstdio>
int broji123(int);
int main(){
	int x;
	scanf("%d", &x);
	int rez = broji123(x);
	printf("%d", rez);
	return 0;
}
int broji123(int y){
	if(y==0) return 0;
	if(y%1000==123 || y%1000==121) return 1 + broji123(y/10);
	return broji123(y/10);
}
