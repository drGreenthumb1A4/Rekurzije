#include <cstdio>
#include <cstdlib>
int bunnyEars2(int);
int main(){
	int x;
	scanf("%d", &x);
	int rez= bunnyEars2(x);
	printf("%d", rez);
	return EXIT_SUCCESS;
}
int bunnyEars2(int y){
	if(y==0) return 0;
	if(y%2==0) return 3 + bunnyEars2(y-1); // ako je paran onda je 3 inace je 2
	else return 2 + bunnyEars2(y-1); 
}
