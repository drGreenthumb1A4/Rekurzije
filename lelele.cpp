#include <cstdio>
int ubaci0(int, int, int);
int main(){
	int a;
	scanf("%d", &a);
	int rez = ubaci0(a, 1, -1);
	printf("%d", rez);
	return 0;
}
int ubaci0(int x, int pot, int zadnja){
	if(x==0) return 0;
	if(x%10==zadnja) return x%10*10*pot + ubaci0(x/10, pot*100, x%10);
	// moramo potenciju pomnozit sa sto da se ne bi preklopilo sa sljedecim brojem
	return x%10*pot + ubaci0(x/10, pot*10, x%10);
}
