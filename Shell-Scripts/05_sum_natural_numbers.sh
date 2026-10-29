#!/bin/bash
read -p "Enter N: " n
i=1
sum=0
while (( i <= n )); do
    sum=$((sum + i))
    ((i++))
done
echo "Sum = $sum"
