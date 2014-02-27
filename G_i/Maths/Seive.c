#include<stdio.h>
#include<math.h>
int main(){
int number_till;
printf("Enter number till which we want prime\n");
scanf("%d",&number_till);
int array[number_till];
int i;
array[0] = 0;
array[1] = 0;
//Fill array with numbers
for( i = 2; i < number_till; i++) {
 array[i] = i;
}
int root; int k;
root = sqrt(number_till);
for ( i = 2; i <= root; i++ ) {
	if ( array[i]  ) {
		for ( k = i * i; k <= number_till; k+=i ) {
			array[k] = 0;
		}
	}
}
int max_prime;
for ( i = 0; i < number_till; i++ ) {
	if(array[i] != 0) 
		max_prime = array[i];
}
printf("Max Prime is %d\n", max_prime);
return max_prime;
}
