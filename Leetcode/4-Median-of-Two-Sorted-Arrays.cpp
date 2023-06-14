class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n =nums1.size(), m =nums2.size();
        int nums =  nums1.size() + nums2.size();
        int i=0,j=0;
        float answer;
        vector<int> v(n+m,0);
        while(n!=i && m!=j){
            if(nums1[i]<nums2[j]){
                v[i+j] = nums1[i];
                i++; 
            }
            else{
                v[i+j] = nums2[j];
                j++; 
            }
        }
        while(i!=n){
            v[i+j]=nums1[i];
            i++;
        }
        while(j!=m){
            v[i+j]=nums2[j];
            j++;
        }
        if(nums%2){
            answer = v[nums/2];
        }
        else
            answer = (v[nums/2]+v[(nums/2)-1])/2.0;
        return answer;
    }
};