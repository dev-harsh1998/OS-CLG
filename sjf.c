#include "data.h"

void shortest_job_first(int *waiting_time, int *turn_around){
    int data[256], size;
    generate_burst_list(data, &size);
    Process proc[size];
    for(int i = 0; i < size; i++){
        proc[i].pid = i+1;
        proc[i].bt = data[i];
    }
    job_sort(proc,size);
    printf("Order of process execution is as follows\n");
    for(int i = 0; i < size; i++)
        printf("Process[%d]\n", proc[i].pid);
    printf("\n");
    get_time(proc,size,waiting_time,turn_around);
}
