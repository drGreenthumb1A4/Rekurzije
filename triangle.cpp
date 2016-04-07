#include <cstdio>
#include <cstdlib>
int triangle(int);
int main(){
	int x;
	scanf("%d", &x);
	int rez= triangle(x);
	printf("%d", rez);
	return EXIT_SUCCESS;
}
int triangle(int y){
	if(y==0) return 0;
	else return y+ triangle(y-1); 
}