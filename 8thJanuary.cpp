class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int n=points.size();
        int ans=1;
        for(int i=0; i<n-1; i++){
            map<double,int> mp;
            for(int j=i+1; j<=n-1; j++){
                double dx=points[j][0]-points[i][0];
                double dy=points[j][1]-points[i][1];
                if(dy!=0){
                double slope=dx/dy;
                mp[slope]++;
                }
                else {
                mp[-90]++;
                }
            }
            for(auto &i: mp){
            int temp=0;
            temp=max(temp,i.second+1);
            ans=max(ans,temp);
            }
        }
        return ans;
    }
};
