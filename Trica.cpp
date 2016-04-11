#include <cstdio>
int brojac(int);
int ponavljac(int);
void ponavljacPrintf(int, int);
int array[11]={0};
int x;
int main(){
	scanf("%d", &x);
	int broj = ponavljac(1);
	ponavljacPrintf(broj, 1);
	return 0;
}
int brojac(int b){
	if(x==0) return 0;
	if(x%10==3){
	x=x/10;
	return b;	
	}
	x=x/10;
	return brojac(b+1);
}
int ponavljac(int niz){
	if(x==0) return niz;
	array[niz] = brojac(array[niz-1]+1);
	return ponavljac(niz+1);
}
void ponavljacPrintf(int c, int d){
	if(c!=d){ 
	if(array[d]!=0) printf("%d", array[d]);
	ponavljacPrintf(c, d+1);
	}
}
