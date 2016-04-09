#include <cstdio>
#include <cstdlib>
int powerN(int, int);
int main(){
	int base, ex;
	scanf("%d%d", &base, &ex);
	int rez= powerN(base, ex);
	printf("%d", rez);
	return EXIT_SUCCESS;
}
int powerN(int baza, int eksponent){
	if(eksponent==0) return 1;
	return baza*powerN(baza, eksponent-1); 
}
