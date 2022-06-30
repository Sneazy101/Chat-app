#include <stdio.h>
#include <pthread.h>
#include "list.h"
#include "recever.h"

int main(int args, char** argv)
{
    if(args < 4){
        printf("Usage:\n\t./lets-talk <local port> <remote host> <remote port>\nExamples:\n\t./lets-talk 3000 192.168.0.513 3001\n\t./lets-talk 3000 some-computer-name 3001\n");
        return 1;
    }




}