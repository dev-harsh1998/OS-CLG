#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp = fopen("CPU_BURST.txt", "r");
    char c[1000];

    if (fp == NULL)
    {
        printf("Error! opening file");
        exit(1);         
    }

    fscanf(fp,"%[^\n]", c);
    fclose(fp);
    
    return 0;
}