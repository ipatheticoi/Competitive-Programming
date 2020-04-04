#!/bin/sh
while :
do 
    touch in.txt
    g++ $1
    ./a.out <in.txt >out.txt
    cat out.txt
    echo "Do you wish to recompile: [y/n]"
    read ans
    if [ "$ans" = "n" ];
    then 
    echo "Closing ..."
    clear
    break
    fi
    clear
done