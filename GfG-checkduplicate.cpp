/*
Given a string, the task is to remove duplicates from it. Expected time 
complexity O(n) where n is length of input string and extra space O(1) under 
the assumption that there are total 256 possible characters in a string.

Note: that original order of characters must be kept same. 
*/

#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

void checkDuplicate(string string1){
    map<int, int> check_Anagram;
    int len1 = string1.length();
    for(int i = 0; i<len1; i++){
        int val = string1[i];
        check_Anagram[val]++;
    }
    
    for(auto itr = check_Anagram.begin(); itr!=check_Anagram.end(); itr++)
    {
        if(itr->second != 0){
            char letter = itr->first;
            cout<<letter;
        }
    }
}

int main() {
	int tc;
	cin>>tc;
	
	for(int i = 0; i<tc; i++){
	    string string1;
	    cin>>string1;
	    checkDuplicate(string1);
	}
	return 0;
}