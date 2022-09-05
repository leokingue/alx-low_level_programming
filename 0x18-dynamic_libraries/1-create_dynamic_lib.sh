#!/bin/bash
gcc -Wall -Wextra -c -fPIC *.c
gcc -shared -o liball.so *.o

