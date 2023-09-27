#include<stdio.h>

int main ()
{   printf("\nWelcome to the Average marks calculator !\n");
    printf("\nThis Program is made by Mohit Yadav.\n");
    int total_students;
    int total_subjects;
    int student_num = 1;
    printf("\nEnter total number of students: \n");
    scanf("%d", &total_students);
    printf("\nEnter total number of subjects: \n");
    scanf("%d", &total_subjects);

    while( student_num <= total_students)
    {
        printf("\nFor student no: %d \n", student_num);
        float avg;
        int sum = 0;
        int marks;
        int subject = 1;
        
        while (subject <= total_subjects)
        {
            printf("\nEnter marks for Subject %d: \n", subject);
            scanf("%d", &marks);
            sum += marks;
            subject++;
        }
        avg = sum / total_subjects;
        printf("\nAverage of student %d is %f\n", student_num, avg);
        student_num++;
    }
        printf("\nThanks for using Average Marks Calculator !\n");
        return 0;
}