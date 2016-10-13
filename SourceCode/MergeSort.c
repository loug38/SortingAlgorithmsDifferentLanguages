#include <stdio.h>
#include <stdlib.h>

void mergeSort(int numbers[], int first, int last);
void merge(int values[], int leftFirst, int leftLast, int rightFirst, int rightLast);

int numbers[] = {59,64,2,72,6,85,61,66,44,46,13,80,11,60,10,36,47,79,71,68,31,65,26,76,55,23,78,41,69,14,43,34,84,30,64,86,65,3,33,26,33,82,61,65,46,37,30,48,16,74,3,16,83,54,50,10,24,14,13,80,94,99,33,48,16,8,47,98,16,6,93,5,36,74,91,73,24,47,76,90,2,15,28,62,44,15,20,76,33,21,55,76,40,64,50,45,96,43,60,69,63,68,81,26,54,47,12,57,51,34,18,62,66,73,75,21,21,71,97,61,14,45,90,76,51,39,88,4,87,63,72,63,10,70,68,21,71,7,64,58,27,8,18,81,96,79,86,31,3,78,4,40,28,51,5,62,9,46,14,26,77,71,26,75,47,42,73,69,58,25,15,9,43,69,3,9,27,73,85,16,31,21,74,43,13,42,3,27,82,51,66,56,62,52,94,53,40,63,89,10,93,23,45,9,60,20,48,79,95,48,7,88,8,27,74,21,79,83,12,3,75,37,75,34,81,23,1,99,87,79,19,85,58,57,85,45,20,32,12,86,7,62,64,85,35,41,94,2,56,80,64,67,12,95,35,41,52,81,66,63,64,87,20,42,43,21,69,85,37,71,7,42,21,44,79,24,97,11,71,47,66,12,48,88,78,32,87,96,33,38,47,8,54,32,85,68,32,30,6,23,24,15,5,15,67,61,63,22,49,52,20,19,55,12,35,47,36,86,85,57,98,14,72,74,48,73,1,95,5,29,94,89,98,5,88,31,64,86,34,22,67,26,92,16,72,18,91,8,73,68,45,61,46,16,80,23,45,80,53,29,3,96,45,8,22,90,29,65,69,9,97,77,10,67,15,40,77,58,50,64,21,18,87,67,9,9,66,64,16,60,21,43,19,56,44,51,18,26,19,76,44,81,85,52,22,56,89,40,9,5,80,19,39,77,72,46,98,48,21,73,63,42,6,11,63,81,30,95,29,37,21,56,42,73,16,72,71,37,52,54,87,68,8,59,33,70,8,62,61,95,70,88,49,4,47,88,31,19,10,98,55,52,81,99,14,73,46,99,2,56,99,54,71,65,31,55,56,14,66,10,55,31,23,91,31,18,77,48,62,4,79,83,7,14,58,96,31,17,35,51,41,72,73,96,47,16,1,49,44,34,74,51,46,10,12,87,36,65,77,53,95,90,98,42,68,25,96,67,29,28,82,47,27,80,24,49,66,15,89,88,22,8,91,84,35,32,37,48,74,77,45,82,23,73,66,16,72,98,55,78,72,15,14,93,68,97,2,41,41,44,13,20,67,12,90,32,73,66,17,65,74,18,78,7,28,22,35,36,68,48,44,26,47,74,10,8,32,72,61,83,64,53,55,50,21,92,7,50,40,78,27,61,48,16,78,10,29,20,47,33,5,52,23,6,41,33,94,69,78,56,88,16,85,70,47,59,63,52,96,77,97,1,52,11,17,26,47,57,10,98,2,76,22,96,39,47,93,12,61,9,11,96,1,22,27,97,33,85,43,55,64,71,16,25,37,28,11,47,30,7,46,89,36,20,50,56,71,10,17,33,70,40,65,82,30,71,53,34,12,52,71,39,90,5,46,38,26,57,78,65,32,82,37,56,48,51,13,74,63,67,69,39,77,17,38,21,39,37,66,60,46,77,55,62,43,62,90,58,15,28,46,49,86,78,9,67,26,67,29,83,48,66,33,50,25,29,28,87,24,15,70,90,61,16,9,41,82,70,37,34,11,12,80,88,6,21,35,37,28,40,47,7,44,36,15,53,74,32,30,55,73,54,60,59,2,96,10,26,42,35,36,42,72,59,35,63,62,73,40,83,62,10,48,27,60,1,60,7,5,17,50,41,78,68,64,74,79,84,14,86,20,27,90,45,61,20,55,57,81,97,1,6,11,70,4,7,71,38,7,89,41,8,55,25,34,55,27,12,91,28,30,7,24,63,85,40,3,47,92,30,42,46,37,33,70,90,92,85,6,30,29,78,54,4,52,68,67,6,42,81,16,54,45,13,43,30,83,73,32,89,89,2,92,23,8,12,19,13,54,58,83,67,31,26,95,41,4,21,64,20,28,36,69,28,19,94,85,19,17,56,53,71,39,4,80,66,90,70,20,93,49,81,92,47,31,18,90,14,67,13,35,16,39,32,67,70,16,61,7,86,26,32,89,52,36,52,99,12,63,2,33,33,6,88,93,31,89,8,89,5,88,61,54,31,42,49,43,36,24,11,22,45,70,47,39,73,14,82,43,73,73,46,63,20,96,39,78,69,41,21,44,60,85,39,63,30,9,63,30,59,93,6,32,65,23,85,41,94,49,1,75,88,11,77,38,94,10,56,55,23,55,57,67,19,18,50,28,11,82,74,52,44,66,81,2,99,17,83,14,1,64,10,9,98,65,92,95,12,33,17,76,26,9,42,22,42,38,97,74,93,61,82,62,27,43,50,41,42,71,29,34,19,97,34,12,97,82,10,19,12,30,13,4,45,83,5,65,3,9,41,71,32,55,23,68,2,8,46,98,9,84,40,81,92,68,25,7,11,23,63,83,26,55,82,11,2,85,68,51,7,36,35,89,91,57,58,36,91,22,62,1,18,98,13,99,65,10,89,2,17,99,4,23,49,33,1,25,64,72,93,72,39,39,82,15,54,82,17,64,91,64,26,6,24,31,65,65,35,4,56,21,40,23,14,42,67,90,42,13,24,17,30,57,56,56,49,33,11,43,84,27,69,24,72,47,54,69,36,38,89,73,92,51,68,32,6,37,63,55,7,85,33,74,13,26,12,72,95,69,34,64,64,16,28,73,46,49,81,59,84,30,46,79,61,24,32,29,46,51,57,87,15,72,16,79,73,83,9,87,89,97,78,52,66,33,19,69,10,47,98,26,58,67,64,83,15,57,20,95,66,54,24,6,63,3,59,54,94,75,95,13,11,10,59,95,79,73,34,27,84,90,41,2,48,47,32,6,35,83,53,22,90,38,62,28,58,47,73,50,79,85,94,3,39,47,27,32,76,76,31,51,86,19,17,87,2,13,67,51,8,23,9,9,57,61,41,19,3,81,18,91,59,84,72,17,53,5,54,31,69,64,49,22,1,62,62,26,45,7,71,27,46,10,67,82,46,91,72,32,58,5,16,57,28,49,28,14,98,79,10,49,48,34,56,34,46,84,19,96,64,49,92,42,58,23,40,94,24,96,85,74,65,84,19,56,5,88,32,69,70,4,30,3,38,58,86,95,92,60,34,24,61,92,62,84,41,34,26,18,64,44,24,70,40,34,75,58,22,77,2,43,60,26,91,16,36,24,8,90,52,95,90,19,9,98,20,85,29,42,12,38,6,39,33,35,37,57,28,3,52,89,92,72,24,66,76,84,82,77,63,81,21,79,49,20,69,95,22,57,80,70,39,37,84,87,76,54,59,89,38,71,49,19,50,78,10,20,51,95,4,36,86,95,19,89,19,83,94,59,36,23,11,27,99,80,95,66,59,66,66,13,27,37,38,25,82,36,15,45,17,5,99,64,45,36,61,7,45,50,5,78,26,24,47,9,90,82,30,52,41,66,20,92,37,67,8,47,62,44,91,95,73,32,82,33,78,77,20,6,30,89,53,18,8,4,57,16,4,80,50,43,96,90,11,50,34,25,58,60,81,63,78,24,93,23,74,72,70,6,31,52,68,88,57,1,8,91,83,57,84,3,32,28,49,40,56,89,94,99,64,85,26,50,5,51,60,44,63,68,92,9,6,57,3,45,20,72,94,42,52,4,17,20,51,79,38,89,42,37,67,51,61,52,94,38,3,93,32,30,96,57,12,43,49,52,13,4,29,79,99,79,91,31,68,94,29,47,88,98,60,50,7,84,80,2,42,69,82,58,97,68,48,86,45,41,13,31,17,70,20,39,23,11,27,74,76,44,22,23,85,61,90,32,68,30,90,52,81,22,28,92,25,30,30,59,88,82,49,93,2,98,45,12,26,30,79,11,87,63,90,86,71,24,60,17,96,48,80,15,86,91,76,14,2,47,53,50,97,17,91,65,65,39,93,81,6,94,36,53,40,78,84,11,43,35,61,66,62,62,74,54,56,16,74,82,87,41,52,85,32,51,48,14,5,69,7,32,55,94,52,36,95,63,22,66,65,95,45,16,93,97,63,97,6,93,38,53,63,74,57,29,53,95,5,54,95,79,76,20,11,91,82,43,24,74,75,68,82,12,74,63,70,51,76,11,95,84,15,83,57,74,18,9,97,46,60,35,28,37,96,48,86,55,72,37,18,70,78,52,63,71,45,91,87,65,77,97,86,89,12,7,94,78,93,43,87,56,61,20,30,21,33,55,83,62,76,90,84,20,4,56,31,90,72,24,93,50,87,78,39,10,31,62,31,39,82,33,27,42,63,56,41,16,33,87,99,98,36,49,57,18,74,47,18,20,54,25,9,88,38,8,53,8,99,8,86,66,12,34,37,46,9,23,98,89,39,77,12,27,69,98,64,82,62,66,31,6,80,44,9,86,59,31,17,8,77,61,74,16,82,4,66,72,9,87,48,30,74,28,47,45,37,45,56,64,4,3,13,98,20,81,78,41,86,15,30,36,72,46,36,20,66,17,45,64,70,25,69,56,6,93,47,20,17,9,63,20,98,80,35,45,88,4,48,12,7,6,26,86,28,75,63,70,56,71,22,43,95,46,32,94,82,62,99,17,51,35,12,26,36,94,85,92,51,3,94,28,24,62,48,14,24,92,24,32,71,54,37,9,44,6,78,33,67,34,79,89,5,14,83,34,14,53,64,5,26,78,13,14,56,15,67,68,47,98,86,17,20,98,80,97,74,91,16,32,23,13,45,72,89,14,28,63,53,50,8,83,18,74,73,14,65,92,7,57,79,30,32,90,2,98,78,79,30,24,49,20,5,83,50,44,19,32,12,67,35,75,1,90,53,31,37,74,18,93,31,38,40,96,84,36,88,23,74,42,21,15,11,46,16,2,22,74,95,50,31,95,27,25,12,90,59,13,48,3,65,16,62,54,61,86,15,36,37,78,43,5,31,38,38,7,38,80,24,55,64,22,53,61,22,65,40,83,14,29,8,81,56,17,23,72,20,41,59,39,59,71,84,10,47,77,72,45,52,71,24,17,79,44,30,88,68,11,64,55,71,29,3,81,85,50,15,99,88,78,27,36,62,31,62,53,89,66,49,12,38,56,16,14,40,67,24,65,30,19,4,34,41,19,28,94,60,39,49,88,54,97,13,90,23,14,15,86,70,7,55,9,41,38,49,5,36,8,23,81,9,29,93,57,37,20,66,99,7,97,89,93,45,25,95,33,26,89,14,68,69,95,73,84,28,26,42,13,61,77,71,73,23,9,70,31,7,63,42,34,97,13,46,62,41,51,50,62,49,84,98,70,22,24,69,16,20,29,75,67,62,20,64,57,35,42,63,14,98,29,56,2,10,69,5,56,78,3,43,37,21,24,56,58,14,59,1,52,97,39,62,20,23,71,80,48,32,31,93,99,26,13,86,69,11,33,70,95,44,96,28,60,5,31,66,1,15,40,29,20,4,34,27,53,86,22,71,85,76,30,99,2,78,44,65,20,79,73,80,40,66,56,51,62,57,18,17,55,14,37,82,17,95,61,38,62,31,98,90,56,75,6,48,59,10,29,24,3,48,49,20,19,84,70,43,82,33,37,59,12,65,3,16,56,5,33,55,32,83,60,79,91,49,17,74,37,76,45,11,3,80,38,93,54,24,53,99,21,42,19,40,88,69,27,16,96,52,21,47,77,66,98,88,81,9,26,24,35,65,63,93,45,69,17,26,62,58,27,89,36,69,76,86,75,48,65,13,29,68,54,89,87,95,76,59,77,32,37,15,11,73,15,18,96,74,96,87,52,58,98,29,65,38,6,60,50,60,61,18,35,63,7,63,25,10,38,45,79,46,55,88,8,53,89,46,17,80,2,74,68,39,79,62,12,29,26,50,44,14,49,87,27,96,2,28,36,59,70,79,24,14,68,95,73,31,83,67,88,88,12,16,73,84,84,58,70,61,39,52,69,2,64,16,39,22,99,75,23,13,62,98,71,19,74,76,21,85,70,88,11,33,39,5,47,92,79,84,89,18,26,94,89,59,14,24,98,96,12,87,99,21,75,8,88,70,1,56,59,1,31,82,82,34,66,75,30,76,3,77,86,31,46,16,69,25,69,9,72,96,77,52,52,16,31,91,10,87,83,49,47,77,95,20,9,64,33,22,95,82,47,24,5,18,94,30,61,36,11,84,68,80,80,90,40,61,14,79,10,11,56,77,66,15,46,74,42,69,75,37,47,83,2,42,17,70,51,14,59,22,89,66,16,62,42,58,16,27,80,52,68,2,53,93,79,56,46,91,25,87,13,96,58,81,63,37,71,5,85,92,9,21,64,61,14,32,26,22,18,13,93,2,18,57,68,14,4,7,17,35,67,26,84,72,41,80,99,77,76,51,63,60,72,29,23,91,50,83,31,38,28,32,51,32,8,18,12,70,95,8,35,12,29,40,42,86,40,68,90,60,43,23,98,62,52,29,8,39,87,4,7,10,34,93,51,19,28,87,7,60,47,89,89,67,37,69,88,96,70,84,29,73,61,99,15,59,66,75,15,12,17,44,43,21,65,76,50,95,70,54,7,18,68,78,67,37,1,75,68,21,71,66,67,62,27,12,45,18,92,73,85,30,86,76,84,77,1,5,45,19,50,15,44,84,97,84,70,97,82,27,13,88,11,10,60,75,7,38,46,94,60,73,85,43,99,24,35,1,74,83,72,49,39,6,97,99,13,37,85,66,40,5,30,35,12,9,33,40,54,81,54,57,97,90,81,57,77,66,53,40,57,76,6,98,85,33,87,98,43,2,77,93,35,42,48,34,5,78,48,1,67,91,42,70,40,43,84,94,87,35,71,49,16,19,83,27,38,12,3,14,99,61,34,15,27,87,12,51,28,91,13,75,93,36,36,56,3,94,9,75,63,77,94,49,57,70,32,71,47,99,46,92,1,60,36,76,5,6,26,48,40,77,49,11,67,36,17,90,89,26,1,14,60,1,9,88,64,22,22,32,83,53,5,29,10,10,83,37,30,85,49,10,89,45,52,21,17,43,93,86,88,5,57,53,12,7,96,77,90,23,22,21,32,67,54,97,89,72,37,44,8,14,47,19,90,66,73,34,82,89,54,9,93,4,39,98,38,83,41,12,62,72,79,18,91,31,86,2,42,4,20,83,67,41,83,53,47,75,2,47,13,67,86,77,3,95,72,6,27,3,31,76,49,38,96,23,62,80,54,30,73,66,39,84,63,97,68,26,4,39,91,45,81,79,87,9,74,2,28,51,84,69,90,51,20,13,31,20,32,67,47,21,63,99,62,26,14,32,64,58,33,42,49,56,59,37,33,30,23,24,1,70,64,71,64,66,70,33,15,3,56,10,7,45,32,70,19,92,24,79,25,87,41,34,96,76,27,19,39,44,93,23,78,78,48,96,51,96,58,13,78,49,27,72,37,98,24,77,43,17,65,57,9,16,30,94,93,14,34,72,83,74,76,89,80,37,12,30,16,79,94,39,89,36,50,33,73,84,97,32,65,81,53,97,16,77,60,81,12,2,3,75,9,33,89,42,9,43,55,34,87,69,23,2,1,18,4,53,60,39,12,99,27,11,45,87,3,64,81,59,92,51,78,58,16,95,15,45,73,25,5,9,92,51,96,54,25,25,93,72,45,38,33,2,44,15,68,71,27,71,60,33,45,51,15,61,6,88,80,38,4,79,70,17,61,40,18,34,7,37,9,78,25,30,47,8,2,27,61,51,57,77,61,65,35,17,19,68,18,83,22,76,61,16,99,15,47,75,70,16,15,90,63,98,95,72,67,60,95,98,26,28,21,65,58,97,6,90,28,81,37,9,90,97,28,37,78,29,41,94,21,9,57,39,46,88,39,88,61,86,96,71,19,77,16,84,72,39,82,73,34,45,76,58,2,98,84,29,3,37,92,89,35,80,86,50,45,39,29,15,76,85,76,26,47,53,59,27,41,69,45,36,55,41,40,24,64,35,87,87,42,21,29,58,24,48,43,71,90,58,63,77,83,54,52,97,83,99,3,63,26,27,40,39,56,17,54,23,67,32,26,51,35,92,75,27,26,87,93,19,67,89,37,68,12,1,77,70,12,27,84,99,42,75,83,38,1,86,76,67,1,7,55,77,96,4,68,67,35,7,97,30,39,8,10,39,6,21,65,31,80,85,36,67,38,85,3,95,58,71,91,87,48,20,53,20,54,39,90,1,19,29,70,67,68,36,33,93,82,33,62,16,87,86,47,64,81,84,61,91,53,8,60,32,43,29,22,41,88,74,75,80,31,54,74,44,12,64,80,5,88,90,47,20,67,41,74,11,4,17,31,27,54,91,72,21,70,79,14,47,26,33,48,62,91,34,15,36,38,54,16,32,84,50,76,67,17,36,94,54,56,72,42,24,20,91,48,52,31,82,16,41,93,98,36,58,57,94,58,8,9,77,78,50,15,15,62,75,29,40,29,98,8,44,83,26,70,16,36,77,55,35,60,2,57,32,94,83,67,17,48,3,86,32,3,90,95,36,94,76,49,27,89,89,76,26,75,99,23,17,76,38,90,47,73,80,33,40,43,75,77,32,48,76,9,75,51,90,4,91,99,16,50,37,11,9,84,54,1,29,59,70,37,50,23,73,58,34,51,47,75,12,74,77,94,77,76,66,93,54,85,16,28,34,30,66,97,13,53,3,4,7,41,98,42,67,80,87,40,56,1,36,97,96,70,93,63,85,25,86,89,25,54,18,1,96,20,88,49,25,30,83,42,30,69,46,52,86,68,53,10,62,45,56,53,55,81,45,44,75,99,98,8,66,13,40,70,25,30,93,15,25,38,40,21,81,92,5,45,25,81,7,47,65,93,38,45,88,87,5,30,52,14,85,73,52,64,3,38,72,90,66,27,18,69,34,68,21,55,11,47,54,70,81,48,97,67,54,76,36,70,71,32,20,10,99,40,63,53,6,2,4,34,90,47,99,5,12,84,65,87,82,68,89,46,21,18,48,9,85,69,98,44,13,87,3,17,20,78,12,81,2,42,15,84,85,2,81,64,77,62,80,49,3,86,53,73,25,77,21,74,55,98,77,56,80,96,11,93,8,2,42,75,35,44,49,72,57,40,41,92,43,59,45,8,78,23,75,88,6,37,10,98,39,31,69,77,44,66,57,73,67,15,87,10,38,68,76,63,3,54,12,78,80,32,40,72,34,91,79,99,67,65,15,14,60,43,59,72,67,66,23,3,17,83,86,80,6,53,46,8,23,59,95,96,63,43,16,57,75,22,13,29,90,59,59,60,60,67,6,45,40,7,66,71,47,35,58,62,35,45,12,23,66,95,37,90,89,27,67,4,82,57,42,17,40,75,44,45,51,20,96,82,38,11,78,34,7,81,44,78,26,82,34,69,19,19,97,94,14,17,5,40,92,29,98,87,92,80,20,87,43,32,1,68,25,29,97,47,76,73,98,77,44,23,42,68,96,16,2,58,60,33,20,91,5,9,14,60,72,63,80,22,52,93,98,72,10,32,52,58,45,72,57,20,64,77,90,33,94,70,86,44,16,47,49,22,46,33,74,32,9,47,83,68,92,83,3,42,23,54,69,41,94,53,34,68,70,25,66,15,39,97,6,23,47,94,42,29,15,11,64,3,12,5,87,98,35,5,60,59,57,14,25,87,1,33,28,80,24,27,83,65,89,15,59,20,68,55,16,94,34,94,66,66,55,23,16,27,57,29,39,80,32,75,38,8,13,29,32,25,94,13,39,43,55,64,72,84,36,5,15,57,9,38,8,65,91,99,43,16,69,28,1,73,9,13,11,23,56,24,56,88,71,72,57,99,47,96,83,99,12,18,69,42,92,24,81,78,60,1,3,21,11,21,71,16,45,79,30,55,34,88,62,85,19,13,81,25,60,91,94,7,27,38,48,39,39,75,22,98,42,6,22,20,38,3,65,87,89,9,99,14,28,1,7,5,19,44,68,76,79,35,44,91,39,24,6,13,94,25,39,33,99,66,66,97,81,95,31,49,21,14,34,62,13,4,94,26,66,96,38,62,22,53,11,75,68,32,35,71,41,83,14,90,57,21,28,26,85,86,62,87,25,1,80,98,58,92,41,65,42,85,90,17,96,88,61,46,48,90,13,68,4,70,56,12,89,18,12,82,31,66,89,57,10,9,23,21,62,19,50,26,39,8,13,12,7,35,32,25,41,16,46,56,1,13,25,47,13,27,66,56,26,80,72,96,75,45,93,80,52,29,91,49,68,83,44,76,66,6,40,68,59,13,6,77,61,48,96,16,27,26,26,23,88,68,65,29,15,48,57,47,25,16,1,76,19,31,20,42,62,82,37,87,87,4,78,12,85,64,8,98,28,87,78,92,96,99,74,48,48,56,41,49,63,10,80,17,94,81,90,13,31,84,86,20,65,73,88,50,54,46,49,2,79,47,47,1,28,41,99,81,22,90,5,28,75,94,21,28,15,32,8,37,73,12,91,14,4,20,51,36,15,89,28,73,73,69,18,13,66,81,54,26,29,53,58,68,33,32,12,90,71,31,83,25,86,20,47,56,46,9,85,30,96,82,76,77,22,89,57,59,99,89,79,96,71,38,36,35,95,37,92,5,73,21,25,58,44,60,37,32,68,78,58,30,90,71,33,21,55,52,81,62,90,57,42,18,84,53,10,99,73,59,82,84,32,90,46,41,83,69,44,8,26,4,6,37,87,95,88,50,36,32,33,19,19,55,8,31,71,59,54,64,66,97,48,60,31,91,35,58,45,93,25,59,27,29,62,59,62,15,65,81,8,51,84,67,17,73,12,57,11,19,55,78,14,47,61,92,59,76,20,54,13,91,2,22,79,60,75,59,14,81,95,14,34,77,63,8,78,75,12,61,78,57,79,48,49,54,79,79,9,86,79,37,13,59,93,72,28,28,39,64,59,24,24,89,76,15,98,13,39,52,23,86,28,49,64,47,68,17,23,4,28,65,56,98,12,28,77,51,93,1,5,92,88,76,91,2,67,75,91,75,49,66,33,83,10,92,91,9,86,1,81,40,69,29,6,50,80,92,3,9,1,75,89,40,61,6,79,68,23,58,17,65,7,13,15,96,23,30,71,33,1,80,13,7,69,52,58,89,39,19,9,88,80,24,8,23,63,96,92,67,52,85,27,23,97,65,23,66,23,49,6,60,69,10,61,12,21,6,23,72,81,69,14,39,93,1,67,40,21,30,35,23,92,62,98,43,77,39,55,87,52,28,84,69,81,14,81,3,2,41,73,15,86,3,17,58,22,22,86,89,67,21,19,45,66,90,92,15,70,33,32,54,31,61,21,53,42,16,82,23,71,83,20,4,89,16,33,75,60,92,93,44,49,45,45,31,32,3,38,39,22,96,32,1,80,34,54,86,46,78,60,92,20,5,31,50,55,32,75,51,96,25,40,48,13,31,46,26,87,58,36,15,30,80,23,6,80,80,87,94,73,75,67,61,22,90,39,29,7,58,72,31,88,82,93,77,22,36,76,42,50,45,93,91,78,97,92,91,84,66,73,25,74,94,74,9,7,85,31,67,64,59,6,10,27,22,48,32,42,93,85,21,85,58,74,90,23,76,38,6,62,93,56,90,65,57,51,25,32,44,85,31,18,27,2,42,87,76,8,77,70,37,18,68,34,80,72,5,69,22,53,64,92,3,47,29,27,71,43,3,13,42,3,52,32,59,42,72,86,10,90,33,29,1,18,36,60,28,11,56,27,75,17,13,92,97,61,49,7,1,81,42,12,22,95,49,74,21,22,20,17,40,20,2,98,90,48,78,19,18,57,29,42,80,30,31,88,86,96,65,32,70,80,64,97,61,70,92,77,23,35,59,70,9,16,46,25,47,98,31,32,85,77,72,14,28,76,55,32,23,54,37,3,97,64,15,79,99,56,78,34,97,1,71,75,35,78,5,54,60,47,88,94,23,84,71,83,37,39,49,50,71,21,1,24,39,88,8,92,97,22,18,5,75,14,3,92,13,71,62,57,78,79,3,78,88,45,90,96,5,21,84,49,89,84,84,16,65,76,36,62,20,66,50,69,44,46,60,35,92,18,46,64,89,62,69,76,8,72,77,71,74,40,89,48,12,10,35,33,76,73,15,32,81,78,79,8,54,79,47,48,3,70,97,89,69,1,40,35,59,75,52,2,98,15,74,55,49,43,31,93,20,1,32,53,15,62,24,95,67,55,15,17,53,85,55,92,20,19,19,22,63,2,48,84,7,32,65,98,12,96,82,13,60,28,95,39,74,48,87,48,56,85,72,26,96,14,4,5,66,36,4,17,37,27,37,94,66,2,75,69,34,43,40,27,46,44,88,2,92,68,51,73,61,79,96,40,51,64,56,85,43,83,79,90,59,47,12,56,55,97,11,45,22,85,87,38,24,54,36,38,62,11,88,70,95,20,98,61,78,74,90,67,59,78,81,28,5,9,54,76,19,78,8,30,96,57,39,52,78,73,85,84,61,35,89,45,98,65,9,88,42,85,21,26,19,78,8,59,78,50,49,75,57,99,97,25,78,89,17,32,74,39,73,46,16,71,13,66,47,84,6,51,25,6,24,18,39,74,81,93,38,79,95,92,67,10,14,80,62,1,35,33,62,28,22,88,1,87,58,35,1,36,64,55,89,72,97,70,32,51,93,94,1,55,64,53,41,22,14,45,11,57,78,64,67,83,27,92,83,33,47,98,23,83,38,3,40,20,72,22,65,16,71,46,36,12,33,37,12,95,62,86,65,67,64,48,47,62,59,81,93,50,47,83,31,25,91,22,1,36,69,19,2,73,31,58,54,86,1,16,40,66,97,42,71,26,8,73,33,76,80,3,50,59,78,64,5,92,29,59,1,15,88,70,9,75,71,67,76,85,58,67,79,98,94,8,9,15,86,71,36,54,41,99,3,14,79,51,53,52,1,98,97,25,68,42,50,20,32,77,94,70,28,69,55,95,95,72,44,35,84,70,48,14,15,19,37,44,66,20,17,62,94,40,67,43,55,29,44,6,3,84,25,50,88,85,31,12,27,7,89,4,50,80,87,46,31,10,96,49,21,54,39,60,97,97,65,24,48,52,9,71,1,59,46,25,48,2,85,35,2,61,84,86,26,62,59,93,91,77,54,76,92,38,64,78,70,62,41,32,71,37,76,62,85,4,14,21,9,78,88,73,98,40,71,79,91,11,55,58,36,7,20,75,34,57,18,4,48,75,25,1,95,27,81,82,50,56,92,81,77,40,78,6,29,96,14,51,1,43,58,16,73,45,94,12,35,39,5,61,96,90,74,64,1,58,31,1,67,98,44,44,68,89,36,41,74,71,98,9,89,75,96,32,55,69,38,72,96,21,87,61,81,17,74,6,92,90,46,1,71,79,20,70,61,55,63,31,29,78,70,34,18,33,4,85,22,91,3,26,7,47,87,34,66,58,22,90,55,80,87,17,33,60,51,87,30,54,58,7,93,33,69,57,64,26,16,26,91,62,91,60,52,93,65,46,64,58,58,12,44,28,35,14,51,65,99,46,54,15,2,70,78,12,93,78,49,65,95,13,18,12,56,2,38,21,24,19,96,12,62,15,41,61,73,29,40,71,26,6,71,78,34,77,68,64,61,39,32,56,66,82,95,83,37,95,29,55,90,11,6,84,18,29,30,72,28,77,43,89,28,58,35,94,27,21,91,56,88,38,11,19,95,13,41,10,34,70,15,7,26,3,78,26,40,4,45,31,91,20,20,67,73,41,18,71,79,79,40,68,93,94,14,78,91,15,91,75,22,57,89,5,91,47,23,58,58,34,30,17,19,79,85,31,21,99,87,30,89,63,5,19,1,71,88,8,14,13,12,26,6,7,56,70,76,37,60,70,81,73,78,40,8,31,11,6,28,71,58,20,43,41,70,42,54,23,84,25,35,61,13,70,7,53,46,13,70,12,56,98,94,75,86,93,36,42,71,91,48,70,12,24,88,52,96,1,72,17,22,25,11,38,66,15,96,67,59,56,70,4,85,99,56,95,69,64,94,86,63,18,15,24,76,31,36,7,96,44,69,74,70,8,80,87,27,96,50,83,21,6,73,11,27,20,27,26,19,2,87,94,65,53,22,9,98,99,33,64,68,1,39,91,19,11,91,37,82,66,74,84,73,15,85,16,83,35,80,91,97,43,8,93,72,95,75,22,56,97,46,6,35,20,17,78,19,42,54,45,78,33,25,71,55,15,97,30,50,15,74,76,92,77,85,82,71,5,44,74,63,11,58,86,60,50,70,62,55,14,15,52,76,90,11,5,39,54,17,78,1,52,75,31,92,87,25,79,83,36,15,97,31,44,54,72,29,65,5,34,82,96,68,52,4,4,99,15,62,67,30,17,6,90,61,80,33,21,97,33,58,95,87,80,4,92,2,69,36,19,71,43,82,58,76,54,17,46,84,84,78,79,51,90,95,53,74,28,67,29,33,78,31,19,28,31,68,97,48,22,40,54,93,42,86,15,30,69,77,37,72,12,46,31,69,16,41,47,46,57,91,66,66,68,24,53,36,60,25,70,9,18,4,50,17,69,21,90,27,9,22,8,26,28,20,45,6,7,71,71,81,44,13,18,71,63,26,63,63,73,31,17,54,62,13,7,58,95,24,69,80,81,39,67,34,19,60,4,70,43,32,14,7,42,61,15,65,68,11,53,76,10,18,13,9,37,90,72,65,99,77,63,48,11,75,6,24,79,85,77,5,48,65,30,83,79,41,70,1,48,14,7,32,82,68,83,32,61,67,16,11,9,14,76,96,55,22,87,8,79,10,61,52,33,15,34,75,69,42,99,13,87,82,31,35,57,77,43,26,21,69,34,81,75,32,74,73,52,21,96,72,69,31,51,1,51,85,51,2,78,74,68,57,18,57,45,75,41,62,25,18,81,48,10,81,8,1,61,37,46,81,50,14,82,15,48,55,4,20,97,18,39,62,16,28,10,35,45,71,3,70,85,58,7,31,2,52,38,60,52,70,57,90,91,83,96,22,89,71,76,4,15,4,17,78,13,29,13,81,30,78,5,26,89,16,35,26,80,20,59,13,61,52,39,44,23,8,76,25,15,42,2,10,25,70,5,31,93,51,70,79,97,12,81,66,77,77,65,19,9,22,83,15,88,49,52,78,35,22,81,77,51,29,71,83,64,63,10,69,20,93,77,71,2,35,6,46,92,38,12,52,55,84,64,60,3,16,56,11,80,49,47,72,27,52,77,31,4,16,23,71,22,91,16,36,90,44,12,4,26,10,45,88,54,87,71,53,36,50,92,82,31,25,49,47,36,20,78,77,72,61,2,38,70,1,40,20,84,57,9,93,86,5,38,51,8,53,90,89,92,39,3,18,78,36,21,84,93,14,20,23,67,23,49,70,23,55,23,31,52,54,55,7,10,50,66,47,37,48,93,14,36,61,36,78,25,38,72,49,59,38,78,58,47,50,77,54,9,19,61,6,21,48,14,49,88,78,14,74,47,94,48,91,3,4,77,40,32,70,43,39,63,91,39,88,31,30,90,10,80,92,49,99,88,12,63,76,36,30,64,19,68,99,74,51,8,93,76,57,25,32,67,54,69,20,17,10,81,61,38,90,1,11,6,57,65,11,11,23,74,58,65,9,20,91,45,46,61,76,10,51,82,93,82,85,70,93,98,4,77,75,96,13,7,14,61,51,15,18,44,88,49,26,92,78,10,75,42,99,83,3,14,1,81,41,29,22,12,59,44,66,78,55,22,37,12,79,4,35,27,13,84,88,92,23,80,8,93,5,53,36,29,49,74,28,2,62,9,85,29,26,93,75,86,79,18,84,70,53,88,4,4,81,93,82,79,46,57,24,64,50,25,22,5,61,81,16,17,73,28,78,50,2,36,89,95,48,83,20,85,40,15,74,55,98,67,78,58,26,59,10,78,3,52,92,6,33,32,6,33,73,7,46,74,98,90,67,26,78,89,53,78,73,41,42,14,79,81,80,55,25,21,88,36,76,23,70,44,91,19,21,4,57,54,64,37,62,42,27,64,47,12,5,18,69,86,85,75,59,45,37,76,37,56,80,90,28,13,95,89,24,37,84,5,41,36,54,52,78,3,46,78,8,94,2,87,37,71,37,45,23,75,46,58,8,34,42,14,88,19,26,4,27,6,62,85,46,95,2,27,10,1,75,42,68,98,34,20,87,31,95,95,44,9,22,30,31,28,10,81,15,41,42,93,78,86,90,74,19,56,7,69,97,25,6,27,34,49,32,83,4,85,16,59,10,15,34,26,62,48,92,23,43,29,64,50,43,27,19,63,74,96,44,48,4,83,38,19,5,73,16,16,90,69,39,26,23,58,36,98,30,70,71,1,64,48,32,9,82,13,75,42,92,91,58,79,8,17,25,90,44,54,70,13,5,16,84,45,10,52,33,3,43,45,72,24,15,20,3,1,29,13,10,18,48,36,54,24,59,20,2,88,17,64,68,85,45,16,5,79,1,62,39,52,2,80,16,24,64,93,35,10,36,54,76,86,84,40,37,33,78,33,85,5,69,1,46,45,46,22,91,30,8,19,4,63,12,38,61,54,40,70,63,51,9,1,92,83,8,81,41,25,93,40,77,43,99,27,10,72,15,20,35,17,84,55,87,72,95,77,21,30,52,77,81,21,12,37,26,85,45,51,1,66,60,9,26,62,71,2,1,10,71,63,51,48,85,65,47,45,7,18,62,25,24,78,3,81,27,68,82,89,23,65,35,12,93,85,88,38,95,17,96,30,50,54,57,26,97,95,38,37,41,65,94,1,49,59,27,28,43,32,99,57,80,37,45,47,85,89,59,86,77,11,56,56,77,8,8,52,71,36,33,71,57,41,27,71,65,23,95,76,52,8,47,22,44,40,39,83,49,74,6,4,37,11,16,19,29,50,88,64,38,68,81,53,84,69,26,17,20,60,48,37,85,60,33,64,18,35,69,62,25,10,42,75,63,49,28,92,66,98,58,80,17,96,57,2,49,82,32,43,72,69,64,19,67,58,25,58,14,65,1,4,37,98,42,97,72,83,30,59,35,88,72,59,3,38,55,30,82,88,79,66,95,91,5,96,4,41,68,69,41,34,80,67,91,33,74,78,84,21,88,51,61,66,23,76,48,11,77,32,48,29,93,56,95,38,49,26,85,67,17,45,6,47,48,66,42,84,78,22,12,26,58,28,1,39,80,31,42,56,79,19,49,28,52,13,46,34,30,38,28,90,68,38,69,33,52,79,94,27,68,30,59,44,97,16,75,89,57,46,49,78,81,60,60,17,60,85,30,14,44,39,29,31,10,28,34,31,81,19,52,99,66,71,39,14,28,7,89,47,49,99,79,14,61,88,41,56,73,31,3,81,91,17,50,74,68,86,75,59,37,13,45,2,67,45,4,67,47,95,10,15,27,71,99,11,4,84,56,33,27,14,56,97,72,54,42,64,64,22,4,44,1,23,70,16,48,50,71,44,60,90,35,72,76,9,73,44,36,53,6,39,45,59,20,26,2,47,70,13,84,84,70,36,32,83,15,85,96,34,8,1,89,52,22,16,23,90,65,50,8,58,36,56,13,25,39,24,13,14,80,26,42,44,11,87,89,78,6,5,65,29,62,1,6,23,18,78,70,32,36,77,68,58,71,99,56,38,5,86,56,30,96,25,67,18,24,4,70,42,30,64,85,99,80,26,8,69,33,2,38,92,40,66,96,4,39,60,83,52,69,23,83,44,23,93,87,91,93,76,58,89,99,10,76,55,66,69,48,8,18,68,32,2,91,47,99,16,91,37,23,70,87,3,45,15,95,30,18,78,46,76,4,73,46,57,22,69,23,35,16,76,94,92,76,97,35,69,92,58,26,44,32,76,64,26,61,38,44,97,65,66,41,30,19,80,6,36,55,1,42,24,35,52,84,78,9,1,93,40,39,70,29,8,92,44,30,62,8,96,90,6,31,21,13,64,92,37,27,53,79,76,67,34,39,31,96,25,27,68,13,99,60,87,83,42,97,63,11,26,72,92,53,86,29,55,36,19,26,66,27,24,30,90,13,41,71,63,88,10,87,5,86,6,20,41,13,28,95,12,16,93,34,98,7,84,5,69,43,43,77,61,19,94,59,90,53,88,25,37,25,15,80,65,80,53,72,36,98,52,47,74,58,90,11,4,45,60,67,54,60,50,54,78,78,46,62,44,70,74,57,12,88,26,35,76,29,6,87,4,18,58,39,2,51,96,17,70,77,1,11,64,17,64,85,84,53,96,23,11,67,26,5,20,81,78,2,80,31,58,35,37,69,51,96,3,66,21,16,92,46,41,75,52,47,17,44,13,38,66,97,95,39,81,86,13,87,79,89,92,42,19,52,11,12,17,67,92,50,24,55,54,82,98,79,70,70,29,83,52,91,52,37,94,22,72,15,54,34,82,47,81,28,8,64,62,85,17,88,67,4,65,10,97,69,6,88,49,84,74,76,70,8,56,35,41,81,88,80,84,5,14,16,49,38,95,86,79,52,52,49,35,44,31,9,92,53,77,70,22,8,94,99,58,39,43,4,33,91,61,61,29,39,72,31,47,46,39,96,36,28,43,12,70,90,75,69,10,52,56,69,40,59,4,13,10,59,34,88,58,54,23,84,52,16,86,86,92,83,65,68,27,19,57,39,28,63,43,6,97,22,97,78,33,79,52,73,32,98,33,12,3,94,80,33,83,92,26,47,14,63,61,77,78,51,66,83,84,91,14,55,63,21,46,29,46,71,82,73,72,2,88,51,62,17,79,98,86,41,76,32,7,98,86,80,37,14,44,72,32,44,5,82,60,17,27,79,45,15,35,71,92,71,95,48,34,23,63,72,79,47,71,38,4,94,30,65,29,90,77,70,2,62,22,88,68,17,58,16,83,76,44,80,51,18,29,47,12,92,41,83,14,84,1,37,65,42,52,58,8,2,60,18,41,14,57,5,5,13,47,52,32,94,92,41,37,14,3,68,52,30,40,85,14,72,49,15,82,88,85,16,82,39,55,66,28,52,29,85,98,73,32,49,93,83,53,36,8,46,90,15,64,73,61,86,54,7,22,78,8,10,40,83,17,4,64,74,14,2,78,4,12,32,98,24,52,79,95,20,78,50,49,6,56,62,37,14,9,65,22,20,82,58,28,5,12,53,63,14,34,39,8,28,32,34,37,88,24,22,61,62,31,98,1,47,98,76,79,42,36,79,78,22,93,8,25,35,62,35,39,24,32,10,67,96,79,86,84,75,47,84,17,8,48,14,38,34,61,38,26,46,31,7,48,51,53,78,43,91,7,32,97,84,46,33,86,95,28,36,98,81,52,31,85,77,75,56,75,77,58,62,93,9,29,55,70,68,78,62,27,87,38,2,64,34,27,40,69,23,21,83,23,10,98,14,39,60,29,56,15,77,73,89,15,80,58,88,83,34,93,20,84,43,99,26,75,99,96,15,12,44,79,16,76,31,68,14,64,41,11,88,78,14,70,74,87,62,55,15,2,43,59,83,17,49,67,44,38,98,56,55,86,59,42,67,45,43,34,20,20,53,62,12,46,76,23,35,5,53,16,49,53,36,4,39,3,14,4,9,89,9,20,40,58,36,84,3,86,34,94,41,36,30,49,40,40,30,1,67,98,31,30,45,72,47,73,87,71,70,84,24,39,48,16,11,78,69,52,26,48,71,70,53,16,98,73,90,54,2,64,22,77,89,41,9,61,31,11,20,25,60,26,93,91,12,93,74,86,13,94,28,82,65,70,2,87,76,9,54,97,10,60,50,49,96,72,85,6,35,26,50,73,84,60,70,58,99,16,12,82,9,13,35,95,76,24,20,42,96,78,39,96,16,86,3,56,28,15,20,53,28,18,60,84,18,22,1,49,33,43,98,53,26,93,8,77,2,77,5,42,52,41,53,12,20,66,99,5,21,44,1,49,85,82,24,69,5,86,72,58,47,6,47,23,73,66,52,68,79,60,19,95,51,25,44,4,80,11,67,91,86,30,73,35,37,43,14,91,15,4,70,30,56,79,50,76,20,42,61,20,5,13,32,10,6,84,76,26,61,55,25,15,53,53,29,8,67,14,9,76,73,5,21,1,22,36,51,10,7,83,76,66,45,92,13,16,26,79,86,58,27,24,39,14,73,21,70,32,78,59,76,77,55,89,43,49,86,3,18,43,52,55,85,21,61,25,39,65,41,95,50,70,50,37,56,71,57,3,60,27,3,83,56,29,56,91,1,5,90,89,29,69,55,88,37,60,43,44,64,3,49,78,45,22,64,58,83,35,56,37,29,98,71,29,27,61,31,20,58,68,81,42,84,65,82,50,81,34,50,82,8,2,58,10,25,12,52,99,28,35,7,91,78,41,52,91,46,89,94,86,32,83,98,45,20,32,65,10,47,87,53,41,98,84,84,12,62,29,49,30,17,88,79,64,41,94,30,55,15,81,4,1,38,37,32,56,31,97,84,20,26,74,88,9,44,13,33,63,47,76,86,76,68,15,29,61,40,57,60,51,88,99,97,64,61,98,78,1,28,62,43,94,1,8,20,68,41,36,32,76,25,7,80,16,26,36,28,2,91,80,53,9,7,85,18,19,96,85,74,83,76,93,44,86,92,95,2,55,34,41,54,60,96,94,38,52,65,85,95,99,19,90,50,47,96,79,91,83,13,84,99,54,81,57,55,78,23,6,59,78,91,42,90,61,51,63,88,94,50,6,38,85,13,96,26,77,64,40,80,87,9,75,79,24,68,16,72,73,28,22,62,31,48,68,9,89,69,14,69,19,68,53,54,85,84,55,69,14,91,95,13,51,69,26,62,6,67,62,77,87,66,36,20,34,52,13,68,97,65,23,24,24,17,95,72,62,94,74,4,3,89,25,73,66,27,87,68,5,40,97,88,51,79,19,67,78,84,54,15,92,89,53,42,84,56,1,37,90,45,9,78,79,77,49,61,59,19,65,50,48,88,71,9,8,60,31,78,14,94,54,38,47,72,7,32,80,28,26,35,15,56,91,18,26,16,54,34,6,50,72,92,59,97,53,56,22,61,20,68,5,78,30,7,83,17,12,14,38,38,28,79,31,27,32,4,54,52,39,95,66,50,81,36,73,87,62,13,86,11,44,10,65,99,87,53,43,54,54,63,40,90,28,26,40,46,87,53,9,45,68,78,53,41,42,55,85,67,39,43,50,80,2,59,52,50,43,68,19,48,26,70,52,10,9,30,56,16,69,19,71,71,67,78,27,93,4,28,55,23,69,30,11,48,59,84,15,34,5,6,91,31,25,39,15,96,95,69,64,10,34,66,1,35,39,68,19,94,12,90,36,94,59,74,62,14,14,4,33,9,39,21,13,18,77,18,44,69,35,82,18,42,21,2,76,55,85,73,75,9,89,66,61,85,37,27,3,25,36,27,6,60,97,25,7,54,13,59,26,56,80,75,25,90,48,51,58,41,73,29,63,48,5,83,63,80,32,84,71,30,50,13,8,4,19,52,4,19,49,16,83,65,61,64,49,12,77,16,72,62,9,91,50,34,30,76,33,67,84,99,87,64,9,22,14,34,13,56,8,75,39,65,56,90,54,54,93,11,42,60,2,5,31,32,71,60,82,54,23,89,1,67,74,57,80,85,99,21,10,11,77,81,32,68,54,17,60,83,25,4,14,68,1,6,55,91,79,71,39,73,96,87,61,28,15,64,47,75,91,20,81,56,59,42,80,58,19,54,77,83,51,58,55,68,27,93,3,12,51,20,55,72,13,81,84,44,80,23,17,86,90,47,31,30,30,12,81,63,58,59,60,16,62,91,18,90,85,5,71,28,10,38,53,3,49,52,18,80,1,38,44,14,70,67,72,55,73,58,51,57,92,15,83,24,10,67,3,3,85,91,38,37,84,13,11,38,74,26,1,89,1,3,52,66,34,54,62,16,90,59,31,51,75,60,9,49,59,44,87,91,26,13,64,39,85,51,16,52,61,91,48,63,63,19,80,42,28,46,16,71,38,79,40,9,14,3,44,83,85,23,2,3,86,30,35,34,37,49,24,8,37,23,16,15,89,70,29,60,43,71,1,81,87,58,44,95,80,76,97,69,10,49,71,45,38,71,21,6,88,72,92,92,66,14,74,24,63,3,16,58,66,8,75,62,25,82,82,59,7,76,35,38,29,14,21,40,70,92,56,58,18,19,93,68,8,23,63,97,20,48,59,17,8,66,46,40,67,97,13,49,87,53,36,4,42,6,43,38,35,31,54,41,3,2,33,79,69,36,77,13,26,51,41,94,83,31,51,47,19,58,4,59,61,67,33,89,96,59,7,90,12,37,19,19,78,15,34,58,32,49,99,60,39,47,13,63,81,16,48,25,55,57,39,2,73,2,74,12,21,63,55,66,74,12,12,38,59,18,7,8,19,51,88,77,7,43,84,43,72,86,56};

int main(){
	/*FILE *fp;
	int number;
	char comma;
	int i = 0;
	fp = fopen("numbers.txt", "r");

	if (fp == NULL){
		printf("Can't open file.\n");
		exit(1);
	}
	for (i = 0; i < 10000; i++){
		fscanf(fp, "%d%c", &number, &comma);
		numbers[i] = number;
	}
     */
    int i;
	printf("Merge Sort in C:\n");
	mergeSort(numbers, 0, 9999);
	for (i = 0; i < 10000; i++){
		printf("%d, ", numbers[i]);
	}
}

void mergeSort(int numbers[], int first, int last){
	int middle;

	if (first < last){
		middle = (first + last) / 2;
		mergeSort(numbers, first, middle);
		mergeSort(numbers, middle + 1, last);
		merge(numbers, first, middle, middle + 1, last);
	}
}

void merge(int values[], int leftFirst, int leftLast, int rightFirst, int rightLast){

	int tempArray[10000];
	int index = leftFirst;
	int saveFirst = leftFirst;

	while ((leftFirst <= leftLast) && (rightFirst <= rightLast)){
		if (values[leftFirst] < values[rightFirst]){
			tempArray[index] = values[leftFirst];
			leftFirst++;
		}else{
			tempArray[index] = values[rightFirst];
			rightFirst++;
		}
		index++;
	}
	while (leftFirst <= leftLast){
		tempArray[index] = values[leftFirst];
		leftFirst++;
		index++;
	}
	while (rightFirst <= rightLast){
		tempArray[index] = values[rightFirst];
		rightFirst++;
		index++;
	}
	for (index = saveFirst; index <= rightLast; index++)
		values[index] = tempArray[index];
}
