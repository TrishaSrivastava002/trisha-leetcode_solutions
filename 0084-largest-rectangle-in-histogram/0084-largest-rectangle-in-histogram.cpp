class Solution {
     vector<int> nextsmallerelement(vector<int>arr,int n) {
          stack<int> s;
        vector<int> v(n);
        for(int i=n-1;i>=0;i--){
            int curr= arr[i];
            while(!s.empty() && arr[s.top()]>=curr){
                s.pop();
            }
            if(s.empty()) v[i]=n-1;
            else v[i]= s.top()-1;
            s.push(i);
        }
        return v;
    }
     vector<int> prevsmallerelement(vector<int> arr,int n) {
          stack<int> s;
        vector<int> v(n);
        for(int i=0;i<n;i++){ 
            int curr= arr[i];
            while(!s.empty() && arr[s.top()]>=curr){
                s.pop();
            }
            if(s.empty()) v[i]=0;
            else v[i]= s.top()+1;
            s.push(i);
        }
        return v;
    }
public:
    int largestRectangleArea(vector<int>& heights) {
      int n= heights.size();
        vector<int> next(n);
        next= nextsmallerelement(heights,n);
        vector<int> prev(n);
        prev=prevsmallerelement(heights,n);
         int area= INT_MIN;
        for(int i=0;i<n;i++){
            int l= heights[i];
             int b= next[i]-prev[i]+1;
             int newarea = l*b;
            area= max(area,newarea);  
        }
        return area;
    }
};