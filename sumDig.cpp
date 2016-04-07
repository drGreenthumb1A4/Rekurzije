#include <cstdio>
#include <cstdlib>
int sumDig(int);
int main(){
	int x;
	scanf("%d", &x);
	int rez= sumDig(x);
	printf("%d", rez);
	return EXIT_SUCCESS;
}
int sumDig(int y){
	if(y==0) return 0;
	else return y%10+ sumDig(y/10); 
}