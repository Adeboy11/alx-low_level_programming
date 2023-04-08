#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c liball.a
ar rcs liball.a *o
