#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        
	char current_char; 
        for(int i = s.size()-2; i >= 0; --i) //-2 as last index already in place
        {
	    //erase existing and add to the back of vector
            current_char = s[i];
            s.erase(s.begin()+i);
            s.push_back(current_char);
            
        }

	//for(char c: s)printf("%c,",c);
        
    }
};


int main()
{

	Solution string_solution;
	//string_solution.reverseString(string);

	vector<char> string = {'h','a','l','o','!'};
	string_solution.reverseString(string);


}
