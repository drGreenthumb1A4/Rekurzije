#include <cstdio>
#include <cstdlib>
int count8(int);
int main(){
	int x;
	scanf("%d", &x);
	int rez= count8(x);
	printf("%d", rez);
	return EXIT_SUCCESS;
}
int count8(int y){
	if(y==0) return 0;
	int z = y%10==8 ? 1 : 0; //ako je zadnja znamenka 8 onda je z = 1, inace je 0
	int a = y%100==88 ? 1: 0; // ako su zadnje 2 znamenke obje 8 onda je a = 1, inace je 0
	return z + a + count8(y/10); //zbroji z i a (a nikad nece biti 1 ako je z 0)
}
