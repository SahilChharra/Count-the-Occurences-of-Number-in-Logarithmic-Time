#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int nums[], int n, int target, int searchFirst)
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