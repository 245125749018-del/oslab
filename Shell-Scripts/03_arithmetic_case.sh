#!/bin/bash
read -p "Enter two numbers: " a b
read -p "Choose +, -, *, /: " op
case "$op" in
    +) echo $((a + b)) ;;
    -) echo $((a - b)) ;;
    \*) echo $((a * b)) ;;
    /) if (( b != 0 )); then echo $((a / b)); else echo "Cannot divide by zero"; fi ;;
    *) echo "Invalid operator" ;;
esac
