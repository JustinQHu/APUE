/* 
read from stdin and write it to stdout
use C++ STD Library
2016-04-28
By HuQijun
*/

#include<iostream>
#include<string>

int main()
{
        std::string  c;
        while (  std::getline(std::cin,c) )
                std::cout << c << "\n" ;

        return 0;
                        

}
