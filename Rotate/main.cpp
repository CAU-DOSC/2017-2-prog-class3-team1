#include "Rotate.h"

data gendata() {
	data x;
	//srand((unsigned)time(NULL));
	x.n = rand() % 1000 + 1;
	x.d = (rand() % (2*x.n) -x.n);

	x.str = (char*)malloc(x.n);
	for (int i = 0; i < x.n; i++) {
		x.str[i] = rand() % 24 + 65;
	}
	return x;
}

int main() {
	double time;
	data x = gendata();
	printf("STRLength\t ROTATEdistance\t T.trivial\t T.juggle\t T.bw\t\t T.reverse\n");
	printf("%d\t\t %d\t\t ",x.n, x.d);
	time = clock();
	trivialrotation(x.str, x.d, x.n);
	printf("%lf\t ", clock() - time);

	time = clock();
	juggling(x.str, x.n, x.d);
	printf("%lf\t ", clock() - time);

	time = clock();
	blockswap(x.str, x.n, x.d);
	printf("%lf\t ", clock() - time);

	time = clock();
	reverse(x.str, x.n, x.d);
	printf("%lf\n", clock() - time);

	return 0;
}