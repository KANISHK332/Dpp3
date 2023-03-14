class Solution{
    public:
    double MedianOfArrays(vector<int>& vn1, vector<int>& vn2)
    {
        // Your code goes here
        int nn1= vn1.size(),nn2= vn2.size();
        int n1=nn1,n2=nn2;
        vector<int> v1=vn1,v2=vn2;
        if(n1>n2){
            v1=vn2;
            v2=vn1;
            n1=nn2;
            n2=nn1;
        }
        double med=0;
          int lt= 0,rt= n1;
        
           while(lt<=rt){
               int i1= (lt+rt)/2;
               int i2= (n1+n2+1)/2 -i1;
               int mx1= ((i1==0)?INT_MIN:v1[i1-1]);
               int mn1= ((i1==n1)?INT_MAX:v1[i1]);
               int mx2= ((i2==0)?INT_MIN:v2[i2-1]);
               int mn2= ((i2==n2)?INT_MAX:v2[i2]);

               if(mx1<=mn2&& mx2<=mn1){
                   if((n1+n2)%2==0){
                     return (max(mx1,mx2)+min(mn1,mn2))/2.0;
                   }
                   else{
                    return max(mx1,mx2);
                   }
               }
               if(mx1>mn2){
                   rt= i1-1;
               }
               else lt= i1+1;
           }
          return 0.0;
    
    }
};
