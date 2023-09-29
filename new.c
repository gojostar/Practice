#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_COURSES 5

struct student
{
    int id;
    char name[50];
    char courses[MAX_COURSES][20];
    int numCourses;
};

int main()
{
    int n, i, j, in, sid, found = 0, min_idx;
    char course[20], name[50];
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student st[MAX_STUDENTS], temp;

    // TODO: Read details of the Student into the corresponding Student variables (using for loop)
for (i = 0; i < n; i++)
{
    printf("Enter Student ID: ");
    //Write corresponding scan statement here
    scanf("%d", &st[i].id); // Scan the student ID and store it in the id field of the structure
    printf("Enter Name of the Student: ");
    //Write corresponding scan statement here
    scanf("%s", st[i].name); // Scan the student name and store it in the name field of the structure
    printf("Enter the number of courses registered for student %s (up to %d): ", st[i].name, MAX_COURSES);
    //Write corresponding scan statement here
    scanf("%d", &st[i].numCourses); // Scan the number of courses registered by the student and store it in the numCourses field of the structure
    printf("Enter the courses registered for student %s:\n", st[i].name);
    //Write corresponding scan statement here [NOTE that a student might be registered to multiple courses, so accomodate that also here]
    for (j = 0; j < st[i].numCourses; j++) {
      scanf("%s", st[i].courses[j]); // Scan each course name and store it in the courses field of the structure
    }
}

while (1)
{
    printf("\nMENU\n1. Find students registered in a course\n2. Print students in alphabetical order\n3. Find a student by ID\n4. Exit\n");
    scanf("%d", &in);

    switch (in)
    {
    case 1:
        printf("Enter a course to search: ");
        scanf("%s", course);
        printf("The students registered in the course %s are:\n", course);
        // Write a loop here to check each student's course and print the student's name if the course matches.
        for(int i = 0; i < n; i++) {
            // Check each student's course and print the student's name if the course matches. 
            // Print only student names (each on a new line).
            for (j = 0; j < st[i].numCourses; j++) {
              if (strcmp(course, st[i].courses[j]) == 0) { // Compare the course name with each course registered by the student
                printf("%s\n", st[i].name); // Print the student name if there is a match
                break; // Break out of the inner loop to avoid duplicates
              }
            }
        }
        break;

    case 2:
        // Write sorting code here.
        for (i = 0; i < n - 1; i++) { // Loop through the array of structures from 0 to n - 2
          min_idx = i; // Initialize the index of the minimum element to i
          for (j = i + 1; j < n; j++) { // Loop through the array of structures from i + 1 to n - 1
            if (strcmp(st[j].name, st[min_idx].name) < 0) { // Compare the name field of the current element with the name field of the minimum element
              min_idx = j; // Update the index of the minimum element to j if the current element is smaller than the minimum element
            }
          }
          if (i != min_idx) { // Swap the elements at i and min_idx if they are different
            temp = st[i];
            st[i] = st[min_idx];
            st[min_idx] = temp;
          }
        }
        printf("The students in alphabetical order are:\n");
        // Write a loop here to print all student's name.
        // Print only student names (each on a new line).
        for (i = 0; i < n; i++) {
          printf("%s\n", st[i].name); // Print each student name after sorting
        }
        break;

    case 3:
        printf("Enter a Student ID to search: ");
        scanf("%d", &sid);
        found = 0;
        // Write a loop here to find and print the student's information based on the entered ID.
        // On the first line, print the student name.
        // After that, print each course name on a seperate line, with the format printf("%s\n", course_name)
        // (replace course_name with the respective variable in your program).
        for (i = 0; i < n; i++) {
          if (sid == st[i].id) { // Compare the student ID with the id field of each structure
            printf("%s\n", st[i].name); // Print the student name if there is a match
            for (j = 0; j < st[i].numCourses; j++) {
              printf("%s\n", st[i].courses[j]); // Print each course name registered by the student
            }
            found = 1; // Set the found flag to 1
            break; // Break out of the loop
          }
        }
        if (!found) { // If the found flag is 0, print a message indicating that no student with that ID is found
          printf("No student with this ID\n");
        }
        break;

    case 4:
        printf("Exiting...\n");
        return 0;

    default:
        printf("Invalid input\n");
        break;
    }
}
}
