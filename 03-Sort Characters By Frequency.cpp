class Solution {
public:
    string frequencySort(string s) {
	
        int n=s.size();
        vector<pair<int,int>> ans;
        int count=0;
        string result;
        
        int occ[150]={0};//150 beacause it may contain Uppercase element;
        for(int i=0;i<n;i++){
            occ[ s[i]]++;
        }
        
        for(int i=0;i<150;i++){
            if(occ[i]>0){
                ans.push_back({ occ[i],i });
            }
        }
        sort(ans.begin(),ans.end());
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].first;j++){
                result.push_back(ans[i].second);
            }
        }
        return result;
    }
};
