int maxProfit(int* prices, int pricesSize){
    int profit = 0;
    for(int i=0; i<pricesSize-1; i++){
        int temp = prices[i+1]-prices[i];
        if(temp>0)
            profit += temp;
    }
    return profit;
}