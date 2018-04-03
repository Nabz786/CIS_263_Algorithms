#!bin/bash
#Just for practice to creating the Bash Code for this project
#Author: Runquan Ye


#clean the screen first
clear

#compile and make the object
make

#Check the a.out file
if ! [ -f "a.out" ]; then
	echo "ERROR!!! The a.out file does not exist!"
fi

#First we are testing the bubble sort
	echo "We are Testing the Bubble Sort."
	echo "------------------Bubble Sort------------------"
	echo "We are Testing the Bubble Sort for 10 elements."
	time ./a.out 1 10
	
	echo "We are Testing the Bubble Sort for 100 elements."
	time ./a.out 1 100

	echo "We are Testing the Bubble Sort for 1000 elements."
	time ./a.out 1 1000

	echo "We are Testing the Bubble Sort for 10000 elements."
	time ./a.out 1 10000
	echo "------------------End of Bubble Sort------------------"

#Second we are testing the selection sort
	echo ""
	echo "We are Testing the Selection Sort."
	echo "------------------Selection Sort------------------"
	echo "We are Testing the Selection Sort for 10 elements."
	time ./a.out 2 10
	
	echo "We are Testing the Selection Sort for 100 elements."
	time ./a.out 2 100

	echo "We are Testing the Selection Sort for 1000 elements."
	time ./a.out 2 1000

	echo "We are Testing the Selection Sort for 10000 elements."
	time ./a.out 2 10000
	
	echo "We are Testing the Selection Sort for 10000 elements."
	time ./a.out 2 10000

	echo "We are Testing the Selection Sort for 1000000 elements."
	time ./a.out 2 1000000
	echo "------------------End of Selection Sort------------------"

#Third we are testing the insertion sort
	echo ""
	echo "We are Testing the Insertion Sort."
	echo "------------------Insertion Sort------------------"
	echo "We are Testing the Insertion Sort for 10 elements."
	time ./a.out 3 10
	
	echo "We are Testing the Insertion Sort for 100 elements."
	time ./a.out 3 100

	echo "We are Testing the Insertion Sort for 1000 elements."
	time ./a.out 3 1000

	echo "We are Testing the Insertion Sort for 10000 elements."
	time ./a.out 3 10000
	
	echo "We are Testing the Insertion Sort for 10000 elements."
	time ./a.out 3 10000

	echo "We are Testing the Insertion Sort for 1000000 elements."
	time ./a.out 3 1000000
	echo "------------------End of Insertion Sort------------------"

#Forth we are testing the merge sort
	echo ""
	echo "We are Testing the Merge Sort."
	echo "------------------Merge Sort------------------"
	echo "We are Testing the Merge Sort for 10 elements."
	time ./a.out 4 10
	
	echo "We are Testing the Merge Sort for 100 elements."
	time ./a.out 4 100

	echo "We are Testing the Merge Sort for 1000 elements."
	time ./a.out 4 1000

	echo "We are Testing the Merge Sort for 10000 elements."
	time ./a.out 4 10000
	
	echo "We are Testing the Merge Sort for 10000 elements."
	time ./a.out 4 10000

	echo "We are Testing the Merge Sort for 1000000 elements."
	time ./a.out 4 1000000
	echo "------------------End of Merge Sort------------------"

#Fifth we are testing the quick sort
	echo ""
	echo "We are Testing the Quick Sort."
	echo "------------------Quick Sort------------------"
	echo "We are Testing the Quick Sort for 10 elements."
	time ./a.out 5 10
	
	echo "We are Testing the Quick Sort for 100 elements."
	time ./a.out 5 100

	echo "We are Testing the Quick Sort for 1000 elements."
	time ./a.out 5 1000

	echo "We are Testing the Quick Sort for 10000 elements."
	time ./a.out 5 10000
	
	echo "We are Testing the Quick Sort for 10000 elements."
	time ./a.out 5 10000

	echo "We are Testing the Quick Sort for 1000000 elements."
	time ./a.out 5 1000000
	echo "------------------End of Quick Sort------------------"

	
