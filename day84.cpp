class Solution
{
    public:
    static bool cmp(Item a, Item b){
        return((double)a.value/(double)a.weight>(double)b.value/(double)b.weight);
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr,arr+n,cmp);
        int currw=0;
        double finalv=0.0;
        
        for(int i=0;i<n;i++){
            if(currw+arr[i].weight<=W){
                currw+=arr[i].weight;
                finalv+=arr[i].value;
            }
            else{
               int remain=W-currw;
               finalv+=(arr[i].value/(double)arr[i].weight)*(double)remain;
               break;
            }
        }
        return finalv;
    }
        
};
