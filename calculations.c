#include "data.h"

void waiting_time(Process *proc, int size, int *base){ 
    base[0] = 0; 
    for (int i = 1; i < size ; i++ ) 
        base[i] = proc[i-1].bt + base[i-1]; 
} 

void turn_around_time(Process *proc, int size, 
                        int *base, int *base1){ 
    for (int i = 0; i < size ; i++) 
        base1[i] = proc[i].bt + base[i]; 
}

void get_time(Process *proc, int size, int *t1, int *t2){ 
    int base[size], base1[size], wt, tat;
    wt = tat = 0; 
    waiting_time(proc, size, base); 
    turn_around_time(proc, size, base, base1); 
    for (int i = 0; i < size; i++) 
    { 
        wt = wt + base[i]; 
        tat = tat + base1[i]; 
    }
    *t1 = wt;
    *t2 = tat;
    printf("Process ID       Burst Time        Waiting time      Turn Around Time\n");
    for(int i = 0; i < size; i++){
        printf ("  %d",proc[i].pid);
        printf("\t         \t%d", proc[i].bt);
        printf("\t    \t%d", base[i]);
        printf("\t            \t%d",base1[i]);
        printf("\n");
    }
} 