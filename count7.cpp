#include <cstdio>
#include <cstdlib>
int count7(int);
int main(){
	int x;
	scanf("%d", &x);
	int rez= count7(x);
	printf("%d", rez);
	return EXIT_SUCCESS;
}
int count7(int y){
	if(y==0) return 0;
	int z = y%10==7 ? 1: 0;
	return z + count7(y/10); 
}