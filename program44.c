//using Array for grading point calculation sum and average
#include<stdio.h>
int main()
{
    int grading[] = {20,30,40,50,60};
    printf("%d", grading[4]);

    int numbers[5],
    sum = 0; // numbers[0], numbers[1], numbers[2]. numbers[3], numbers[4]
    numbers[0] = 10;
    numbers[1] = 5;
    numbers[2] = 67;
    numbers[3] = 55;
    numbers[4] = 37;
    sum = numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4];
    printf("sum = %d\n", sum);

    // find the average and print the average
    float average = (float)sum /5;
    printf("average = %.2f\n", average);

    return 0;
}
