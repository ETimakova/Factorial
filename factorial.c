#include <stdio.h>
#include <math.h>


//pick long long unsigned int because it will allow the greatest value
long long unsigned int factorial(long long unsigned int n);

int main(){
	long long unsigned int num;
	//ask user for input (integer to find factorial of)
	printf("This is a handy dandy factorial calculator. A factorial is defined as an integer multiplied by every integer that comes before it." "\nPlease enter an integer you would like to calculate the factorial of:");
	//do not use scanf because it assumes that you will get correctly formated input.. so good if its from another program, but not user input
	//while loop to check validity of user input (checks for positive whole number)
	while (scanf("%llu",&num)<0)
		{
  			printf("Invalid input. Please enter an integer: ");
  			//asterisk tells scanf to read and ignore the value
  			scanf("%*s");
		}

	//scanf("%llu", &num);
	//prints answer to factorial equation based on user input
	printf("The factorial is: %llu \n", factorial(num));
	return 0;

}

//function finds factorial based on user input
long long unsigned int factorial(long long unsigned int n){
	if (n > 1)
		return n * factorial(n-1);
	//don't need part commented out below because already validated user input earlier in the code
	/*else if (n < 1 )
		printf("Error, you must input a positive integer.");*/
	//else must return n because want to stop the loop when n=1 otherwise it is no long a factorial, so must return n=1 to solve
	else 
		return n;
}	

//if you change everything back to int instead of long long unsigned int, it performs in else if, but now it doesn't 