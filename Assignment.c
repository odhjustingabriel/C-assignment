/*Program to calculate total scores and average of 10 subjects*/

#include <stdio.h>

int main()
{
    int i;
    float score, total_score = 0, average_score;

    // loop through 10 subjects and prompt user to enter score for each
    for (i = 1; i <= 10; i++)
    {
        printf("Enter score for subject %d: ", i);
        scanf("%f", &score);
        total_score += score; // add each score to the total
    }

    // calculate average score
    average_score = total_score / 10.0;

    // print results
    printf("\nTotal score is: %.2f\n", total_score);
    printf("Average score is: %.2f\n", average_score);

    return 0;
}
