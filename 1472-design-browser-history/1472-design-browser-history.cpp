class BrowserHistory {
    int n;
    vector<string> v;
public:
    BrowserHistory(string homepage) {
       v.push_back(homepage);
        n=0;
    }
    
    void visit(string url) {
       int len=v.size()-1;
        while(len>n){
            v.pop_back();
            len--;
        }
        n++;
        v.push_back(url);
    }
    
    string back(int steps) {
        n-=steps;
        if(n<=0) n=0;
        return v[n];
    }
    
    string forward(int steps) {
       n+=steps;
        if(n>=v.size()) n=v.size()-1;
        return v[n];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */