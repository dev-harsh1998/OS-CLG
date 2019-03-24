#include "data.h"

void generate_burst_list(int *arr, int *size)
{
	char *str; int i, u;
    i = u = 0;
    int temp_arr[1000];
    read_data(&str);
    int init_size = strlen(str);
	char delim[] = ",";
	char *ptr = strtok(str, delim);
	while (ptr != NULL)
	{
        temp_arr[i] = atoi(ptr);
		ptr = strtok(NULL, delim);
        i++;
	}
    u = i;
    *size = i;
    for(int j = 0; j < u; j++)
        arr[j] = temp_arr[j];
}