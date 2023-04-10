#!/bin/bash
gcc -c *.c
objects=$(ls *.o)
ar rcs liball.a $objects
rm *.o
