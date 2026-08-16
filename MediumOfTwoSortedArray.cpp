#include<vector>
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int>a(m+n);
         for (int i=0;i<m;i++){
             a[i] = nums1[i];
         }
         for(int i=0;i<n;i++){
             a[m+i] = nums2[i];
         }
         sort(a.begin(),a.end());
          int k = a.size();
        float p;
        if(k%2==0){
            p =(a[(k+1)/2]+a[(k-1)/2])/2.00000;
        }
        else {
            p=a[k/2];
        }
       return p; 
    }
     
};