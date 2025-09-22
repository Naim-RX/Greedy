#include <bits/stdc++.h>
using namespace std;

int jump(vector<int>& nums) {
        int l =0,r = 0,ans = 0;
        int n = nums.size();
        while(r < n-1){
            int far = 0;
            for(int i=l;i<r+1;i++){
                far =max(i+nums[i],far);
            }
            l = r+1;
            ans++;
            r = far;
        }

        return ans;
}

int main(){

}

