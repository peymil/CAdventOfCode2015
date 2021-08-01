#include <stdio.h>
#include <stdlib.h>
#include <float.h>

// int day1();

// void (*function[])() = {
//     day1

// };

void main(int8_t day)
{
    time_t start, end;
    time(&start);
    //function
    time(&end);
    float execution_time = end - start;
    printf("Execution Time of %s: %f", function, execution_time);
}