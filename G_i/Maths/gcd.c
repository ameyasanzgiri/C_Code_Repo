#include<stdio.h>
#include<math.h>
int gcd( int a, int b) {
	if ( ! ( a > 1 ) && ( b > 1 ) ) 
		return 1;
	else {
		int x;
		x = (a > b) ? ( a % b) : (b % a );
		if (x >= 1 )
			x = (a > b) ? ( gcd (x,b) ) : ( gcd(x,a)) ;
		else
			return ( (a > b) ? b : a);
}
} 
	   
int main() {
	int a,b, gcd_a;
	printf("Enter the number\n");
	scanf("%d", &a);
	printf("Enter the number 2\n");
	scanf("%d", &b);
	gcd_a = gcd(a,b);
	printf("GCD is %d\n", gcd_a);
	return gcd_a;
}
