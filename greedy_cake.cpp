#include<iostream>
#include<vector>
#include<algorithm>
#include<random>
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




//Product of 3  -O(n)
// keep track of the highest product of 3,highest product of 2,lowest product of 2,highest ,lowest


// int highestProductOf3(vector<int>& vectorOfInts){
//    int highest=max(vectorOfInts[0],vectorOfInts[1]);
//    int lowest=min(vectorOfInts[0],vectorOfInts[1]);
//    int highestProductOf2=vectorOfInts[0]*vectorOfInts[1];
//    int lowestProductOf2=vectorOfInts[0]*vectorOfInts[1];
//    int highestProductOf3=vectorOfInts[0]*vectorOfInts[1]*vectorOfInts[2];
//    for(size_t i=2;i<vectorOfInts.size();i++){
//     int current=vectorOfInts[i];
//     highestProductOf3=max(max(highestProductOf3,highestProductOf2*current),current*lowestProductOf2);
//     highestProductOf2=max(max(highestProductOf2,current*highest),current*lowest);
//     lowestProductOf2= min(min(lowestProductOf2,current * highest),current * lowest);
//     highest = max(highest, current);
//     lowest = min(lowest, current);
//    }
//    return highestProductOf3;
// }

// int main(){

// }

// O(n^3)

// int highestProductOf3(vector <int> v){
//   int product=1;
//    for(int i=0;i<v.size()-2;i++){
//       for(int j=1;j<v.size()-1;j++){
//          for(int k=2;k<v.size();k++){
//              if(v[i]*v[j]*v[k]>product){
//                product=v[i]*v[j]*v[k];
//              }
//          }
//       }
//    }
// }

// int main(){

// }






// You have a vector of integers, and for each index you want to find the product of every integer except the integer at that index.

// O(n^2)
// vector <int> ProductOfAllIntExceptThatIndex(vector<int>v){
//    vector <int> res;
//     for(int i=0;i<v.size();i++){
//          int product=1;
//           for(int j=0;j<v.size();j++){
//               if(i!=j){
//                product=product*v[j];
//               }
//            }
//            res.push_back(product);
//     }
//     return res;
// }
// int main(){
// vector <int> v,res;
// v={2,4,10};
// res=ProductOfAllIntExceptThatIndex(v);
// for(auto k:res){
//    cout<<k<<endl;
// }
// }

// O(n)
// vector <int> ProductOfAllIntExceptThatIndex(vector<int>v){
//    vector <int> res;
//    int product=1;
//     for(int i=0;i<v.size();i++){
//        product=product*v[i];  
//     }

//     for(int i=0;i<v.size();i++){
//       int c=product/v[i];
//          res.push_back(c);
//     }
//     return res;
// }
// int main(){
// vector <int> v,res;
// v={2,4,10};
// res=ProductOfAllIntExceptThatIndex(v);
// for(auto k:res){
//    cout<<k<<endl;
// }
// }

// O(n)

// vector<int> getProductsOfAllIntsExceptAtIndex(const vector<int>& intVector)
// {
//    if (intVector.size() < 2) {
//         throw invalid_argument("Getting the product of numbers at"
//             " other indices requires at least 2 numbers");
//     }
//     int productSoFar=1;
//     vector<int> productsOfAllIntsExceptAtIndex(intVector.size());
//     for(int i=0;i<intVector.size();i++)
//     {
//       productsOfAllIntsExceptAtIndex[i]=productSoFar;
//       productSoFar*=intVector[i];
//     }
//    productSoFar = 1;
//     for (size_t i = intVector.size(); i > 0; --i) {
//         size_t j = i - 1;
//         productsOfAllIntsExceptAtIndex[j] *= productSoFar;
//         productSoFar *= intVector[j];
//     }
//     return productsOfAllIntsExceptAtIndex;
// }

// int main(){
//    vector <int> v,res;
// v={2,4,10};
// res=getProductsOfAllIntsExceptAtIndex(v);
// for(auto k:res){
//    cout<<k<<endl;
// }
// }


// Problem-5
// Inplace shuffle
// Fisher-Yates shuffle
// — To shuffle an array ‘a’ of ‘n’ elements:
// for i from 0 to n-2 do
//     j = random integer such that i <= j < n
//     exchange a[i] and a[j]




size_t getRandom(size_t floor, size_t ceiling)
{
    static random_device rdev;
    static default_random_engine generator(rdev());
    static uniform_real_distribution<double> distribution(0.0, 1.0);
    double value = distribution(generator);
    return static_cast<size_t>(value * (ceiling - floor + 1)) + floor;
}

void shuffle(vector<int>& theVector)
{
    // shuffle the input in place
    for(int indexchoosing=0;indexchoosing<theVector.size()-1;indexchoosing++){
        int swapindex=getRandom(indexchoosing,theVector.size());  //int swapindex= indexchoosing + rand() % (n - i);
        if(swapindex!=indexchoosing){
         swap(theVector[indexchoosing],theVector[swapindex]);
        }
    }
    

}

void printVector(const char* title, const vector<int>& theVector)
{
    cout << title << ": [";
    bool isFirst = true;
    for (int value: theVector) {
        if (isFirst) {
            isFirst = false;
        } else {
            cout << ", ";
        }
        cout << value;
    }
    cout << ']' << endl;
}

int main(int argc, char** argv)
{
    const vector<int> initial {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> shuffled(initial);
    shuffle(shuffled);
    printVector("initial vector", initial);
    printVector("shuffled vector", shuffled);
    return 0;
}