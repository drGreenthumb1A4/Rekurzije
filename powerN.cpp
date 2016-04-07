#include <cstdio>
#include <cstdlib>
int powerN(int, int);
int main(){
	int base, ex;
	scanf("%d", &base, &ex);
	int rez= powerN(base, ex);
	printf("%d", rez);
	return EXIT_SUCCESS;
}
int powerN(int baza, int eksponent){
	if(w==0) return 1;
	return y*powerN(y, w-1); 
}