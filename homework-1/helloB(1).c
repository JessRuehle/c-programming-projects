/*
* Jessica Ruehle
* 9/1/2022
* "hello world" and return code
*/

#include <stdio.h>  // always need this!

#define helloMACRO "Hello, world.\n"

int main(int argc, char **argv)
{
    printf(helloMACRO);

    return 0;// required: a return code
  }