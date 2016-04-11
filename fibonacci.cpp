#include <cstdio>
#include <cstdlib>
int fibonacci(int);
int main(){
	int x;
	scanf("%d", &x);
	int rez= fibonacci(x);
	printf("%d", rez);
	return EXIT_SUCCESS;
}
int fibonacci(int y){
	if(y==0) return 0;
	if(y==1) return 1;
	else return fibonacci(y-1)+fibonacci(y-2); 
}
