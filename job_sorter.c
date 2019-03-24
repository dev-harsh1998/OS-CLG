#include "data.h"

int burst_sorter(const void *ptr1, const void *ptr2){
    int x = ((Process *)ptr1)->bt;
    int y = ((Process *)ptr2)->bt;
    return x > y;
}

void job_sort(Process *proc, int size){
    qsort((void *) proc, size, sizeof(proc[0]), burst_sorter);
}