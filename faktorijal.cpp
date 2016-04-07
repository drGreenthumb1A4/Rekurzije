#include <cstdio>
#include <cstdlib>
int faktorijal(int);
int main(){
	int x;
	scanf("%d", &x);
	int rez= faktorijal(x);
	printf("%d", rez);
	return EXIT_SUCCESS;
}
int faktorijal(int y){
	if(y==1) return 1;
	else return y*faktorijal(y-1); 
}