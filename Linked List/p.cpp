class Solution {
    public:
    vector kWeakestRows(vector<vector>& v, int k) {

        int n=v.size();
        pair<int,int>p[n];

        vector<int> ans;
        for(int i=0;i<v;i++){
            int l=0 , r=v[0].size();
            while(l<r){
                int mid=l+(r-l)/2;
                if(v[i][mid]==1)
                    l=mid+1;
                else 
                    r=mid;
            }
            p[i].first=r;
            p[i].second=i;
        }
        sort(p,p+v.size());
        for(auto i :p){
            if(ans.size()==k)
                break;
            ans.emplace_back(i.second);
        }
        return ans;
    }
};