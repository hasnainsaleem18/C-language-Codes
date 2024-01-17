#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int Limit = 6;

int main()
{
    int n1, n2, res;
    int arr[1000];

    // cout << "\n *** Roll 2 Dices 100 times Each & Check the sums *** \n\n ";
    // cout << "\n ******* Check these out ********* \n\n ";

    for (int n = 0; n < 100; n++)
    {
        cout << "\n YOUR TURN No. = " << n + 1 << "\n";
        // roll the first dice
        cout << "\n Roll the first Dice ";
        rand();
        n1 = random(Limit);

        // roll the second dice
        cout << "\n Roll the sec dice :";
        randomize();
        n2 = random(Limit);

        // sum of the drawn result
        res = n1 + n2;

        // store the sum in an array
        arr[n] = res;
    }

    cout << "Now ,Guess the sum of the result of the rolling two dices~ "
        //  Array for Guess No.
        int g[100];
    for (n = 0; n < 100; n++)
    {
        cout << "\n Predict The Sum For Turn : " << n + 1;
        cout << " Enter your number ( between 2 - 12) :";
        cin >> g[n];
    }
    cout << " \n If the guess number and actual number matches You WON ";
    cout << "\n ***** TABLE *****\n";
    cout << "\n TURN \t SUM  \t GuessNo. \t RESULT?  \n";

    // Print the result in tabular format
    for (n = 0; n < 100; n++)
    {

        // if guess no is equal to the sum , then WON , else LOST
        if (g[n] == arr[n])
            cout << "\n " << n + 1 << "\t" << arr[n] << "\t" << g[n] << "\t"
                 << "WON by guessing";
        else
            cout << "\n " << n + 1 << "\t" << arr[n] << g[n] << "LOST by guessing";

        // print 15 to 20 records at a time

        if (n == 15 || n == 35 || n == 55 || n == 75)
        {
            cout << "\n Press any key to continue :";
            getch();
            clrscr();
        }
    }
    getch();
}
