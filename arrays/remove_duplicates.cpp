#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

void print_numbers(vector<int> nums)
{	
	printf("\n\nresult: ");
	for(int &x: nums) printf("%d, ", x); 
	printf("\n");
	
}


class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
	//condition that the nums vector contains numbers in non-decreasing order
		
	for(int i = 0 ; i < nums.size(); ++i)
	{	
		if(i+1 == nums.size())break;//prevents index out of bounds
		

	  	printf("\ncurrent num %d" ,nums[i]);
	    	if(nums[i] == nums[i+1])
		{	printf(".. duplicate: %d\n", nums[i+1]);
			nums.erase(nums.begin()+i);
		       	i--; //reason: need to evaluate the current num until no duplicates							
		}	
	}
	print_numbers(nums);	
	return nums.size();
    
        
    }
};


int main()
{
	//tests
	Solution newSolution;
	
	vector<int> test = {0,0,1,1,1,2,2,3,3,3,4,4};
	newSolution.removeDuplicates(test);
	printf("\n");	

	

	vector<int> test_two = {0,0,1,8};
	newSolution.removeDuplicates(test_two);

}

