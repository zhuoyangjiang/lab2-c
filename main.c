// Author: zhuoyangjiang zfj5038@psu.edu
// Collaborator:
// Collaborator:
// Collaborator:
// Section: 7
// Breakout: 
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main()
{
    double grade;
    char str[10];
    printf("Enter your CMPSC 131 grade: ");
    scanf("%s", str);
    printf("%s\n" , str);
    grade = atof(str);
    if(grade >= 93.0)
        printf("Your letter grade for CMPSC 131 is A.\n");
    else if(grade >= 90.0)
        printf("Your letter grade for CMPSC 131 is A-.\n");
    else if(grade >= 87.0)
        printf("Your letter grade for CMPSC 131 is B+.\n");
    else if(grade >= 83.0)
        printf("Your letter grade for CMPSC 131 is B.\n");
    else if(grade >= 80.0)
        printf("Your letter grade for CMPSC 131 is B-.\n");
    else if(grade >= 77.0)
        printf("Your letter grade for CMPSC 131 is C+.\n");
    else if(grade >= 70.0)
        printf("Your letter grade for CMPSC 131 is C.\n");
    else if(grade >= 60.0)
        printf("Your letter grade for CMPSC 131 is D.\n");
    else 
        printf("Your letter grade for CMPSC 131 is F.\n");
    return 0;
}
