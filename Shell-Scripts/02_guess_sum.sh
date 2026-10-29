#!/bin/bash
a=$((RANDOM % 10 + 1))
b=$((RANDOM % 10 + 1))
read -p "Guess the sum of $a and $b: " guess
if (( guess == a + b )); then
    echo "Correct!"
else
    echo "Wrong. Sum is $((a + b))"
fi
