vector<vector<int> >res;
        set<vector<int> >st;
        int n=nums.size();
        for(int i=0;i<(1<<n);i++){
            vector<int>temp;
            for(int j=0;j<n;j++){
                if(i&(1<<j))temp.push_back(nums[j]);
            }
            if(is_sorted(temp.begin(),temp.end()) && temp.size()>=2 && st.find(temp)==st.end()){
                res.push_back(temp);
                st.insert(temp);
            }
        }
        return res;
