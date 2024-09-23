#!/bin/bash
gcc -fBIC -c *.c
gcc -shared *.o -o liball.so
