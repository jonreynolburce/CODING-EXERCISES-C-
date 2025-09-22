#include <stdio.h>

int main()
{
    int prelim_grade, midterm_grade, final_exam;
    float final_grade;

    printf("Enter Prelim grade:");
    scanf("%d", &prelim_grade);

    printf("Enter Midterm grade:");
    scanf("%d", &midterm_grade);

    printf("Enter Final Exam grade:");
    scanf("%d", &final_exam);

    prelim_grade = prelim_grade * 30 / 100;
    midterm_grade = midterm_grade * 30 / 100;
    final_exam = final_exam * 40 / 100;
    final_grade = prelim_grade + midterm_grade + final_exam;

    printf("Final Grade = %.2f", final_grade);
    if (final_grade > 75)
    {
        printf("\nRemarks: Passed");
    }
    else
    {
        printf("\nRemarks: Bawi Next Sem!!!!!!!!");
    }
}