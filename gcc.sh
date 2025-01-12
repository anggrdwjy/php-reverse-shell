#!/bin/bash
gcc -c -fPIC payload_nc.c -o hack
gcc -shared hack -o payload_nc.so
