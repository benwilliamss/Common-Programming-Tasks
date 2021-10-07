#include<iostream>
#include<stdio.h>
#include<vector>
#include <algorithm>

using namespace std;


void print_shape(vector<vector<int>> shape)
{	
	vector<int> row; 
	printf("[");

	for(int i = 0; i< shape.size(); i++)
	{	
		row = shape[i];
		printf("[");
		for(int number: row)
		{
			printf("%d,", number);
		}
		printf("], ");
	}
	printf("]\n\n");
}


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {	//rotate 90 degrees clockwise
	//Trend: bottom column is always the first element of each row


	   
	   int row_size = matrix[0].size(); //pre exisitng row size 
	   vector<int> column_of_interest;
	   int number_of_columns = matrix.size();
	   
	   	    
	   for(int col_index = number_of_columns-1 ; col_index >= 0; col_index--)
	   {
		//start from the column at the back to the column at the front
		column_of_interest = matrix[col_index];
		
	    	for(int i = 0; i < row_size; ++i)
		{	//push the items to the back of each column from the column of interest
		
			matrix[i].push_back(column_of_interest[i]);
		}


	    	
	    
	   }
	  
	   for(int arr_index = 0; arr_index < number_of_columns; arr_index++)
	   {	
		 //remove elements old elements from each array
		 //This is equal in amount to the number of times we iterated through each row 
		 //hence +row_size is the amount of elements to be removed each time
	   	 matrix[arr_index].erase(matrix[arr_index].begin(),
				 matrix[arr_index].begin()+row_size);
	   }

	   printf("result: ");
	   print_shape(matrix);//print result of the shape/matrix


    }
};


int main()
{
	
	Solution matrix_obj;

		vector<vector<int>> matrix_one = {
		 {5,1,9,11}
		,{2,4,8,10}
		,{13,3,6,7}
		,{15,14,12,16}
	};
	printf("expected: [[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]\n\n");
	matrix_obj.rotate(matrix_one);

	vector<vector<int>> matrix_two = {
		{1,2,3}
		,{4,5,6}
		,{7,8,9}
	};
	printf("expected: [[7,4,1],[8,5,2],[9,6,3]\n");
	matrix_obj.rotate(matrix_two);
	

}
