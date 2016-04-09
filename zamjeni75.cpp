#include <cstdio>
#include <cstdlib>
int zamjeni75(int, int);
int main(){
	int x;
	scanf("%d", &x);
	int rez = zamjeni75(x, 1);
	printf("%d", rez);
	return EXIT_SUCCESS;
}
int zamjeni75(int broj, int znam){
	if(broj==0) return 0;
	return ((broj%10==7)? 5*znam: (broj%10)*znam) + zamjeni75(broj/10, znam*10); 
}
