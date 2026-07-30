class Solution {
public:
long long ans =0;

void mergeSort(vector<long long> &prefix, int l, int r){
    if(l>=r) return ;
    
    int mid = l+ (r-l)/2;
    
    mergeSort(prefix,l,mid);
    mergeSort(prefix,mid+1,r);
   
    // Count pairs: prefix[j] > prefix[i]
        int j = mid + 1;
        for (int i = l; i <= mid; i++) {
            while (j <= r && prefix[j] <= prefix[i])
                j++;

            ans += (r- j + 1);
        }
        
        // Merge two sorted halves
        vector<long long> temp;
        int i = l;
        j = mid + 1;
        
        
        while (i <= mid && j <= r) {
            if (prefix[i] <= prefix[j])
                temp.push_back(prefix[i++]);
            else
                temp.push_back(prefix[j++]);
        }

        while (i <= mid)
            temp.push_back(prefix[i++]);

        while (j <= r)
            temp.push_back(prefix[j++]);



        for (int k = l; k <= r; k++)
            prefix[k] = temp[k - l];
    }

  
        
    
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        for(int k=0;k<n;k++)
        
         nums[k] = nums[k] == target?1:-1;  
                 
     vector<long long> prefix(n + 1, 0);

      for (int i = 0; i < n; i++)
            prefix[i + 1] = prefix[i] + nums[i];
            
            
mergeSort(prefix, 0,n)      ;

return ans;          
    }
};