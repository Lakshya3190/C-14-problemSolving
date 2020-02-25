/*
Consider a word consisting of lowercase English alphabetic letters, where each letter is 1mm wide. 
Given the height of each letter in millimeters (mm), find the total area that will be highlighted 
by blue rectangle in mm^2 when the given word is selected in our new PDF viewer.

*/


using namespace std;

int main(){
    int width[26];
    char letters[26] = {'a','b','c','d','e','f','g','h','i','j',
    'k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    string word = "";

    
    for(int i=0;i<26;i++){
        cin>>width[i];
    }

    cin>>word;
    int len = word.length();
    int word_weight[len];
    for(int j=0;j<len;j++){
        for(int k=0;k<26;k++){
            if(word[j]==letters[k]){
                word_weight[j] = width[k];
            }
        }
    }
    int area;
    int max_height = *max_element(word_weight, word_weight + len);
    area = len*max_height;
    cout<<area;
}