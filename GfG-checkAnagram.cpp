/*
Given two strings a and b consisting of lowercase characters. 
The task is to check whether two given strings are anagram of each other or not. 
An anagram of a string is another string that contains same characters, 
only the order of characters can be different. For example, “act” and “tac” 
are anagram of each other.
*/
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

string checkAnagram(string string1, string string2){
    map<int,int> check_Anagram;
    int len1 = string1.length();
    int len2 = string2.length();
    for(int i = 0; i<len1; i++){
        int val = string1[i];
        check_Anagram[val]++;
    }
    
    for(int j = 0; j<len2; j++){
        int val2 = string2[j];
        check_Anagram[val2]--;
    }
    
    for(auto itr = check_Anagram.begin(); itr!=check_Anagram.end(); itr++)
    {
        if(itr->second != 0){
            return "NO";
        }
    }
    
    return "YES";
}

int main() {
	int tc;
	cin>>tc;
	
	for(int i = 0; i<tc; i++){
	    string string1, string2;
	    cin>>string1>>string2;
	    string value = checkAnagram(string1, string2);
	    cout<<value;
	}
	return 0;
}