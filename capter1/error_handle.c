/*
show use of strerror() adn perror()  ,errno.h
by huqijun
2016-04-30
*/

#include "apue.h"
#include <errno.h>

int main(int argc,char * argv[])
{
        fprintf(stderr,"EACCES:  %s\n",strerror(EACCES) );
        errno = ENOENT;
        perror(argv[0]);
        exit(0);

}
