#include<time.h>
#include<stdlib.h>
#include<stdio.h>

int compute_sum()   //function to return the sum of 2 randomly generated numbers by machine.
{
	int sum=0;
	int random;
	srand(time(0));
	random = rand() % 11;
	sum = sum + random;
	srand(time(0));
	random = rand() % 11;
	sum = sum + random;
	return sum;
}


int get_rounds()     //function to receive the no. of rounds from the user.
{ 
	int r;
	printf("Enter Number Of Rounds To Play: ");
	scanf("%d", &r);
	return r;
}

int computer_guess()    //function to record a guess of sum of 2 numbers by the machine.
{
	int random;
	srand(time(0));
	random = 3 + (rand() % 20);
	return random;
}

int player_guess()     //function to record the guess of sum of 2 numbers  by the user.
{
	int n;
	printf("Enter A guess for Sum: "); 
	scanf("%d", &n);
	return n;
}

int player_capital(int a,int b,int c)  //function storing the current balance of user.
{
	if (a==b)
	{
		c = c + a;
		return c;
	}
	else
	{
		c = c - 10;
		return c;
	}
	
}

int computer_capital(int a, int b, int d)  //function storing the current balance of the machine.
{
	if (a == b)
	{
		d = d + a;
		return d;
	}
	else
	{
		d = d - 10;
		return d;
	}
}

int play(int a, int b)   //function comparing the guess of the user and sum by machine .
{
	if (a>b)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}



int main()
{
	int sum;
	int r;  //noOfRounds
	int n; //playersGuess
	int x; //machineGuess
	int playerCapital,ComputerCapital;
	
	
	sum = compute_sum();   //function call
	r = get_rounds();       //function call

	for (int i = 0; i < r; i++)   //loop till the given number of rounds by user are achieved.
	{
		playerCapital = r;
	
		n = player_guess();     //function call
		playerCapital = player_capital(n, sum, playerCapital);   //function call

		x = computer_guess();      //function call
		ComputerCapital = computer_capital(x, sum, ComputerCapital);    //function call
		
	}
	printf("Player Capital: %d \n", playerCapital);
	printf("Computer Capital: %d \n", ComputerCapital);
	int ans;
	ans = play(playerCapital, ComputerCapital);   //function call
	if (ans == 0)     //final decision who wins  using the comaprison of player guess and machine's generated sum.
	{
		printf("Computer Winnsss!!\n");
	}
	else if (ans == 1)
	{
		printf("Player Winnsss!!\n");
	}
	
	return 0;
}
