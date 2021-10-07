#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;


class Solution {
public:
    bool isPalindrome(string s) 
    {

	   string alphanumeric_string;

	    for(char &c: s)
	    {//necessary to convert to lower and non-alphanumeric chars
 
		 if( 'a'<= tolower(c) && tolower(c) <= 'z' || '0' <= c && c <= '9')
			 alphanumeric_string += tolower(c);
	    }

	    int string_length = alphanumeric_string.size();
	    int reverse_count = string_length-1;
		
	    cout << "string being checked: " << alphanumeric_string<<endl;
	    for(int i=0; i < string_length; ++i)
	    {
	    	if(alphanumeric_string[i] != alphanumeric_string[reverse_count])
		{
			return false;	
		}
		reverse_count--;	
			
	    }
		
	    return true;
	    		
        
    }
};

int main()
{

	string s = "A man, a plan, a canal: Panama";
	cout <<  "\nexpected: amanaplanacanalpanama" << endl;

	Solution string_obj;
	printf("palindrome: %s\n", string_obj.isPalindrome(s) ? "true" : "false");


}
