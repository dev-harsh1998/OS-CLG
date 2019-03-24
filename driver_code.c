#include "data.h"

int main(){
    int w_time, t_time;
    w_time = t_time = 0;
    shortest_job_first(&w_time, &t_time);
    printf("Average Waiting time is %.2f\n", (float)w_time/4);
    printf("Average Turn around time is %.2f\n", (float)t_time/4);
}