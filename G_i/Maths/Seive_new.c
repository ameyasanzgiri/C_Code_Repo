#include<stdio.h>
#include<math.h>

int main() {
  int n, i;
  printf("Enter the number\n");
  scanf("%d",&n);
  int array[n];
  array[0] = 0;
  array[1] = 0;
  for ( i = 2; i < n ; i++ ) {
	array[i] = i;
}
int sq = sqrt(n);
int k;
for ( i = 2; i <=sq; i++) {
	if ( array[i] ) {
		for ( k = i *i; k < n; k+=i) {
			array[k] = 0;
	}
}
}
int max_prime;
for ( i = 0 ; i < n; i++) {
	if (array[i]) 
		max_prime = array[i];
 }
printf("Max Prime is %d\n", max_prime);
return max_prime;
}
