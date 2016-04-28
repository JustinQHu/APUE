/*
****************************************
read from stdin and write it to stdout
use Unix native interface
2016-04-28
By HuQijun
****************************************
*/



#include "apue.h"

#define BUFFSIZE  4096

int main()
{
        int n;
        char buf[BUFFSIZE];
        while ( (n = read(STDIN_FILENO,buf,BUFFSIZE) ) >  0)
        {
                if (  write(STDOUT_FILENO,buf,n ) != n )
                        printf("write error");
        }

        if (n < 0)
                printf("read error");

        exit(0);

} 
