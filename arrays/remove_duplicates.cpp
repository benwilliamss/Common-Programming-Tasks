#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
	printf("value at num[size]: %d", *(nums.end())); 
	
	 for(int i = 0 ; i < nums.size(); ++i)
	{	
		
		printf("current num: %d", nums[i]);	    
	    	if(nums[i] == nums[i+1] && i+1 < nums.size())
		{	printf(".. duplicate: %d", nums[i+1]);
			nums.erase(nums.begin()+i); //erased at memory location
			i--;
				
		}
		printf("\n");
	}
	printf("\n");
	for(int &x: nums)printf("%d, ",x);

    	return nums.size();	    
        
    }
};

int main()
{
	//tests
	Solution newSolution;
	
	vector<int> test = {0,0,1,1,1,2,2,3,3,4};
	newSolution.removeDuplicates(test);
	printf("\n");	

	

	vector<int> test_two = {0,1,2,3,4,5,5,5,8,8};
	newSolution.removeDuplicates(test_two);

}

