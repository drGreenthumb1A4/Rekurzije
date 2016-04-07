#include <cstdio>
#include <cstdlib>
int bunnyEars(int);
int main(){
	int x;
	scanf("%d", &x);
	int rez= bunnyEars(x);
	printf("%d", rez);
	return EXIT_SUCCESS;
}
int bunnyEars(int y){
	if(y==0) return 0;
	else return 2 + bunnyEars(y-1); 
}