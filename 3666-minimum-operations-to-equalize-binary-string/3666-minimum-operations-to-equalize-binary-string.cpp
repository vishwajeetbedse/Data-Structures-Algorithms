class Solution {
public:
    int minOperations(string s, int k) {
        int n=s.length();
        int cnt0 = count(s.begin(),s.end(),'0');
        
        queue<pair<int,int> > q;
        
        set<int> unvis[2];
        for(int i=0; i<=n; i++){
            if(i != cnt0) unvis[i%2].insert(i);
        }
        
        q.push({cnt0,0});
        
        while(!q.empty()){
            pair<int,int> cur=q.front();
            q.pop();
            
            int z=cur.first;
            int d =cur.second;
            if(z==0){
                return d;
            }
            int o=n-z;
            int mn=max(0,k-o); 
            int mx = min(z,k);
            int min_nxt = z + k - 2*mx;
            int max_nxt = z + k - 2*mn;
            int parity = min_nxt % 2;
            auto it = unvis[parity].lower_bound(min_nxt);
            while(it != unvis[parity].end() && *it <= max_nxt){
                q.push({*it, d+1});
                
                it = unvis[parity].erase(it); 
            }
        }
        
        return -1;
    }
};