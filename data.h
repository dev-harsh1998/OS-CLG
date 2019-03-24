#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Process 
{ 
   int pid; 
   int bt;
} Process;

void read_data(char **data);
void generate_burst_list(int *data, int *size);
void job_sort(Process *proc, int size);
void get_time(Process *proc, int size, int *t1, int *t2);
void shortest_job_first(int *waiting_time, int *turn_around);

#endif