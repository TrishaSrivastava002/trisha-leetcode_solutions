class Solution {
    int arr[26];
    int find(int x){
        if(arr[x]==-1) return x;
        return arr[x]=find(arr[x]); //updating in arr
    }
    void Union(int x,int y){
        x = find(x);
        y = find(y);
        if(x!=y){
            arr[max(x,y)]=min(x,y);
        }
    }
public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        int n=s1.size(),b=baseStr.size();
        memset(arr,-1,sizeof(arr));
        for(int i=0;i<n;i++){
          Union(s1[i]-'a',s2[i]-'a'); 
        }
        for(int i=0;i<b;i++){
          baseStr[i]=find(baseStr[i]-'a')+'a';
        }
        return baseStr;
    }
};