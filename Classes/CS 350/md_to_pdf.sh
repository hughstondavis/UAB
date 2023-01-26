#!/bin/bash

pandoc --template ~/utility/.pandoc/jj.latex $1.md \
       -V fontsize=12pt \
       -V fontfamily=times \
       -V geometry:margin=1.5cm \
       -f markdown -t latex -s -o $1.pdf
echo 'generated '$1'.pdf'
