class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int n=points.size();
        int ans=1,endtillnow=INT_MAX;
        for(int i=0; i<n; i++){
           int start=points[i][0];
           int endpoints=points[i][1];
           if(endtillnow<start){
               ans++;
               endtillnow=endpoints;
           }
           else {
               endtillnow=min(endtillnow,endpoints);
           }
        }
        return ans;
    }
};
