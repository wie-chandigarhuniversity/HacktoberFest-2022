void rearrange(long long *arr, int n) 
    { 
     vector<int> dummy;
     for(int i = 0; i< n/ 2; i++)
     {
         dummy.push_back(arr[n - 1 - i]);
         dummy.push_back(arr[i]);
     }
     if(n%2 != 0)
     {
         dummy.push_back(arr[n/2]);
     }
     for(int i = 0; i<n ; i++)
     {
         arr[i] =dummy[i];
     }    
     dummy.clear();
    }
