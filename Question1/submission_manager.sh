#!/bin/bash

processed=0
duplicates=0
backedup=0

> report.txt
> errors.log

mkdir -p backup

declare -A seen

for file in submissions/*
do
    if [ ! -f "$file" ]; then
        echo "Error reading $file" >> errors.log
        continue
    fi

    ((processed++))

    hash=$(md5sum "$file" | awk '{print $1}')

    if [[ -n "${seen[$hash]}" ]]; then
        echo "$(basename "$file") is duplicate of ${seen[$hash]}" >> report.txt
        ((duplicates++))
    else
        seen[$hash]=$(basename "$file")
        cp "$file" backup/
        ((backedup++))
    fi
done

echo "" >> report.txt
echo "Processed Files : $processed" >> report.txt
echo "Duplicate Files : $duplicates" >> report.txt
echo "Backed Up Files : $backedup" >> report.txt
