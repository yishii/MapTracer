#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "gui.h"

void gps_receiver_thread(void* arg);

int main(int argc,char** argv)
{
    pthread_t gps_thread;

    pthread_create(&gps_thread,NULL,gps_receiver_thread,NULL);

}

void gps_receiver_thread(void* arg)
{
    

}
