#include <stdio.h>

int Razlika(int x, int y) {
    if (x > y)
        return x - y;
    else
        return y - x;
}

int main() {
    int a = 5;
	int b = 8;
	int c;

	c = Razlika(a,b);
	
	printf("Rezultat je: %d \n", c);
	
	return 0;
}
