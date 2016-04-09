#include <cstdio>
#include <cstdlib>
int najniz(int, int);
int main(){
	int x;
	scanf("%d", &x);
	int rez = najniz(x, 0);
	printf("%d", rez);
	return EXIT_SUCCESS;
}
int najniz(int broj, int niz){
	if(broj==0) return 0;
	int desno = broj%10==7? niz+1 : 0;
	int lijevo = najniz(broj/10, desno);
	return desno>lijevo? desno : lijevo;
}
