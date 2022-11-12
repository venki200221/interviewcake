#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

// problem -1
// O(n)
// int findrotation_point(vector<string>words ){
//      int rotation_point;
//     for(int i=0;i<words.size()-1;i++)
//     {  
//         if(words[i]>words[i+1]){
//            rotation_point=i;
//            break;
//         }
//     }
//     return rotation_point+1;
// }


// // O(n^2)
// int findrotation_point1(vector<string>words){
//     int floorIndex=0;
//     int ceiling=words.size()-1;
//     while(floorIndex<ceiling){
//         int guess=floorIndex+((ceiling-floorIndex)/2);
//         if(words[guess]>=words[0]){
//            floorIndex=guess;
//         }
//         else{
//             ceiling=guess;
//         }

//         if(floorIndex+1==ceiling){
//              break;
//         }
//     }
//     return ceiling;
// }

// int main(){
//      const vector<string> words {
//     "ptolemaic",
//     "retrograde",
//     "supplant",
//     "undulate",
//     "xenoepist",
//     "asymptote",  
//     "babka",
//     "banoffee",
//     "engender",
//     "karpatka",
//     "othellolagkage",
// };
// cout<<findrotation_point(words);
// cout<<findrotation_point1(words);
// }


// problem-2

// int findReapeat(const vector<unsigned int >numbers){
// set<int>numberseen;
// for(auto num:numbers){
//     auto it=numberseen.find(num);
//     if(it!=numberseen.end()){
//         return num;
//     }
//     else{
//         numberseen.insert(num);
//     }
// }
// }

// int findRepeat(const vector<unsigned int>numbers)
// {
//     int repeat;
//     sort(numbers.begin(),numbers.end());
//     for(int i=0;i<numbers.size()-1;i++){
//         if(numbers[i]==numbers[i+1]){
//             repeat=i;
//         }
//     }
//     return repeat;
// }
// int main(){

// }


// problem -3
vector<int>sortScores(const vector <int> &unorderedScores,int highestPossibleScore){
    vector <int>scoreCounts(highestPossibleScore + 1);
    for(int score:unorderedScores){
        ++scoreCounts[score];
    }
    vector<int>sortedScores(unorderedScores.size());
    int currentSortedIndex=0;
    for(int score=highestPossibleScore;score>0;score++){
        sortedScores[currentSortedIndex]=score;
        ++currentSortedIndex;
    }
return sortedScores;
}