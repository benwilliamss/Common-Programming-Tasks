#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
	
	for(auto i = nums.begin(); i != nums.end(); i++)
	{		    
	    	if(*i == *(i+1) && i+1 != nums.end())//prevents going into memory locations beyond .end() 
		{	
			nums.erase(i); //erased at memory location
			i--;
				
		}
	}
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

	vector<int> test_two = {1,1,1,1,1,1,1,2};
	newSolution.removeDuplicates(test_two);

}

