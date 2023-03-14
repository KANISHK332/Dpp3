  vector<vector<string> > Anagrams(vector<string>& s) {
        //code here
        vector<vector<string>> v1;
        set<string> st;
        int n= s.size();
        vector<string> vs= s;
        for(int i=0;i<n;i++){
            sort(vs[i].begin(),vs[i].end());
        }
       map<string,vector<string>> mp;
       for(int i=0;i<n;i++){
           mp[vs[i]].push_back(s[i]);
       }
       for(auto x:mp){
           v1.push_back(x.second);
       }
       return v1;
    }
