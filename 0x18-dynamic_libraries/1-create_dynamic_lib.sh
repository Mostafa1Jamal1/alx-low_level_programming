#!/bin/bash
gcc -shared -fPIC *.c -o liball.so && export LD_LIBRARY_PATH=.$LD_LIBRARY_PATH
