#! /bin/bash

str="*"
for i in {1..10}; do
    echo "$str"
    str="$str*"
done
