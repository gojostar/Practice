#include <stdio.h>
#include <string.h>

// Define a constant for the maximum number of courses
#define MAX_COURSES 5

// Define a structure to store student details
struct student {
    int id; // Student ID
    char name[20]; // Student name
    char courses[MAX_COURSES][20]; // Courses registered by the student
    int num_courses; // Number of courses registered by the student
};

// Function to find and print the names of all students registered in a particular course
void find_students_by_course(struct student s[], int n, char course[]) {
    printf("The students registered in the course %s are:\n", course);
    int found = 0; // Flag to indicate if any student is found
    for (int i = 0; i < n; i++) { // Loop through the array of structures
        for (int j = 0; j < s[i].num_courses; j++) { // Loop through the courses of each student
            if (strcmp(s[i].courses[j], course) == 0) { // Compare the course name with the input
                printf("%s\n", s[i].name); // Print the student name if a match is found
                found = 1; // Set the flag to 1
                break; // Break the inner loop
            }
        }
    }
    if (found == 0) { // If no student is found, print a message
        printf("No student is registered in this course.\n");
    }
}

// Function to swap two structures
void swap(struct student *a, struct student *b) {
    struct student temp = *a; // Create a temporary structure to store one structure
    *a = *b; // Copy the other structure to the first one
    *b = temp; // Copy the temporary structure to the second one
}

// Function to sort an array of structures based on the name field using Selection Sort algorithm
void sort_by_name(struct student s[], int n) {
    for (int i = 0; i < n - 1; i++) { // Loop through the array from 0 to n-2
        int min_index = i; // Assume that the current element is the minimum
        for (int j = i + 1; j < n; j++) { // Loop through the array from i+1 to n-1
            if (strcmp(s[j].name, s[min_index].name) < 0) { // Compare the names of the structures
                min_index = j; // Update the minimum index if a smaller name is found
            }
        }
        if (min_index != i) { // If the minimum index is not equal to i, swap the structures at i and min_index
            swap(&s[i], &s[min_index]);
        }
    }
}

// Function to print all student names in alphabetical order
void print_students_in_order(struct student s[], int n) {
    printf("The students in alphabetical order are:\n");
    for (int i = 0; i < n; i++) { // Loop through the sorted array of structures
        printf("%s\n", s[i].name); // Print the name of each student
    }
}

// Function to find and print the details of a student using their ID
void find_student_by_id(struct student s[], int n, int id) {
    int found = 0; // Flag to indicate if the student is found
    for (int i = 0; i < n; i++) { // Loop through the array of structures
        if (s[i].id == id) { // Compare the ID of each structure with the input
            printf("%s\n", s[i].name); // Print the name of the student if a match is found
            for (int j = 0; j < s[i].num_courses; j++) { // Loop through the courses of the student
                printf("%s\n", s[i].courses[j]); // Print each course name
            }
            found = 1; // Set the flag to 1
            break; // Break the loop
        }
    }
    if (found == 0) { // If no student is found, print a message
        printf("No student with this ID exists.\n");
    }
}

// Main function to test the program
int main() {
    int n; // Number of students

    printf("Enter the number of students:\n");
    scanf("%d", &n); // Read the number of students from user

    struct student s[n]; // Declare an array of structures with size n

    for (int i = 0; i < n; i++) { // Loop to read the details of each student
        printf("\nEnter Student ID: ");
        scanf("%d", &s[i].id); // Read the student ID
        printf("Enter Name of the Student: ");
        scanf("%s", s[i].name); // Read the student name
        printf("Enter the number of courses registered for student %s (up to 5): ", s[i].name);
        scanf("%d", &s[i].num_courses); // Read the number of courses
        printf("Enter the courses registered for student %s:\n", s[i].name);
        for (int j = 0; j < s[i].num_courses; j++) { // Loop to read the courses of each student
            scanf("%s", s[i].courses[j]); // Read each course name
        }
    }

    int choice; // Variable to store the user's choice
    char course[20]; // Variable to store the course name to search
    int id; // Variable to store the student ID to search

    do { // Do-while loop to display the menu and perform the operations until the user chooses to exit
        printf("\nMENU\n");
        printf("1. Find students registered in a course\n");
        printf("2. Print students in alphabetical order\n");
        printf("3. Find a student by ID\n");
        printf("4. Exit\n");

        scanf("%d", &choice); // Read the user's choice

        switch (choice) { // Switch case to perform different operations based on the user's choice
            case 1: // Case 1: Find students registered in a course
                printf("Enter a course to search: ");
                scanf("%s", course); // Read the course name from user
                find_students_by_course(s, n, course); // Call the function to find and print the students registered in that course
                break;
            case 2: // Case 2: Print students in alphabetical order
                sort_by_name(s, n); // Call the function to sort the array of structures based on the name field
                print_students_in_order(s, n); // Call the function to print all student names in alphabetical order
                break;
            case 3: // Case 3: Find a student by ID
                printf("Enter a Student ID to search: ");
                scanf("%d", &id); // Read the student ID from user
                find_student_by_id(s, n, id); // Call the function to find and print the details of a student using their ID
                break;
            case 4: // Case 4: Exit the program
                printf("Exiting...\n");
                break;
            default: // Default case: Invalid input
                printf("Invalid input.\n");
                break;
        }
    } while (choice != 4); // Repeat until the user chooses to exit

    return 0; // Return 0 to indicate successful termination of the program
}
