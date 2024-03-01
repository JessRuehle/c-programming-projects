/*
* Jessica Ruehle
* 9/1/2022
* "hello world" and return code
*/

#include <stdio.h>  // always need this!

int main(int argc, char **argv)
{
    char message[] = "Hello, world.\n";

    printf("%s", message);

    return 0;   // required: a return code
  }