#include <stdio.h>
#include <stdlib.h>

void quickSort (int numbers[], int first, int last);
int split (int numbers[], int first, int last);

int numbers[] = {43,60,36,89,80,45,78,52,81,19,71,23,1,37,89,20,64,62,55,25,39,96,3,85,82,84,97,18,33,30,67,32,94,14,35,28,35,31,41,48,21,41,18,6,63,52,22,80,48,28,36,22,75,4,85,38,32,8,41,99,84,22,33,71,59,99,56,96,79,4,55,85,21,42,7,68,64,44,98,6,49,36,49,20,17,93,3,89,33,95,36,6,47,44,53,56,36,17,12,91,86,99,66,95,8,10,90,58,89,61,96,58,29,9,50,35,15,49,40,46,6,59,66,81,33,13,41,25,67,5,74,70,56,38,64,57,93,77,99,98,28,5,85,30,59,56,65,42,53,69,69,78,75,92,86,2,76,19,8,73,5,35,32,98,41,50,16,74,34,37,94,75,14,1,96,51,22,86,76,75,61,23,22,93,17,96,76,7,14,35,17,79,86,47,55,38,57,64,66,64,89,17,51,40,35,19,98,53,85,66,94,89,34,84,37,70,89,16,86,28,75,97,96,25,17,89,56,12,43,21,1,67,43,2,2,67,58,82,61,72,15,83,55,69,71,59,76,69,38,79,81,70,39,28,90,15,43,5,83,94,7,21,97,80,32,10,85,23,26,99,20,1,38,63,10,21,42,86,32,5,89,31,49,8,20,51,64,80,38,20,11,98,22,32,40,96,17,6,58,67,65,7,40,90,80,83,44,94,49,49,64,93,13,72,7,31,2,37,42,91,1,85,40,79,94,10,6,87,67,91,14,12,54,31,81,74,36,39,90,71,15,56,75,76,62,87,90,4,95,50,17,46,35,19,5,33,2,74,27,75,88,16,64,77,30,51,47,61,99,5,69,14,2,24,87,93,12,98,28,84,71,9,88,71,54,92,13,15,95,11,32,61,67,60,36,4,34,85,46,67,58,64,17,72,17,36,46,47,41,92,96,30,98,75,58,10,82,35,62,53,59,26,44,29,60,67,10,92,90,91,48,81,29,6,50,37,65,98,65,27,38,66,70,89,44,33,64,97,55,62,92,80,55,23,68,12,98,13,1,63,55,72,28,83,52,18,13,62,89,80,70,91,41,68,42,84,19,1,74,51,36,29,39,68,14,36,36,45,22,34,55,62,59,96,19,10,37,39,58,38,59,53,75,47,85,36,50,48,39,43,19,26,13,22,86,54,9,77,39,58,52,14,12,97,44,48,59,55,70,86,21,25,42,86,85,78,30,41,61,72,59,5,70,92,37,61,60,10,86,48,18,83,79,11,64,99,99,54,36,27,68,75,25,34,14,81,19,37,39,32,71,22,34,57,78,93,21,33,94,81,66,74,43,71,97,35,89,16,70,75,23,46,82,90,58,81,83,46,47,36,76,76,66,36,10,49,47,98,79,49,35,49,8,81,46,42,47,88,87,45,72,57,28,67,72,55,18,88,24,80,61,71,38,13,74,11,78,81,63,61,47,41,38,13,39,4,48,51,9,36,71,97,97,36,21,86,13,70,94,37,25,59,71,41,13,82,17,63,58,87,56,43,15,59,94,46,58,45,36,65,2,51,89,84,9,32,72,58,75,10,40,94,66,76,5,35,74,87,22,83,28,40,40,79,70,19,40,90,6,73,32,69,33,87,72,44,10,77,90,71,48,26,83,76,6,7,50,69,79,40,43,46,77,51,63,93,23,58,2,49,84,37,24,93,64,24,37,2,48,28,42,62,12,8,5,87,72,29,16,14,48,92,49,43,42,93,41,31,67,31,42,72,60,36,73,48,7,49,93,55,54,31,90,89,83,9,73,2,93,61,99,84,96,7,14,63,31,52,1,78,16,16,3,70,36,43,90,87,48,89,28,99,24,50,7,27,90,78,44,13,31,65,10,96,82,89,64,64,37,63,13,86,53,60,85,16,72,25,93,94,18,11,77,76,54,65,12,28,23,41,23,33,22,49,66,94,97,51,53,41,56,74,37,81,2,44,16,72,86,37,21,77,55,40,77,59,95,33,81,10,22,68,72,50,63,64,75,53,68,51,77,55,74,33,38,60,64,78,39,8,21,52,47,91,38,67,16,76,74,96,63,2,28,20,99,48,79,69,79,45,11,53,14,57,78,69,29,4,1,9,3,35,68,99,29,76,14,75,42,53,31,83,10,32,91,57,95,77,36,6,59,67,80,72,11,90,12,5,87,63,91,74,72,48,71,79,66,22,77,38,4,96,24,44,77,50,20,41,25,81,47,47,52,65,90,35,94,78,82,54,94,56,5,64,46,63,87,89,10,39,69,60,10,10,42,63,40,8,89,5,89,89,22,47,88,92,21,32,37,86,95,77,36,49,76,22,79,81,10,4,49,62,9,66,52,32,9,37,98,76,19,93,45,58,96,64,49,66,92,64,16,75,40,7,50,30,86,61,22,39,71,77,74,72,41,42,32,23,67,14,91,6,79,83,91,70,18,77,58,81,34,16,70,27,12,9,20,86,42,11,61,76,7,9,6,17,35,32,45,66,61,79,96,38,63,86,91,98,19,7,75,91,14,93,27,61,77,54,3,75,66,92,83,23,71,17,3,90,97,85,95,16,9,44,29,58,22,21,83,13,13,94,45,64,61,89,21,30,79,98,44,83,82,13,44,62,54,77,42,93,11,41,42,63,72,51,46,88,37,48,45,58,24,96,35,5,64,43,90,95,90,84,80,82,17,93,29,29,17,80,65,36,14,89,74,53,11,74,42,36,54,18,95,80,98,49,10,55,44,2,76,86,96,41,51,74,95,13,60,3,41,36,10,50,1,51,37,12,22,68,41,68,82,50,96,17,73,36,37,49,4,63,89,38,30,18,15,58,38,85,82,7,13,23,94,26,56,41,87,11,95,94,99,57,14,16,71,36,32,34,2,44,76,60,65,22,40,14,28,41,73,69,74,28,84,59,96,68,10,54,68,92,26,91,82,43,47,95,21,35,84,42,51,31,21,5,10,45,8,31,81,1,49,84,64,20,2,23,87,68,31,20,51,76,51,24,56,60,9,96,78,5,63,21,56,99,21,57,28,37,4,33,60,91,41,61,59,28,96,16,58,96,43,3,74,41,49,83,79,99,81,64,27,33,45,95,7,80,60,80,44,19,79,23,82,89,74,34,79,33,54,47,89,20,72,49,52,17,57,72,80,14,42,50,79,89,81,58,15,56,54,16,84,64,6,37,49,95,41,35,15,68,29,77,25,28,26,93,97,17,60,19,41,78,89,83,30,44,33,60,51,37,5,40,78,13,56,42,83,49,32,23,73,84,36,83,96,95,90,7,82,98,78,89,73,84,92,85,40,54,47,92,6,23,79,27,12,7,27,48,72,48,64,46,56,81,27,69,32,42,72,95,46,52,49,38,93,77,26,83,9,8,31,51,55,6,14,25,96,74,88,46,97,39,14,18,33,82,97,19,31,33,60,71,19,37,90,37,2,51,33,91,91,25,48,81,74,71,71,11,98,13,7,46,88,17,51,26,33,92,84,69,16,81,9,33,98,31,73,58,47,77,54,64,78,10,30,42,58,47,91,61,64,50,75,34,24,21,86,68,37,70,28,58,54,91,67,39,56,24,68,27,3,76,8,42,45,69,15,13,61,42,99,26,37,92,2,37,2,9,16,10,99,8,97,62,56,94,28,7,65,34,81,32,26,43,27,44,42,80,73,36,79,29,25,89,38,40,39,10,27,51,61,63,54,19,71,14,36,25,3,70,91,73,13,4,30,12,52,70,62,15,88,6,33,26,67,48,63,1,59,30,75,96,36,4,54,37,7,35,62,12,24,85,90,21,59,54,39,62,61,43,65,35,29,75,79,21,66,71,38,83,52,5,78,42,95,9,2,4,58,17,65,77,98,92,59,50,49,78,54,78,78,65,55,16,37,39,58,83,30,80,63,62,85,93,83,4,95,15,5,83,69,39,24,84,50,26,10,73,44,21,1,39,17,16,27,65,49,8,48,39,57,22,67,30,98,46,36,63,63,3,34,84,26,13,25,57,33,66,99,23,44,7,2,67,86,43,62,69,17,57,41,15,38,30,7,37,30,48,29,30,64,19,97,71,85,84,92,72,39,59,61,74,80,35,10,20,51,37,2,99,49,97,64,52,15,10,87,16,5,83,86,85,69,10,10,93,63,65,98,33,60,73,8,81,99,29,68,16,45,55,56,90,83,92,93,90,51,10,43,62,38,9,1,30,39,89,95,24,82,95,33,75,68,18,40,59,38,64,61,10,29,49,97,69,50,96,9,20,58,93,27,35,7,47,23,5,99,28,77,9,9,56,49,98,17,91,9,95,85,46,52,20,18,50,4,30,69,63,70,11,98,19,54,9,41,84,83,39,29,68,98,5,31,12,4,11,88,15,4,91,55,53,31,88,55,34,52,80,68,51,9,93,90,18,62,29,70,86,84,71,43,74,37,40,17,94,27,89,56,81,85,31,19,57,56,97,34,74,90,38,90,13,49,35,70,59,38,26,6,25,20,59,92,89,30,85,34,32,10,65,81,77,36,98,62,80,93,19,86,54,57,86,54,71,45,61,36,50,32,36,63,26,45,10,52,43,32,14,43,1,34,32,40,51,67,11,5,45,45,13,15,55,70,88,6,94,52,55,84,93,63,94,31,12,17,75,25,57,51,88,45,31,86,61,76,24,48,77,32,62,92,75,78,41,64,49,89,41,7,44,9,82,7,1,77,87,42,68,49,99,13,42,12,37,49,55,88,60,64,25,12,99,24,30,45,93,93,47,48,17,37,17,90,70,59,75,95,4,13,47,97,57,41,68,58,99,48,2,34,88,33,13,92,11,65,46,80,34,6,15,20,88,92,50,55,64,7,8,99,65,65,19,95,28,26,22,9,75,90,57,72,71,35,5,14,13,5,36,3,29,54,84,73,26,10,83,22,94,57,67,49,36,85,22,37,46,26,30,17,50,69,51,41,17,85,71,82,49,21,61,88,55,95,77,42,91,69,65,23,4,76,3,30,50,87,13,98,34,66,97,42,31,32,6,51,59,41,16,68,1,98,11,30,53,20,59,85,52,19,72,1,35,93,38,64,64,8,31,71,69,52,30,12,69,35,75,5,76,46,43,62,64,54,98,47,55,64,55,56,50,73,99,1,2,4,23,63,89,61,83,76,90,87,63,34,37,67,7,66,63,7,42,52,96,55,32,55,74,79,18,96,92,76,14,5,96,49,99,29,59,59,3,10,23,13,90,90,18,35,18,45,51,14,26,70,15,26,4,91,98,48,47,43,97,62,86,96,50,87,13,94,11,40,5,67,35,41,18,83,69,34,4,97,89,71,82,47,73,70,48,75,23,72,77,46,58,43,82,57,40,44,36,94,56,92,47,86,98,21,91,52,82,89,40,83,62,3,64,39,86,80,10,52,95,23,19,12,64,26,31,69,70,53,60,3,99,76,80,90,20,87,77,62,26,68,43,34,72,52,21,68,35,35,96,70,13,39,45,59,51,48,62,92,52,80,72,74,40,40,86,39,42,45,98,57,81,60,6,49,57,51,37,40,10,21,48,9,95,99,55,89,92,33,7,6,7,33,13,69,11,46,16,69,15,40,25,71,54,36,87,35,74,94,36,55,48,22,61,83,53,41,74,70,17,75,76,56,48,46,9,82,6,72,28,54,75,69,41,21,6,82,9,54,28,76,90,10,8,31,58,75,10,56,40,54,96,41,1,53,72,76,10,44,44,40,9,71,50,68,25,42,25,89,67,18,44,42,69,99,21,44,96,46,15,23,1,80,26,92,48,68,54,49,82,37,38,10,97,50,86,36,48,27,38,49,71,4,99,84,32,95,7,55,25,69,17,31,16,36,88,44,7,2,38,23,99,74,67,2,4,45,15,49,70,88,63,83,96,96,15,72,32,32,40,49,85,51,32,28,90,80,15,28,37,23,25,18,9,8,74,84,15,10,33,7,33,19,90,73,63,72,61,20,70,67,97,4,63,89,76,59,68,45,26,87,88,12,73,26,80,74,77,3,99,65,11,67,93,10,18,49,27,87,67,80,70,54,52,67,66,76,72,54,85,4,73,97,99,44,94,40,43,2,82,47,19,76,29,5,16,20,8,58,97,20,37,85,93,79,44,48,67,81,36,65,76,76,44,7,53,96,44,15,97,39,28,89,5,44,44,70,23,41,94,2,64,31,35,12,75,24,97,8,83,58,42,79,46,54,88,93,14,94,16,68,14,27,20,35,57,82,67,71,12,3,25,48,60,52,23,88,9,79,32,27,93,31,55,89,94,35,6,48,19,57,46,20,5,24,1,62,28,10,82,58,94,60,32,17,22,8,48,39,48,91,92,6,16,19,50,14,90,67,33,95,56,26,11,55,95,66,19,71,98,44,85,13,56,37,66,26,93,54,68,55,44,63,88,26,11,18,95,89,14,31,20,10,99,51,12,41,54,62,21,12,48,98,46,52,96,39,31,38,31,69,48,3,17,76,61,30,41,39,20,21,48,18,96,73,20,90,96,51,31,44,42,33,26,87,98,55,97,45,94,44,36,45,96,79,65,83,35,96,78,4,52,77,39,28,13,49,59,38,38,66,50,42,32,3,7,27,60,77,86,42,17,48,6,32,43,84,89,5,22,13,44,82,45,73,90,93,87,91,83,94,49,52,12,14,71,61,54,49,67,90,14,47,19,16,5,97,94,42,73,13,95,37,1,96,48,96,44,17,32,46,2,51,82,41,50,16,17,16,64,7,50,27,39,85,88,86,47,23,8,47,73,2,18,68,89,70,5,82,92,12,64,10,45,5,24,85,98,6,54,15,16,1,23,36,9,31,38,71,21,17,42,57,52,53,48,6,7,38,66,74,65,74,16,91,26,22,13,93,15,86,62,24,5,95,99,53,61,31,80,15,5,72,39,11,39,5,99,20,33,6,30,35,56,72,22,97,75,1,22,64,4,16,97,90,84,45,42,72,31,75,52,34,14,45,81,86,33,88,52,99,97,62,30,4,35,39,5,51,18,83,89,94,9,15,84,33,86,20,34,30,47,47,85,30,80,55,65,89,27,70,58,17,93,51,3,33,75,86,40,22,57,83,5,79,3,64,20,80,53,44,69,12,61,33,3,68,34,37,59,88,58,95,78,75,36,87,47,79,86,52,14,76,97,70,20,88,45,1,99,67,48,29,82,43,72,7,50,35,5,87,92,72,15,93,10,68,63,42,30,46,58,34,67,68,52,31,63,43,26,85,40,71,69,16,89,26,48,64,85,70,55,78,3,41,46,7,47,23,86,68,96,94,97,59,34,37,19,26,36,54,97,98,42,2,58,15,70,45,69,43,84,55,23,64,22,51,28,92,32,49,74,79,42,18,94,76,60,28,17,6,35,79,74,75,28,23,2,63,56,25,76,98,95,9,94,50,42,76,43,18,57,88,4,97,58,69,75,39,10,47,11,20,48,28,36,92,37,49,26,68,67,61,19,47,41,5,76,62,93,11,5,51,35,46,19,36,63,46,75,32,70,24,81,3,76,79,91,83,95,65,80,68,57,81,13,76,33,20,11,55,4,9,8,42,20,44,77,55,1,46,9,98,42,9,86,29,34,71,39,14,21,99,40,89,91,25,14,24,53,2,97,68,93,56,8,90,10,49,8,46,19,78,60,82,93,86,70,64,70,84,96,69,40,61,67,15,46,4,80,21,51,47,29,73,30,78,47,22,96,15,24,99,21,29,60,6,56,17,73,73,79,97,35,18,9,97,93,53,47,5,65,94,96,32,70,87,17,92,86,17,95,12,91,11,99,89,98,36,47,87,73,29,5,42,60,85,51,25,88,99,14,69,92,63,59,28,28,87,61,71,1,86,21,54,21,31,32,62,7,90,24,12,28,88,68,33,10,96,18,85,19,23,39,25,56,53,29,75,56,77,62,65,86,89,30,35,24,95,68,88,96,50,12,19,69,46,78,89,18,38,43,70,9,42,6,89,28,27,76,46,78,56,69,57,93,69,44,54,3,81,86,81,41,82,17,90,70,68,38,40,55,64,35,79,92,7,7,94,50,55,54,63,30,44,89,36,18,70,15,30,83,38,25,81,36,94,30,15,93,19,76,9,60,66,59,29,62,90,7,42,68,50,30,10,17,18,34,20,1,52,60,35,1,64,80,96,4,91,24,54,85,34,54,88,60,57,47,16,3,74,29,38,44,85,61,95,4,85,29,14,65,93,62,1,28,30,11,88,49,59,32,44,65,18,86,9,50,8,12,12,34,51,55,57,83,61,11,6,98,76,71,96,2,82,43,52,37,76,78,28,89,56,17,13,68,72,64,72,75,27,92,26,37,18,74,7,79,55,93,14,84,81,32,42,54,9,73,4,23,38,84,3,26,30,34,25,60,39,66,88,92,81,84,8,83,79,24,19,52,17,73,83,59,5,16,90,65,34,72,84,57,45,96,96,85,38,67,41,25,9,86,84,3,49,6,84,46,58,97,24,98,54,80,14,85,46,74,30,52,64,64,40,96,74,17,12,98,95,77,13,25,2,56,11,77,34,67,63,22,9,38,62,52,64,86,96,71,21,57,34,88,11,83,45,28,36,52,67,61,45,7,82,19,47,54,26,52,97,64,77,35,20,86,91,45,49,7,11,78,3,22,29,49,37,62,3,62,38,57,48,38,18,11,28,61,12,51,64,31,48,61,74,45,46,47,95,84,80,38,4,16,1,5,89,73,5,72,57,76,86,37,26,22,39,41,5,64,44,6,91,35,65,23,55,36,27,64,37,29,46,46,56,7,52,19,73,54,14,28,79,85,63,49,20,52,40,39,34,35,61,18,48,65,71,21,58,11,7,56,68,67,47,80,95,17,57,29,3,76,14,60,79,79,22,57,34,95,71,14,96,76,44,29,75,22,37,87,1,88,77,37,15,25,82,36,8,50,41,55,58,68,34,45,93,91,71,88,55,77,60,2,64,57,88,61,21,32,30,51,55,67,97,97,6,51,74,42,98,32,41,42,25,93,89,3,80,9,93,27,1,76,61,27,35,66,55,47,43,35,9,22,84,12,46,89,61,34,85,4,44,29,22,67,70,88,71,48,10,40,22,34,31,66,42,26,9,4,80,45,91,63,58,48,5,24,55,48,73,12,84,69,7,81,25,18,52,98,50,34,55,14,78,90,30,24,56,97,75,87,81,74,64,4,61,28,29,98,55,38,88,88,77,43,29,63,41,92,71,80,55,12,75,34,54,67,30,93,76,2,32,84,30,49,69,39,12,98,32,91,36,12,18,76,30,36,85,40,15,80,47,23,43,97,4,68,43,21,12,2,2,74,15,40,7,96,61,67,78,66,62,69,82,22,44,11,22,47,30,83,78,75,34,86,73,74,22,91,48,9,55,38,7,25,61,69,43,98,56,15,98,29,27,56,52,32,36,8,85,91,1,63,16,37,84,6,52,80,47,64,20,48,53,79,94,9,91,11,23,17,45,18,22,22,90,77,21,65,99,12,22,69,91,95,46,21,21,86,91,33,10,63,60,72,91,89,79,98,14,60,89,27,87,94,86,88,51,1,54,78,98,39,60,60,18,77,55,43,67,69,46,40,15,46,75,49,71,62,68,53,45,69,6,52,83,2,49,31,41,61,88,63,20,56,93,67,37,78,30,3,11,7,44,63,28,80,90,83,19,25,75,53,70,11,16,91,36,59,43,10,92,93,78,63,26,42,83,97,42,10,45,49,80,69,7,48,44,98,3,85,30,99,36,45,10,18,58,66,10,75,87,39,41,49,98,34,43,66,40,72,45,53,74,12,92,96,66,15,46,1,11,31,84,23,58,52,14,94,93,44,48,38,32,94,78,12,14,14,21,76,36,90,11,79,12,69,97,73,68,12,78,5,70,81,28,21,73,4,80,89,77,75,4,2,53,42,59,10,66,22,48,79,29,14,71,95,45,68,92,31,74,37,5,45,34,89,3,38,5,19,98,41,32,39,38,40,67,66,40,18,64,96,38,55,15,7,27,22,47,11,39,99,42,20,70,12,20,73,43,34,67,7,10,96,91,76,10,98,23,35,88,59,72,38,49,49,77,3,97,78,1,72,50,69,9,63,65,32,48,71,30,16,58,34,89,93,27,21,43,20,99,52,17,90,18,95,10,88,73,6,66,87,43,69,79,7,63,58,67,95,24,78,10,61,97,96,60,21,44,49,1,46,61,46,82,9,73,68,44,4,15,48,70,5,49,7,64,78,5,46,13,35,79,43,68,61,52,71,27,36,71,19,7,13,63,48,22,7,85,33,25,56,92,73,4,64,46,37,3,31,5,62,27,35,72,52,68,48,90,54,19,64,16,99,1,24,79,6,37,75,62,13,19,62,84,48,48,48,38,2,59,87,39,32,96,2,26,86,41,59,66,88,74,65,7,27,29,99,83,96,44,59,97,43,57,43,11,40,13,67,85,1,12,77,37,33,93,62,34,53,48,87,89,95,38,53,13,39,61,24,67,62,32,30,84,92,3,75,85,2,27,71,93,27,31,8,5,11,34,19,22,2,93,47,49,64,81,14,36,21,62,47,7,45,18,45,31,90,37,27,99,25,11,72,39,54,88,51,38,86,17,47,51,95,5,34,14,59,51,71,93,45,68,96,62,55,8,2,95,90,58,42,93,96,13,85,20,55,17,85,47,84,58,30,78,81,64,23,81,92,23,25,70,21,47,62,14,32,32,90,4,53,76,94,91,37,38,1,44,97,91,48,47,66,34,45,84,23,13,30,32,3,13,69,53,39,23,50,63,35,12,35,81,57,40,65,95,31,23,56,38,65,43,26,53,97,8,93,38,12,98,26,90,10,72,66,42,15,21,37,48,38,84,29,96,41,49,33,59,33,10,54,80,51,22,89,73,1,78,77,22,56,1,11,17,70,24,3,46,36,58,96,17,35,70,83,2,56,97,53,7,88,68,67,81,92,87,46,77,41,88,11,15,39,6,50,12,3,31,8,53,16,53,12,31,77,95,32,67,69,14,65,43,10,9,98,72,48,32,22,63,12,67,84,21,66,44,51,27,17,64,38,75,35,2,63,24,92,41,73,29,63,17,83,11,72,57,27,36,41,33,92,28,58,54,79,60,74,81,15,10,29,13,42,87,95,43,9,90,51,72,78,55,84,88,21,26,65,15,97,64,49,70,35,1,72,15,9,7,25,93,42,48,60,7,89,23,62,7,32,19,17,82,2,85,9,35,1,72,73,70,27,38,35,33,6,3,47,70,20,90,67,64,81,41,23,68,62,67,31,61,93,67,34,13,94,97,33,85,75,64,95,12,5,42,38,1,66,66,11,8,36,33,80,78,54,84,1,75,28,21,62,17,40,85,11,95,95,68,91,77,76,81,3,78,56,13,21,48,29,72,89,4,37,62,98,50,24,67,19,62,75,48,44,48,19,66,23,67,29,43,93,73,31,62,44,18,87,98,43,62,34,55,75,31,90,64,95,32,25,97,87,39,17,93,40,80,42,41,38,12,99,8,8,65,26,64,66,97,61,72,25,35,69,15,25,72,31,93,59,61,49,23,52,13,73,88,50,60,82,34,35,55,74,56,41,12,44,99,7,83,12,47,17,58,16,19,39,32,69,39,37,87,92,95,25,72,14,32,55,30,96,35,50,21,54,79,67,70,43,27,91,17,45,49,60,72,20,93,97,38,69,41,53,49,59,26,94,56,68,47,86,58,66,28,45,16,54,42,77,33,6,14,91,30,88,95,69,37,3,96,58,54,40,65,9,13,9,77,47,61,20,26,64,92,19,47,57,69,72,70,37,5,25,66,7,64,40,7,79,45,7,99,26,68,3,24,54,71,81,49,47,83,51,39,75,56,3,94,96,26,47,42,99,50,80,23,2,41,48,60,43,76,69,50,75,5,75,65,39,4,66,15,26,55,74,43,13,69,88,82,38,79,15,81,27,85,25,17,62,18,8,61,75,73,22,28,44,15,26,96,28,93,30,32,65,24,23,43,42,19,5,25,30,56,65,60,29,52,84,4,2,5,77,41,51,59,29,91,86,76,49,81,14,14,2,5,38,63,4,61,70,48,93,64,21,47,79,98,56,26,52,54,11,73,7,94,48,98,66,20,87,78,1,75,85,59,22,43,68,68,54,58,87,98,32,49,90,84,79,67,83,17,11,19,20,10,3,32,48,72,7,35,44,22,73,22,74,51,36,47,70,21,14,52,40,71,32,44,1,71,59,1,46,91,36,52,36,66,92,79,92,15,73,35,13,98,15,10,93,98,55,1,67,42,23,8,92,39,32,84,63,54,10,14,94,95,22,2,89,75,28,90,66,63,84,1,14,78,91,65,31,16,68,88,3,87,44,7,83,67,61,72,8,43,49,19,64,94,23,76,28,33,89,90,66,52,71,96,97,97,2,14,40,2,18,30,53,51,78,94,98,11,99,22,79,82,36,41,89,28,72,68,57,58,20,61,91,49,88,78,83,36,20,97,76,84,25,19,3,4,53,13,24,3,1,27,35,73,90,55,28,57,43,47,8,27,85,35,95,7,92,68,56,92,4,32,45,18,70,91,39,45,60,8,21,16,15,87,57,30,92,3,14,36,91,13,40,80,35,38,96,73,25,41,22,64,32,28,96,47,44,3,1,87,81,2,82,19,77,74,95,91,87,38,48,93,15,32,4,92,5,48,21,21,40,90,38,25,91,66,18,30,46,27,50,55,79,77,11,24,3,28,94,94,82,55,98,27,22,21,15,30,15,85,16,16,67,94,92,85,10,26,78,7,31,70,4,2,41,10,74,94,31,5,58,67,43,39,35,83,95,9,83,70,11,36,4,22,94,65,55,73,28,55,72,62,36,94,66,68,28,86,81,69,80,62,15,91,69,98,90,90,88,56,78,98,9,4,82,44,96,91,95,94,25,25,27,4,40,66,53,45,55,19,49,58,63,89,6,3,82,32,42,55,90,55,26,73,65,77,87,95,83,83,57,95,82,95,85,48,1,18,97,62,65,15,69,4,8,72,69,46,94,60,25,11,41,83,51,72,69,51,2,24,86,91,93,30,89,73,66,16,29,29,47,13,65,36,86,71,34,8,65,65,86,2,62,44,15,19,50,1,44,54,3,31,86,21,78,21,98,8,6,41,40,14,44,77,31,49,55,76,33,55,78,64,62,28,41,51,34,46,17,76,80,11,85,80,47,61,59,8,30,33,68,87,46,35,2,99,78,25,30,40,15,24,70,79,13,19,84,94,87,1,90,99,84,51,13,89,8,62,8,11,9,79,28,75,13,42,64,52,17,48,26,91,53,15,21,42,65,43,71,72,51,97,43,68,45,9,29,99,99,44,86,79,52,25,40,25,76,93,60,56,56,82,91,87,92,96,87,53,34,30,81,6,7,19,23,91,14,97,23,43,81,79,32,45,3,20,82,87,4,38,31,97,93,36,96,93,53,13,88,25,59,39,51,17,91,72,14,69,18,75,41,84,28,63,49,65,9,35,61,31,34,77,66,87,66,76,87,70,13,59,81,67,49,45,71,40,34,12,46,31,86,64,43,57,34,86,12,74,41,98,14,74,49,65,12,28,78,61,80,23,67,64,78,15,4,21,97,25,5,22,45,69,90,79,26,71,59,86,6,23,56,58,67,96,16,16,71,12,85,17,27,56,80,40,45,12,41,28,3,65,69,82,6,23,14,3,79,22,99,2,24,19,20,12,88,99,93,35,8,43,62,8,98,98,11,73,40,34,24,6,34,20,62,84,28,57,27,78,10,73,3,18,58,72,40,98,90,35,78,46,4,67,34,92,62,29,18,34,54,67,67,68,16,65,49,15,67,94,6,36,1,35,87,93,27,19,88,15,47,75,20,70,47,51,77,45,56,70,60,48,65,32,52,9,61,30,3,17,36,25,44,47,31,4,37,81,70,65,29,24,41,73,94,84,76,55,85,57,75,76,57,14,6,49,26,96,30,80,97,9,46,1,1,8,38,28,83,58,16,20,16,85,28,57,19,21,26,54,19,31,49,11,64,34,41,56,1,84,85,64,98,68,77,91,54,45,48,16,51,12,5,14,17,58,47,96,43,78,58,55,4,42,22,95,93,17,73,79,47,34,4,18,49,95,91,8,99,69,38,61,21,58,84,35,6,54,20,20,90,34,87,71,21,78,41,62,38,9,40,46,85,11,85,36,96,18,86,14,40,34,48,27,27,17,51,56,61,36,35,18,54,95,84,75,46,62,29,71,80,58,39,38,61,18,19,95,89,86,95,92,5,33,67,46,89,4,74,41,59,82,78,64,43,54,74,21,75,52,77,30,71,37,67,7,18,17,43,48,3,34,94,13,96,42,47,65,79,91,72,84,65,97,73,39,3,59,20,54,9,22,27,90,91,97,58,31,84,54,46,52,65,79,87,25,50,53,76,25,3,84,53,16,98,81,78,83,81,7,5,56,7,24,50,27,13,64,54,13,19,90,9,7,98,24,8,75,13,84,99,75,44,68,21,17,29,45,55,25,50,44,80,18,24,15,48,15,11,74,77,38,86,38,31,88,50,99,56,66,37,74,94,16,9,58,41,42,24,87,35,72,95,1,26,28,91,81,24,70,92,59,14,72,5,96,34,6,42,90,81,91,9,37,3,83,18,38,83,22,36,31,33,49,43,14,84,83,4,37,74,98,81,63,15,1,91,5,47,66,36,16,14,54,74,28,90,78,42,85,3,66,35,89,62,2,72,99,91,28,33,87,85,19,98,11,18,34,14,70,42,49,83,76,8,45,13,46,89,4,44,96,7,83,91,19,9,74,53,10,81,12,47,88,18,63,15,8,66,42,21,45,92,77,2,84,45,8,98,67,67,63,60,1,74,71,93,98,83,21,65,33,4,65,77,78,85,79,98,80,59,49,82,57,46,28,51,31,71,58,7,99,57,85,42,57,39,33,21,79,61,99,69,88,6,13,71,84,67,9,34,80,93,65,10,78,40,24,15,53,65,97,28,71,35,78,81,62,47,53,44,77,84,22,18,59,11,89,94,21,83,43,24,91,38,79,82,92,29,48,91,40,52,79,2,48,50,33,14,18,55,19,99,32,44,47,49,21,93,99,25,48,90,86,76,16,23,84,56,50,41,77,89,20,55,61,75,78,1,36,14,28,8,94,73,11,40,59,21,93,30,77,92,24,77,83,81,75,16,63,85,47,66,3,37,9,76,28,77,70,75,53,62,55,91,28,54,59,17,91,6,22,48,91,21,33,62,31,44,72,42,15,18,98,64,84,89,28,34,75,10,86,28,19,8,87,14,30,28,30,65,9,45,56,55,56,98,86,72,97,39,75,97,22,99,11,98,1,47,85,18,87,64,88,6,71,91,92,80,63,99,41,24,61,55,51,59,70,49,14,64,7,5,63,93,94,72,68,98,11,84,21,93,63,59,87,41,28,78,53,23,33,84,93,25,83,1,95,84,85,65,12,91,8,49,86,89,20,52,23,52,39,84,31,48,40,81,43,85,83,39,11,85,59,26,60,42,70,10,39,57,83,8,5,27,44,34,12,66,90,22,73,6,49,68,42,67,67,73,73,85,54,59,87,86,66,63,4,2,95,61,53,7,87,63,52,43,97,21,53,89,74,6,70,20,38,50,64,47,66,15,8,26,58,67,3,27,56,43,59,64,6,22,92,30,94,9,53,20,10,27,92,6,17,40,7,15,55,94,97,58,62,39,63,20,17,19,85,77,86,86,81,99,68,34,83,55,25,89,23,44,15,45,14,35,15,46,17,77,4,63,23,36,83,60,53,35,7,92,78,26,35,74,27,25,70,76,23,95,93,25,57,97,20,47,87,87,24,82,96,68,72,3,44,19,29,30,13,88,39,26,18,73,80,11,1,15,2,70,4,84,22,38,56,80,8,74,99,91,4,9,93,62,66,96,99,6,34,1,75,85,78,84,32,22,69,93,55,4,69,39,44,8,47,81,57,89,6,14,15,35,39,32,32,25,61,63,51,78,63,22,49,9,87,60,5,89,75,72,47,41,90,41,29,12,64,28,9,37,31,44,83,10,81,52,29,95,49,43,21,42,30,46,52,58,25,97,45,25,68,10,37,44,45,44,3,18,2,17,60,41,46,71,95,90,50,8,13,11,12,89,7,15,42,53,56,41,54,69,52,58,74,20,56,21,78,60,23,8,3,83,10,45,77,49,69,9,85,96,49,52,94,72,65,46,49,10,69,13,7,58,51,30,34,24,17,55,72,44,80,4,41,59,26,8,30,72,80,44,37,20,66,13,91,87,57,83,46,30,39,79,76,92,43,71,63,75,81,82,74,40,12,39,53,35,74,18,82,66,43,32,9,89,1,91,46,83,51,74,67,57,88,24,44,2,35,66,96,5,87,35,87,96,29,15,91,91,88,97,74,38,18,90,56,64,11,25,47,71,18,96,27,88,93,19,36,13,60,55,56,42,19,71,22,25,64,50,12,9,54,9,65,33,70,38,14,45,46,24,61,65,60,47,58,77,60,55,32,67,96,16,78,39,42,63,91,22,51,3,68,38,45,63,98,54,72,56,87,89,63,56,52,14,32,49,11,6,65,52,84,78,75,3,89,80,83,83,6,51,91,8,42,43,53,32,24,73,38,41,84,12,96,41,10,51,13,3,29,22,98,92,96,23,66,58,23,12,73,38,74,79,59,76,87,14,86,49,37,23,3,75,2,82,2,74,14,52,55,89,85,56,41,31,20,59,83,66,76,21,32,14,21,66,17,93,1,57,65,27,78,68,51,21,48,14,6,81,76,72,94,90,15,93,89,28,95,70,53,92,57,61,18,59,11,21,43,16,17,28,72,68,21,64,76,3,17,43,80,98,19,46,29,58,95,23,80,61,27,59,88,76,4,28,34,74,77,5,92,32,16,78,98,76,66,88,85,47,21,16,97,64,46,27,48,26,21,70,72,75,83,62,56,87,33,60,66,62,91,91,37,40,77,23,64,68,87,64,47,82,58,64,92,58,37,89,65,51,28,60,25,73,53,89,29,39,70,17,8,52,77,96,67,89,22,15,19,80,92,58,77,97,35,61,53,51,36,8,77,96,15,5,45,71,16,8,29,86,80,60,3,11,21,55,79,26,9,71,12,99,52,72,70,78,20,3,76,86,70,56,12,57,16,97,29,8,50,62,70,57,95,18,79,22,15,47,92,15,30,71,59,63,16,92,67,87,81,49,61,81,64,2,40,13,63,43,46,88,1,4,83,74,43,73,6,32,58,6,75,60,53,27,70,78,25,56,77,35,32,80,82,67,61,17,49,30,9,97,59,88,42,74,38,22,65,99,21,3,45,49,96,15,62,25,74,47,96,64,11,72,41,54,85,39,74,1,78,99,28,24,57,17,18,14,50,83,45,34,3,97,86,3,81,62,33,28,99,66,95,2,96,3,2,29,80,38,28,89,41,13,91,77,35,13,72,3,90,41,23,20,14,77,4,52,93,11,32,52,53,67,97,32,4,89,25,15,22,74,17,95,84,65,10,2,82,6,65,25,83,43,17,65,66,58,74,66,36,50,34,26,74,15,32,63,27,5,99,94,26,40,81,45,43,22,51,55,26,19,76,78,72,23,29,60,80,47,56,81,54,17,68,91,63,41,15,17,97,58,92,58,65,85,74,8,36,91,31,39,67,30,72,13,26,95,69,39,62,43,49,25,66,44,75,2,86,59,62,59,53,67,96,6,73,3,68,65,50,64,85,68,86,79,12,94,79,9,49,76,56,41,28,15,12,84,1,70,66,86,90,27,34,21,20,78,61,36,36,59,70,82,88,35,52,26,56,2,17,54,9,52,50,80,41,2,12,45,4,99,54,66,95,28,25,75,43,54,31,16,74,55,98,27,80,25,59,62,54,68,3,57,4,23,16,86,55,86,39,88,85,76,64,85,39,29,46,43,96,63,90,29,20,20,16,78,35,14,9,71,26,34,43,8,20,77,34,89,70,65,25,39,50,34,17,13,86,23,73,6,9,68,78,5,74,90,27,86,21,22,11,38,15,55,10,77,68,11,41,11,98,68,54,65,79,84,18,3,59,77,4,50,90,73,97,32,54,75,64,97,28,59,4,16,42,19,60,81,83,51,58,24,88,22,6,61,36,26,63,41,55,68,77,91,70,2,29,96,33,28,65,4,58,3,27,30,28,13,75,13,22,36,54,7,22,88,86,7,79,18,87,56,65,88,9,35,68,74,85,53,4,64,4,44,17,97,4,56,23,13,43,42,50,16,66,47,65,58,95,20,25,15,8,50,61,52,95,39,41,95,37,9,53,60,99,38,30,60,58,20,89,11,73,71,41,31,85,42,84,90,96,99,95,82,50,32,86,67,41,95,40,10,53,54,41,66,90,57,87,30,62,74,6,66,89,58,59,4,85,70,19,33,14,49,28,85,29,32,18,89,34,12,58,79,62,99,89,28,69,29,17,6,9,6,27,97,4,8,48,92,5,26,18,64,38,5,79,30,48,46,16,78,59,29,82,31,79,43,80,19,82,5,52,26,23,9,48,2,94,9,20,86,89,44,24,29,51,27,62,87,39,61,66,6,61,35,22,22,82,70,76,69,16,26,70,66,83,98,41,7,74,59,20,40,85,8,39,6,71,8,6,83,5,76,99,74,40,89,85,77,56,76,40,11,14,55,93,47,97,89,88,57,46,38,27,61,88,95,28,39,6,45,42,62,26,50,95,96,88,75,78,40,58,13,54,28,94,52,75,63,81,93,84,27,47,33,16,32,40,52,6,38,34,10,99,10,63,16,81,70,80,62,80,2,85,52,82,8,18,59,53,38,80,16,51,70,90,62,38,90,84,99,57,13,81,14,43,57,22,30,8,29,84,62,50,44,38,99,4,11,22,52,66,1,30,54,94,8,2,28,90,37,85,43,40,84,47,52,17,42,8,96,3,72,40,31,85,52,3,14,83,35,16,12,70,61,15,87,7,22,36,41,91,2,73,36,40,50,14,35,13,57,50,3,39,87,51,53,28,49,23,51,49,98,72,47,91,38,92,83,78,26,90,26,40,44,74,45,84,88,90,19,73,48,13,54,44,43,40,60,19,97,78,44,60,16,34,48,81,74,15,84,76,19,17,66,86,13,78,61,14,47,72,10,6,96,88,18,33,75,37,55,5,23,78,13,14,91,43,80,33,97,99,22,38,4,9,24,91,31,64,16,18,69,8,72,22,57,52,50,14,41,8,45,71,7,44,74,43,33,84,7,61,76,29,96,95,28,98,29,95,39,73,48,40,86,95,7,4,89,15,34,63,67,24,97,60,91,5,18,25,29,46,76,73,21,52,2,58,59,33,16,66,76,49,67,21,59,80,40,87,27,44,30,8,80,76,6,96,75,87,64,9,86,95,15,4,81,61,2,6,78,39,34,53,19,13,73,18,85,84,75,65,44,72,99,87,8,32,57,93,93,31,83,50,35,69,82,11,82,52,57,37,28,1,22,57,37,21,73,83,60,36,59,32,73,71,56,90,68,24,32,86,9,80,21,48,57,88,53,74,63,42,1,32,76,95,43,60,20,40,52,2,87,35,9,26,1,17,97,85,57,95,13,17,78,93,56,10,26,71,40,26,46,7,69,70,22,52,79,94,44,9,38,77,64,15,58,7,35,29,56,42,77,75,85,77,44,69,79,99,43,97,54,98,27,44,87,74,19,83,98,69,68,33,28,2,6,38,58,57,27,87,35,18,98,95,84,82,71,39,10,29,78,38,7,99,72,67,85,82,45,9,71,35,88,44,2,61,32,91,2,6,95,31,53,57,62,51,32,8,34,16,20,22,41,58,47,2,56,43,92,72,8,87,69,5,42,9,4,19,19,13,3,68,72,34,93,52,87,12,94,66,58,93,4,28,21,82,40,75,88,25,59,6,56,9,6,10,29,88,1,49,94,27,83,15,63,65,33,94,50,56,51,33,72,84,47,16,77,30,72,7,93,48,48,12,56,16,62,31,14,65,27,34,10,97,52,62,53,10,12,25,47,63,85,14,54,59,64,88,95,5,19,84,83,45,64,14,76,83,59,30,50,7,82,21,40,94,52,79,86,99,55,54,51,32,74,80,71,69,8,12,90,72,24,62,71,66,36,77,14,15,90,83,46,90,34,44,69,89,22,33,16,89,38,70,25,60,1,19,8,97,52,41,73,85,27,1,80,71,48,8,55,7,45,19,92,90,64,91,20,44,16,37,25,41,22,38,42,47,79,64,94,93,67,79,65,76,47,53,97,11,42,69,61,26,60,36,18,3,28,52,34,41,42,34,20,62,12,80,81,47,90,57,39,27,47,19,92,38,72,67,36,65,35,47,87,62,61,29,6,35,46,13,25,11,70,1,79,39,96,42,91,55,38,48,30,35,36,18,5,37,8,24,99,86,15,48,43,86,51,20,34,54,20,10,76,88,28,66,91,46,15,38,56,52,98,72,58,83,7,67,84,23,66,61,7,98,80,28,68,86,66,73,77,65,71,51,98,82,93,76,52,36,81,93,30,75,15,47,19,23,40,78,74,85,76,81,92,92,24,55,59,5,6,10,50,80,10,94,53,54,79,43,25,90,60,70,56,29,72,21,12,48,51,82,14,88,53,6,57,89,78,18,10,56,7,33,84,3,35,88,16,23,87,55,81,78,9,57,78,49,8,91,40,69,39,33,70,64,87,34,25,99,98,56,1,51,99,33,70,98,32,64,6,76,64,88,14,80,33,80,14,5,31,41,88,86,32,23,96,77,83,40,18,17,15,37,6,4,13,5,21,97,47,97,87,19,56,38,4,78,40,67,26,34,44,43,27,56,13,11,65,55,39,80,62,63,9,60,40,29,48,50,92,62,28,29,92,8,22,91,68,46,89,14,75,27,95,1,71,79,13,55,49,79,45,35,98,33,72,96,38,31,23,90,55,1,47,44,40,20,62,9,80,5,57,31,47,52,27,46,62,75,75,63,74,55,48,55,22,94,87,70,63,81,59,72,89,48,96,5,85,44,24,21,47,66,88,76,66,18,53,78,35,76,22,50,3,33,34,61,38,86,86,68,48,9,65,57,50,84,60,58,34,76,94,72,69,48,48,72,87,80,35,47,86,13,52,3,1,8,50,20,49,81,25,92,66,46,44,39,56,19,66,88,22,30,95,61,63,70,88,6,80,96,80,97,18,8,62,51,47,80,83,4,29,44,49,33,41,91,97,26,31,21,8,42,31,75,34,26,50,30,9,21,79,4,60,47,96,83,2,66,9,80,49,1,64,46,82,94,81,63,74,42,96,15,45,5,90,85,80,30,25,55,2,88,36,59,14,16,1,50,44,49,52,66,44,28,65,93,66,46,53,28,85,22,97,11,77,42,8,98,14,94,85,45,27,67,26,6,5,15,56,23,89,47,54,86,20,85,40,78,77,10,75,41,91,91,74,10,94,94,77,4,51,29,37,72,64,38,71,89,62,58,77,32,94,60,12,95,5,4,53,84,55,83,63,60,39,71,88,46,17,50,31,33,81,5,57,83,83,46,18,18,38,49,87,25,16,75,72,65,61,57,34,90,20,98,83,62,69,45,86,1,77,49,59,84,73,45,47,58,98,2,1,44,92,96,52,2,99,5,57,30,77,56,79,26,11,17,57,47,88,54,2,45,16,77,78,42,79,22,28,72,34,90,10,17,74,87,91,22,80,34,5,17,1,98,84,41,91,51,89,37,7,77,20,66,29,1,54,33,23,9,40,14,91,43,8,56,33,97,94,39,11,75,12,43,16,1,8,21,98,42,36,57,26,99,61,20,3,65,1,79,81,17,70,93,14,18,53,68,29,65,28,25,17,42,83,67,41,19,29,6,57,46,81,19,5,2,33,60,11,60,3,89,47,94,89,32,49,48,98,20,62,96,39,12,84,24,96,23,91,99,52,66,22,73,85,93,81,26,21,6,8,43,41,51,86,7,31,26,16,82,65,26,16,32,49,16,58,78,60,5,61,55,2,87,76,58,20,62,62,50,6,66,80,10,24,34,81,78,53,84,76,8,8,9,14,42,44,95,85,25,90,28,35,74,71,94,11,64,81,83,64,53,47,30,81,49,16,32,57,27,61,61,97,65,55,74,83,98,68,76,64,56,87,55,72,16,61,94,4,21,88,25,38,88,14,93,43,36,99,6,11,39,14,48,30,35,38,42,51,69,91,26,37,64,28,83,90,83,46,64,96,97,58,10,34,39,27,48,50,91,15,37,8,62,82,60,62,24,96,23,21,65,94,80,95,55,52,8,18,61,75,49,88,22,74,37,56,88,88,27,20,18,30,12,87,14,89,89,6,24,68,14,97,47,39,19,17,2,66,38,62,32,74,8,1,15,18,99,48,79,27,1,23,62,89,22,43,27,12,48,58,76,58,65,96,67,17,24,32,86,54,94,28,56,67,66,88,71,9,98,68,62,97,27,4,72,14,58,93,3,65,87,80,87,99,59,89,59,26,34,5,63,85,63,77,38,34,20,98,90,93,46,28,61,22,53,63,95,52,61,48,93,38,84,65,62,77,60,51,90,13,22,54,29,42,20,15,54,75,56,70,5,57,52,62,20,85};


int main(){
/*	FILE *fp;
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

	printf("Quick sort in C:\n");
 */
    int i;

	quickSort(numbers, 0, 9999);
	for (i = 0; i < 10000; i++){
		printf("%d, ", numbers[i]);
	}
 
}

void quickSort(int numbers[], int first, int last){
	int splitPoint;
	if (first < last) {
		splitPoint = split(numbers, first, last);
		quickSort(numbers, first, splitPoint - 1);
		quickSort(numbers, splitPoint + 1, last);
	}
}

int split (int numbers[], int first, int last){
   int pivot, i, j, k;

   	pivot = numbers[first];
   	i = first;
   	j = last+1;
		
   	while(1) {
	   	do { 
	   		++i; 
	   	} while ( numbers[i] <= pivot && i <= last);
	   	do {
	   		--j;
	   	} while ( numbers[j] > pivot );

	   	if( i >= j ) 
	   		break;
	   	//swap:
	   	k = numbers[i];
	   	numbers[i] = numbers[j];
	   	numbers[j] = k;
   	}
   	//final swap:
   	k = numbers[first];
   	numbers[first] = numbers[j];
   	numbers[j] = k;
   	return j;
}