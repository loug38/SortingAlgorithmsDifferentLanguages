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