/*
show use of getuid()  and getgid()
by huqijun 
2016-04-30
*/


#include "apue.h"

int main()
{
        printf("uid = %d,gid = %d\n",getuid(),getgid());
        exit(0);
}
