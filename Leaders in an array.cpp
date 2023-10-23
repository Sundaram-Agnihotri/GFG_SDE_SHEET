 vector<int> leaders(int a[], int n){
        // Code here4
        vector<int>ans;
        
        int max = a[n-1];
        ans.push_back(a[n-1]);
        
        for(int i=n-2;i>=0;i--){
            
            if(a[i] >= max){
                max = a[i];
                ans.push_back(max);
            }
            
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
