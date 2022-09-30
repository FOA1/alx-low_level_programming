#!/bin/bash
gcc -c -Wall -Wextra -Wextra -pedantic -std=gnu89 *.c
ar -rc liball.a *.o
ranlib liball.a
