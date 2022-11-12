#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<string.h>
#include <cstring>  
// #include <boost/algorithm/string.hpp>
using namespace std;

// problem-

// class meeting{
//     private:
//     unsigned int startTime;
//     unsigned int endTime;
    
//     public:
//     meeting(){
//        startTime=0;
//        endTime=0;
//     }

//     meeting(unsigned int start,unsigned int end){
//           startTime=start;
//           endTime=end;
//     }

//     unsigned int getStartTime() const{
//         return startTime;
//     }

//      unsigned int getEndTime() const
//     {
//         return endTime;
//     }

//     void setEndTime(unsigned int endTime)
//     {
//         this->endTime = endTime;
//     }

//     void setStartTime(unsigned int startTime)
//     {
//        this->startTime= startTime;
//     }

//     bool operator==(const meeting & other){
//         return 
//         startTime==other.startTime && endTime==other.endTime;
//     }

    
// };


// bool comparemeetingsByStartTime(
//     const meeting& firstmeeting,
//     const meeting& secondmeeting)
// {
//     return firstmeeting.getStartTime() < secondmeeting.getStartTime();
// }

// vector<meeting> mergeRanges(const vector<meeting>& meetings)
// {
//     // sort by start time
//     vector<meeting> sortedmeetings(meetings);
//     sort(sortedmeetings.begin(), sortedmeetings.end(), comparemeetingsByStartTime);

//     // initialize mergedmeetings with the earliest meeting
//     vector<meeting> mergedmeetings;
//     mergedmeetings.push_back(sortedmeetings.front());

//     for (const meeting& currentmeeting : sortedmeetings) {
//         meeting& lastMergedmeeting = mergedmeetings.back();

//         if (currentmeeting.getStartTime()
//                 <= lastMergedmeeting.getEndTime()) {
//             // if the current meeting overlaps with the last merged meeting, use the
//             // later end time of the two
//             lastMergedmeeting.setEndTime(max(lastMergedmeeting.getEndTime(),
//                 currentmeeting.getEndTime()));
//         }
//         else {
//             // add the current meeting since it doesn't overlap
//             mergedmeetings.push_back(currentmeeting);
//         }
//     }

//     return mergedmeetings;
// }
// int main(){
// meeting m1(0,1);
// meeting m2(3,5);
// meeting m3(4,8);
// meeting m4(9,10);
// vector <meeting> meet;
// meet.push_back(m1);
// meet.push_back(m2);
// meet.push_back(m3);
// meet.push_back(m4);

// vector <meeting> m;
// m=mergeRanges(meet);

// for(auto v:m){
//     cout<<v.getStartTime()<<"-"<<v.getEndTime()<<endl;
// }


// }

// problem-2  -reversing a string inplace

// int main(){
//     string str="venkii";
//     cout<<"string:"<<str<<endl;
//     for(int i=0,j=str.length()-1;i<j;i++,j--){
//         swap(str[i],str[j]);
//     }
//     cout<<"string reversed:"<<str<<endl;
// }


// problem-3  
// int main(){
//     vector<string> revstr;
//     char msg[100]="heelo there is an monkey";
//     char * ptr;  
//     string res=" ";
//     ptr= strtok(msg," ");
//         while (ptr != NULL)  
//     {  
//         revstr.push_back(ptr);
//         ptr = strtok (NULL, " ");  
//     } 
//     reverse(revstr.begin(),revstr.end());
//     for(auto s:revstr){
//        res.append(s);
//        res.append(" ");
//     }
//     cout<<res<<endl;
//     return 0;
// }

// problem-4

// int main(){
// const vector<int> myVector {3, 4, 6, 10, 11, 15};
// const vector<int> alicesVector {1, 5, 8, 12, 14, 19};
// vector <int> mergedVector;
// int i,j,k;
// i=0;
// j=0;
// k=0;
// while(i<myVector.size() && j< alicesVector.size()){
//     if(myVector[i]<alicesVector[j]){
//         mergedVector.push_back(myVector[i]);
//         i++;
//     }
//     else{
//         mergedVector.push_back(alicesVector[j]);
//             j++;
        
//     }
// }
// for(;i<myVector.size();i++){
//     mergedVector.push_back(myVector[i]);
// }
// for(;j<alicesVector.size();j++){
//     mergedVector.push_back(alicesVector[j]);
// }

// for(auto v:mergedVector){
//     cout<<v<<endl;
// }


// }


// problem -5

bool isFirstComeFirstSergved(vector <int> &takeOutOrders,vector <int> & dineInOrders,vector <int> &servedOrders){
auto takeOutOrdersIter=takeOutOrders.cbegin();
auto dineInOrdersIter=dineInOrders.cbegin();
for(int order:servedOrders){
    if(takeOutOrdersIter !=takeOutOrders.cend() &&  order == *takeOutOrdersIter ){
        ++takeOutOrdersIter;
    }
    else if(dineInOrdersIter != dineInOrders.cend() && order == *dineInOrdersIter){
        ++dineInOrdersIter;
    }
    else{
        true;
    }
}
if(dineInOrdersIter !=dineInOrders.cend() || takeOutOrdersIter != takeOutOrders.cend()){
    return false;
}
return true;
}


int main(){
    vector <int> TakeOutOrders={17, 8, 24};
    vector <int> DineInOrders={12, 19, 2};
    vector <int> ServedOrders={17, 8, 12, 19, 24, 2};
    
    cout<<boolalpha<<isFirstComeFirstSergved(TakeOutOrders,DineInOrders,ServedOrders)<<endl;

   
   

}


// 
