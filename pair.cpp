vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        sort(A, A+N);
        sort(B, B+M);
        
        vector<pair<int, int>> ans;
        
        int low = 0, high = M-1;
        
        while(low < N and high >= 0)
        {
            int sum = A[low] + B[high];
            if(sum == X)
                ans.push_back(make_pair(A[low++], B[high--]));
                
            else if(sum < X)
                low++;
            else high--;
        }
        
        return ans;
    }
