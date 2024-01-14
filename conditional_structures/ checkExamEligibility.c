#include <stdio.h>

// Function prototype declaration
int calculateAttendance(int classesattended, int classestotal);

int main() {
    // Variable declarations
    int classesattended, classestotal;

    // User input for the total number of classes
    printf("Enter total number of classes: \n");
    scanf("%d", &classestotal);

    // User input for the number of classes attended
    printf("Enter classes you attended: \n");
    scanf("%d", &classesattended);

    // Calling the function to calculate attendance and check eligibility
    calculateAttendance(classesattended, classestotal);

    // Return statement indicating successful execution
    return 0;
}

// Function definition to calculate attendance and check eligibility
int calculateAttendance(int classesattended, int classestotal) {
    // Variable declaration for attendance percentage
    int attendance;

    // Calculating attendance percentage
    attendance = (classesattended * 100) / classestotal;
    printf("Your attendance is: %d%%\n", attendance);

    // Checking eligibility based on attendance percentage
    if (attendance >= 80) {
        printf("You can sit in the exam.\n");
    } else {
        printf("You can't sit in the exam because your attendance is less than 80%%.\n");
    }

    // Return statement (not used in this example)
    return 0;
}
