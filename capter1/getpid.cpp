/*
getpid from kernel
by huqijun
2016-04-29
*/


#include "apue.h"
#include <iostream>
int main()
{
        std::cout << "hello world from process ID" << getpid() << "\n";
        exit(0);

}
