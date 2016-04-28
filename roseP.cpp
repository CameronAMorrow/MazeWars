// Name: Rose Phannavong
// Program: Lab 5
// Purpose: Project Restructuring

#include <stdio.h>
#include <string.h>
#include <math.h>
//#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include </usr/include/AL/alut.h>

void init_sounds(void)
{
    //check
    alutInit(0, NULL);
    if (alGetError() != AL_NO_ERROR) {
        printf("Error: alutInit()\n");
    }

    //clear
    alGetError();
}