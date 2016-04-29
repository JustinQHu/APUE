/*
read command from standard input and exec command
basic shell
by huqijun
2016-04-29
*/

#include "apue.h"
#include <sys/wait.h>


int main()
{
        char buf[MAXLINE];
        pid_t pid;
        int status;

        printf("%% ");  //print prompt
        while ( fgets(buf,MAXLINE,stdin) != NULL )
        {
                if( buf[strlen(buf) -1] == '\n' )
                        buf[strlen(buf)-1] = 0;

                if(  (pid = fork()) < 0 )
                {
                        printf("fork error");
                }else if(pid == 0 )
                {
                        execlp(buf,buf,(char *)0);
                
                }
                                if( pid = waitpid(pid,&status,0) < 0)
                        printf("waitpid error");
                printf("%% ");
        }
        exit(0);
}
