#include <cstdio>
#include <cstdlib>
int count8(int);
int main(){
	int x;
	scanf("%d", &x);
	int rez= count8(x);
	printf("%d", rez);
	return EXIT_SUCCESS;
}
int count8(int y){
	if(y==0) return 0;
	int z = y%10==8 ? 1 : 0;
	int a = y%100==88 ? 1: 0;
	return z + a + count8(y/10); 
}