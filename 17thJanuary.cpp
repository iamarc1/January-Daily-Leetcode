class Solution {
public:
    int minFlipsMonoIncr(string s) {
       int flip=0,one=0;
       for(auto &i: s){
           if(i=='1'){
               one++;
           }
           else {
               flip++;
               flip=min(one,flip);
           }
       }
       return flip;
    }
};
