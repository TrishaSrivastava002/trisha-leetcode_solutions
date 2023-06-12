class Solution{
public:
vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord){
      int n=products.size(),len=searchWord.length();
      vector<vector<string>> v;  
      sort(products.begin(),products.end());
        string k="";
        for(int j=0;j<len;j++){
          k+=searchWord[j];
          vector<string> s;
      for(int i=0;i<n;i++){
          if(products[i].substr(0,k.length())==k)  s.push_back(products[i]);
          if(s.size()==3) break;
      }
       v.push_back(s);
      }  
      return v;  
    }
};