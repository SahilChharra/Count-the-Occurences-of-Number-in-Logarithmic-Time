# Count the Occurences in (logn) Time

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

Code:
``` #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Occurence(int nums[], int n, int target, int searchFirst)
{
    int low = 0;
	int high = n - 1;
 
    int result = -1;
 
    while (low <= high)
    {
        int mid = (low + high)/2;
 
        if (target == nums[mid])
        {
            result = mid;
 
            // go on searching towards the left (lower indices)
            if (searchFirst) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
 
        else if (target < nums[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
 
    return result;
}
 
int main()
{
    int target = 0;
    int target2 = 1;
    int target3 = 2;
    
    int size;
    cout<<"Enter Size of Array :- ";
    cin>>size;
    int nums[size];
    
    for(int i=0;i<size;i++)
    {
    	nums[i] = rand()%3;
	}
	for(int i=0;i<size;i++)
	{
		cout<<nums[i]<<" ";
	}
	
	sort(nums,nums+size);
		
	int f1 = binarySearch(nums, size, target, 1);
	int l1 = binarySearch(nums, size, target, 0);
    int c1 = l1 - f1 + 1;
	
	int f2 = binarySearch(nums, size, target2, 1);
	int l2 = binarySearch(nums, size, target2, 0);
    int c2 = l2 - f2 + 1;
	
	int f3 = binarySearch(nums, size, target3, 1);
	int l3 = binarySearch(nums, size, target3, 0);
    int c3 = l3 - f3 + 1;
    
    if(c1>c2 && c1>c3)
    {
    	cout<<endl<<"X"<<endl;
	}
	else if(c2>c1 && c2>c3)
	{
		cout<<endl<<"Y"<<endl;
	}
	else{
		cout<<endl<<"Z"<<endl;
	}
	
	
    if (f1 != -1) {
        cout<<endl<<"Element "<<target<<" occurs "<<c1<<" times" <<endl;
    }
    else {
    	cout<<endl<<"Element not found in the array"<<endl;
    }
    if (f2 != -1) {
        cout<<endl<<"Element "<<target2<<" occurs "<<c2<<" times" <<endl;
    }
    else {
    	cout<<endl<<"Element not found in the array"<<endl;
    }
    if (f3 != -1) {
        cout<<endl<<"Element "<<target3<<" occurs "<<c3<<" times" <<endl;
    }
    else {
    	cout<<endl<<"Element not found in the array"<<endl;
    }
	 
    return 0;
} 

```

Output:

```

Enter Size of Array :- 20
2 2 1 1 2 1 0 0 1 2 2 2 1 0 1 2 1 2 0 0
Z

Element 0 occurs 5 times

Element 1 occurs 7 times

Element 2 occurs 8 times

--------------------------------

Enter Size of Array :- 18
2 2 1 1 2 1 0 0 1 2 2 2 1 0 1 2 1 2
Z

Element 0 occurs 3 times

Element 1 occurs 7 times

Element 2 occurs 8 times

--------------------------------

```
