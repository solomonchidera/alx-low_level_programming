#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c -std=gnu89 *.c && ar -rc liball.a *.o
