# DAA-Assignment-1

Name:- Sahil.R.Chharra
Roll no:- A-61
Subject :- Design and Analysis of Algorithms
Branch:- CSE-A

Problem Statement

Accept a One dimensional array using random number generator.
The array may be in the range of [0,1,2] [Only three numbers are permitted]
Scan the array and print "X" if number "0" is more than number of "1" and "2".
Print "Y" if number of "1" are more than "0" and "2"
Print "Z" if number of "2" are more than "0" and "1"
Expected complexity O(log n)


Algorithm/Logic:

Main Code:

Created a Modified Binary Search Function named as OccurenceSearch()
Accepted a 1-D randomized Array of [0,1,2] with inputed Size
Sorted the Array
Passed the Array with parameters as Array,Size and Target Element

Function Occurence Search(int nums[], int n, int target, int searchFirst):

Intialized low = 0 and high = n-1
Created a variable result and intialized to -1
Created a while loop such that low<=high
in this Intialized mid = (low+high)/2
if target is equal to nums[mid] then
  put mid value in result
  Created a if else loop for left searching or right searching
if target is less than to nums[mid] then
  high = mid-1
  low = mid+1
  
Return the Result

