#include<stdio.h>

	main(){
		int x, *p1, **p2;
		x = 100;
		p1 = &x;	/* address of x */
		p2 = &p1;	/* address of p1 */
		printf("%d", **p2);
	}
	
	
