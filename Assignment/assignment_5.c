#include <stdio.h>

int main() {
    // To calculate the percentage of marks obtained by a student in 5 subjects and student 
    // is considered pass if he scores 40 marks or more in each subject.
    // to assign grades to students based on their percentage as follows:
    // aggregate percentage >= 75% - Distinction
    // aggregate percentage >= 60% and < 75% - First division
    // aggregate percentage >= 50% and < 60% - Second division
    // aggregate percentage >= 40% and < 50% - Third division
    int marks[5], i;
    float total = 0, percentage;
    printf("Enter marks obtained in 5 subjects: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];

        if(marks[i] < 40) {
            printf("Student is Fail\n");
            return 0;
        }
}
    percentage = (total / 500.0) * 100;
    printf("Total marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    if(percentage >= 75) {
        printf("Grade: Distinction\n");
    } else if(percentage >= 60) {
        printf("Grade: First Division\n");
    } else if(percentage >= 50) {
        printf("Grade: Second Division\n");
    } else if(percentage >= 40) {
        printf("Grade: Third Division\n");
    } else {
        printf("Student is Fail\n");
    }