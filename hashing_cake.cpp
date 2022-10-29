#include <iostream>
#include <vector>
#include <stdio.h>
#include <set>
#include <algorithm>
#include <map>
using namespace std;

// Problem -1

// // first solution O(n)
// bool CanTwoMoviesBeSeen(const vector <int> & movieLengths,int flightLength){
//     set <int> movieLenghtsSeen;
//     for(int firstMovieLength:movieLengths){
//         int matchingSecondMovieLength=flightLength-firstMovieLength;
//         if(movieLenghtsSeen.find(matchingSecondMovieLength)!=movieLenghtsSeen.end()){
//             return true;
//         }
//         movieLenghtsSeen.insert(firstMovieLength);
//     }
//     return false;
// }

// // second solution O(n^2)
// int main(){
//     vector <int> v;
//     vector<bool>res;
//     int flight_length;
//     cin>>flight_length;
//     int n;
//     cin>>n;
//     int num;
//     for(int i=0;i<n;i++){
//         cin>>num;
//         v.push_back(num);
//     }

//     for(int i=0;i<v.size()-1;i++){
//         for(int j=i;j<v.size();j++){
//             if(v[i]+v[j]==flight_length){
//                 res.push_back(true);
//             }
//         }
//     }
// }

// problem -2

// bool CheckPalindrome(string &str){

//     int i=0;
//     int j=str.length()-1;
//     while(j>i){
//       if(str[i++]!=str[j--]){
//       return 0;
//       }

//     }
//     return 1;
// }

// check the permutations of the string is palendrome or not

// bool checkPalindrome(string &str){
//   set <char> unpairedCharecters;
//   for(char c: str){
//     if(unpairedCharecters.find(c)!=unpairedCharecters.end()){
//       unpairedCharecters.erase(c);
//     }
//     else{
//       unpairedCharecters.insert(c);
//     }
//   }
//   return unpairedCharecters.size()<=1;
// }

// bool check(string &str){
//     vector<char> unpaired;
//     for (char c:str){
//         if(auto itr=binary_search(unpaired.begin(),unpaired.end(),c)){
//             unpaired.erase(itr);
//         }
//         else{
//             unpaired.push_back(c);
//         }
//     }
//     return unpaired.size()<=1;
// }

// int main(){
//     string str;
//     cin>>str;
//     cout<<boolalpha<<checkPalindrome(str)<<endl;

// }

// problem-3
// splitting of words
// vector <string> splitwords(const string &inputString){
//   vector <string> words;
//   size_t currentWordStartIndex=0;
//   size_t currentWordLength=0;
//   for(size_t i=0;i<inputString.length();i++){
//     char character=inputString[i];
//     if(isalpha(character)){
//       if(currentWordLength==0){
//         currentWordStartIndex=i;
//       }
//       ++currentWordLength;
//     }
//     else{
//       if(currentWordLength>0){
//         string currentword=inputString.substr(currentWordStartIndex,currentWordLength);
//       words.push_back(move(currentword));
//       }
//     }
//   }
//   return words;
// }

class WordCloudData
{
private:
  map<string, size_t> wordsToCounts;
   string toLowerCase(const string &word){
    string result=word;
    transform(result.begin(),result.end(),result.begin(),::tolower);
    return result;
  }
    string Capitalize(const string &word){
      string result=word;
      result[0]=toupper(result[0]);
      return result;
    }
  void addWordToHashMap(const string &word){
    auto it=wordsToCounts.find(word);
    if(it !=wordsToCounts.end()){
      it->second++;
    }
    else if((it=wordsToCounts.find(toLowerCase(word)))!=wordsToCounts.end()){
      it->second++;
    }
    else if((it=wordsToCounts.find(Capitalize(word)))!=wordsToCounts.end()){
      size_t newCount=it->second+1;
      wordsToCounts.erase(it);
      wordsToCounts.insert(make_pair(word,newCount));
    }
    else{
      wordsToCounts.insert(make_pair(word,1));
    }
  }


  void populateWordsToCounts(const string &inputString)
  {
    size_t currentWordStartIndex = 0;
    size_t currentWordLength = 0;
    for (size_t i = 0; i < inputString.size(); i++)
    {
      char character = inputString[i];
      if(i==inputString.length()-1){
        if (isalpha(character))
      {
        if (currentWordLength == 0)
        {
          currentWordStartIndex = i;
        }
        ++currentWordLength;
      }
      if (currentWordLength > 0)
      {
        string currentword = inputString.substr(currentWordStartIndex, currentWordLength);
        addWordToHashMap(currentword);
      }
    }
    else if(character==' '){
      if(currentWordLength>0){
        string currentword=inputString.substr(currentWordStartIndex,currentWordLength);
                addWordToHashMap(currentword);
                currentWordLength=0;

      }
    }
     else if (character == '.') {
                if (i < inputString.length() - 1 && inputString[i + 1] == '.') {
                    if (currentWordLength > 0) {
                        string currentWord = inputString.substr(currentWordStartIndex, currentWordLength);
                        addWordToHashMap(currentWord);
                        currentWordLength = 0;
                    }
                }
    }
    }
  }
};


// transform(Iterator inputBegin, Iterator inputEnd, Iterator OutputBegin, unary_operation) 