#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedanti -fPIC *.c
gcc -shared -o liball.so *.o
