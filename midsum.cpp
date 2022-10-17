int findMidSum(int ar1[], int ar2[], int n) {
            priority_queue<int>q;//
            for(int i=0;i<n;i++){
                q.push(-ar1[i]);//min heap creating
                q.push(-ar2[i]);
            }
     
           int cnt=0;
            int num1=-1 , num2=-1;
           
            while(!q.empty() && cnt!=n+1){
                num1=num2;
                num2=q.top();
                q.pop();
                cnt++;
            }
        
           int sum=abs(num1+num2);

            return sum;
    }
