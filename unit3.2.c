#include<stdio.h>
int main(){
    int marks[5];
    int total = 0;
    float average;


    printf("Enter marks of 5 subjects:\n");
    for(int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    //to calculate average
    average = total / 5.0;
    printf("\n---stdents results---\n");
    printf("Total Marks: %d\n", total);

    //%.sf limits the decimal to 2 places only
    printf("Average Marks: %.2f\n", average);
    return 0;
}