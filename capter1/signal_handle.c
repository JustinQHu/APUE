/*
show the use of signal() and the process of signal handle
by huqijun 
2016-04-30
*/


#include "apue.h"
#include <sys/wait.h>

static void sig_int(int);   //declare signal-catching function


int main()
{

        char buf[MAXLINE];   //from aupe.h
        pid_t pid;
        int status;
        
        if( signal(SIGINT,sig_int) == SIG_ERR)  //sig_int() will handle SIGINT 
                printf("signal error\n");

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


void sig_int(int signo)
{
        printf("interrupt signal\n%% ");
}
                        
