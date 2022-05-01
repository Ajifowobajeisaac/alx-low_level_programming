#!/bin/bash
gcc -S -masm=intel -Og -fverbose-asm $cfile.c -o cfile.s
