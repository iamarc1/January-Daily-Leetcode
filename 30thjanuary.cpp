class Solution {
public:
    int tribonacci(int n) {
        if(n<=2){
            if(n==0) return 0;
            return 1;
        }
       int p3=0,p2=1,p1=1;
       for(int i=3; i<=n; i++){
          int curr=p3+p2+p1;
          p3=p2;
          p2=p1;
          p1=curr;
       }
       return p1;
    }
};
