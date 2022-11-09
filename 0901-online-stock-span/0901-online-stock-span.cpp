class StockSpanner{
    vector<int> v;
public:
    StockSpanner(){
       
    }
    int next(int price){ 
         int k=0;
      v.push_back(price);
        for(int i=v.size()-1;i>=0;i--){
            if(v[i]<=price) k++;
            else break;
        }
        return k;
    }
};
/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */