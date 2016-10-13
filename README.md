# Sorting Algorithms in Java, C, and Haskell

This is bubble sort, Heap sort, Merge sort, and Selection Sort written in Haskell, Java, and C.
This was my final project for Comperative programming language and what better way is there to
compare and contrast languages than to run basic algorithms on each one.

There's an extensive writeup in the deliverables folder if you're interested in reading further.

## To use: 
The executable folder holds all executables for all 3 languages with sample
data already in each of them, so running them with "time" before each should
show you runtimes for each algorithm

Examples how to run each file in terminal:
for C files ./mergeSortInC
for Java java MergeSort
for Haskell ./mergesortHaskell

to generate new data to run:
java NumberGenerator
new data gets printed into numbers.txt
copy paste that data into array in each source code.
recompile for each program
ex:
    ghc -o mergesortHaskell mergesort.hs
    javac MergeSort
    gcc -o mergesortInC MergeSort.c