#!/bin/bash
gcc -c -fPIC remote_nc.c -o remote_nc
gcc -shared remote_nc -o remote_nc.so
