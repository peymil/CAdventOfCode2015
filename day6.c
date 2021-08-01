#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <string.h>

// struct node
// {
//     char command[];
//     char number_plate[7];
//     char destination;
// } Car;
#define cmd1 "turn off"
void main()
{
    FILE *file;
    char cmd[10];
    int16_t coord1_x;
    int16_t coord1_y;
    int16_t coord2_x;
    int16_t coord2_y;
    file = fopen("input/day6.txt", "r");
    while (fscanf(file, "%[^0-9] %hd,%hd through %hd,%hd", &cmd, &coord1_x, &coord1_y, &coord2_x, &coord2_y) == 5)
    {
        printf("%d %s %d\n", strlen(cmd), cmd, strncmp(cmd, cmd1, 8));
        if (strncmp(cmd, "turn on", 9) == 0)
        {
            printf("%s %d %d %d %d\n", cmd, coord1_x, coord1_y, coord2_x, coord2_y);
        }
        else if (strncmp(cmd, "turn off", 9) == 0)
        {
            printf("%s %d %d %d %d\n", cmd, coord1_x, coord1_y, coord2_x, coord2_y);
        }
        else if (strncmp(cmd, "toggle", 6) == 0)
        {
            printf("%s %d %d %d %d\n", cmd, coord1_x, coord1_y, coord2_x, coord2_y);
        }
    }
}