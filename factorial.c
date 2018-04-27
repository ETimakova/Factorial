#include <stdio.h>
#include <stdlib.h>


//pick long long unsigned int because it will allow the greatest value
long long unsigned int factorial(long long unsigned int n);

int main(){
	char *input;
	int num;
	char str[60];
	
	//ask user for input (integer to find factorial of)
	printf("This is a handy dandy factorial calculator. A factorial is defined as an integer multiplied by every integer that comes before it. \nPlease enter an integer you would like to calculate the factorial of:");
	//do not use scanf because it assumes that you will get correctly formated input.. so good if its from another program, but not user input
		//converts user input into an integer
	input=fgets(str,10,stdin);
	num=atoi(str);
		printf("Calculating factorial for %d \n", num);
	/*Marshall said to add this part. It checks to see if the input was a positive number or a negative number and ask user for new input if neg.*/
	while (num<=0){
		printf ("Please enter a postive number.\n");
	}
	else {
	//prints answer to factorial equation based on user input
	printf("The factorial is: %llu \n", factorial(num));
    }
	return 0;

}

//function finds factorial based on user input
long long unsigned int factorial(long long unsigned int n){
	if (n > 1)
		return n * factorial(n-1);
	//else must return n because want to stop the loop when n=1 otherwise it is no long a factorial, so must return n=1 to solve
	else 
		return n;
}



