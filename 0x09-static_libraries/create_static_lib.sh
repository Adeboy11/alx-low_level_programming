#!/bin/bash
gcc -Wall Wextra -Werror -pendatic -c liball.a
ar rcs liball.a *o
