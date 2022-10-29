#include<iostream>
#include<vector>

using namespace std;



// problem -1
// O(n^2)
// int getMaxProfit(vector <int> stockPrices){
//     int maxprofit;
//     for(int outertime=0;outertime<stockPrices.size();outertime++){
//         int earlierPrice=stockPrices[outertime];
//         for(int innertime=outertime+1;innertime<stockPrices.size();innertime++){
//           int laterprice=stockPrices[innertime];
//           int profit=laterprice-earlierPrice;
//           maxprofit=max(maxprofit,profit);
//         }
//     }
//     return maxprofit;
// }

// // O(n)
// int getMaxProfit(vector <int> stockPrices){
//     int minprice=stockPrices[0];
//     int maxprofit=stockPrices[1]-stockPrices[0];
//     for(int i=1;i<stockPrices.size();i++){
//         int currentprice=stockPrices[i];
//         int profit=currentprice-minprice;
//         maxprofit=max(maxprofit,profit);
//         minprice=min(minprice,currentprice);
//     }
//     return maxprofit;
// }

// int main(){

// }