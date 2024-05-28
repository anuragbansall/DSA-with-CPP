#include <iostream>
#include <climits>  // For INT_MAX
using namespace std;

void maxProfit(int *arr, int n);
int main(){
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);
    maxProfit(prices,n);

    return 0;
}

void maxProfit(int *arr, int n){
    int bestBuyPrices[100000];
    bestBuyPrices[0] = INT_MAX;
    for(int i=1;i<n;i++){
        bestBuyPrices[i] = min(bestBuyPrices[i-1],arr[i-1]);
    }    
    int maxProfit = 0;
    for(int i=0; i<n; i++){
        int currProfit = arr[i] - bestBuyPrices[i];
        maxProfit = max(maxProfit,currProfit); 
    }

    cout<<"Max Profit is "<<maxProfit<<"\n";
}