class Solution {
public:
vector<int> asteroidCollision(vector<int>& asteroids) { vector<int> v;
  int n=asteroids.size();
     stack<int> s;
    for(int i=0;i<n;i++){
     if(s.empty()) s.push(asteroids[i]);
     else if(s.top()>0 && asteroids[i]<0){
         if(abs(asteroids[i])>s.top()){
             s.pop();
            i--;
         }
         else if(abs(s.top())==abs(asteroids[i])) s.pop();
    //we do not change anything in the stack if s.top()>asteroids[i] & asteroids[i]<0
     }   
     else s.push(asteroids[i]);
        }                                               
      while(!s.empty()){
          v.push_back(s.top());
          s.pop();
      }
    reverse(v.begin(),v.end());
     return v;                                                  
    }
};