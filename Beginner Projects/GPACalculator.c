#include <stdio.h>
#include <string.h>

int main()
{

    int subjects;
    char grade[30];
    float credit;
    float sum = 0.0;
    float GPA;
    float CH = 0.0;

    printf("Enter the number of SUBJECTS: ");
    scanf("%d", &subjects);

    // for loop for subjects

    for (int i = 1; i < subjects + 1; i++)
    {

        printf("Please enter your grade in subject (%d): ", i);
        scanf("%s", grade);

        printf("Please enter the Credit Hours of subject (%d): ", i);
        scanf("%f", &credit);

        // taking grade and credit hour from user

        // then calculating the grade and doing sum

        if (strcmp(grade, "A") == 0)
        {
            sum = 4.0 * (float)credit + sum;
        }
        else if (strcmp(grade, "A-") == 0)
        {
            sum = (float)credit * 3.67 + sum;
        }
        else if (strcmp(grade, "B+") == 0)
        {
            sum = (float)credit * 3.33 + sum;
        }
        else if (strcmp(grade, "B") == 0)
        {
            sum = (float)(credit) * 3.0 + sum;
        }
        else if (strcmp(grade, "B-") == 0)
        {
            sum = 2.67 * (float)credit + sum;
        }
        else if (strcmp(grade, "C+") == 0)
        {
            sum = 2.33 * (float)credit + sum;
        }
        else if (strcmp(grade, "C") == 0)
        {
            sum = 2.0 * (float)credit + sum;
        }
        else if (strcmp(grade, "C-") == 0)
        {
            sum = 1.67 * (float)credit + sum;
        }
        else if (strcmp(grade, "D+") == 0)
        {
            sum = 1.33 * (float)credit + sum;
        }
        else if (strcmp(grade, "D") == 0)
        {
            sum = 1.0 * (float)credit + sum;
        }
        else if (strcmp(grade, "F") == 0)
        {
            sum = 0 * (float)credit + sum;
        }
        else
            printf("invalid grade\n");

        CH = CH + (float)credit;
    }
    // calculating gpa by dividing sum to total credit hours

    GPA = sum / CH;
    printf("Your GPA is: %.2f\n", GPA);
    return 0;
}
