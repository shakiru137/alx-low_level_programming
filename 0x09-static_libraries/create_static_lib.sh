#!/bin/bash
gcc -c *.c
ar rcs liball.a
ar -rc liball.a *.o
