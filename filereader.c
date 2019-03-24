#include "data.h"

void read_data(char **data)
{
    *data = malloc(sizeof(char)*1000);
    FILE *fp = fopen("CPU_BURST.txt", "r");
    if (fp == NULL)
    {
        printf("Error! opening file");
        exit(1);         
    }
    fscanf(fp,"%[^\n]", *data);
    fclose(fp);    
}