#include <cstdio>
#include <cstdlib>
int gcd(int, int);
int main(){
	int x, y;
	scanf("%d%d", &x, &y);
	int rez = gcd(x, y);
	printf("%d", rez);
	return EXIT_SUCCESS;
}
//najveci djelitelj
int gcd(int a, int b){
	if(b==0) return a;
	else return gcd(b, a%b);
}
