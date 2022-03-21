#include <stdio.h>


int soucet(cislo) {
	int suda = 0;
	for (int i = 0; i <= cislo; i += 2) {
		suda += i;
	}
	return suda;
}


int main()
{
	printf("suda %d\n", soucet(5));
}