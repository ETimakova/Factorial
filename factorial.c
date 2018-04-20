#include <stdio.h>
#include <math.h>

long long unsigned int factorial(long long unsigned int n);

long long unsigned int main(){
	long long unsigned int num;
	printf("This is a handy dandy factorial calculator. A factorial is defined as an integer multiplied by every integer that comes before it." "\nPlease enter an integer you would like to calculate the factorial of:");
	scanf("%llu", &num);
	printf("factorial is: %llu", factorial(num));
	return 0;

}

long long unsigned int factorial(long long unsigned int n){
	if (n > 1)
		return n * factorial(n-1);
	else if (n < 1)
		printf("Error, you must input a positive integer.");
	else 
		return n;
}	