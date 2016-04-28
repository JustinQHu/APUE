/*
read from stdin and write it to stdout
use c library
2016-04-28
By HuQijun
*/


#include "apue.h"

int main()
{
        int c;
        while ( ( c = getc(stdin)) != EOF  )
                if(putc(c,stdout) == EOF)
                        printf("putput error");
        if(ferror(stdin))
                printf("input error");

        return 0;

}
