#!/bin/bash

echo pwd
echo "The frist param is " $1 
echo "\n"
echo "The second param is " $2

touch $1 
touch $2

echo "Hello World" > $1
echo "This done using CMake " > $2
