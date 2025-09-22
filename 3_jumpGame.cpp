#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

bool canJump(vector<int>& nums) {
        int j = 0;
        if(nums.size()==1) return true;
        for(int i=0;i<nums.size();i++){
            j = max(j,nums[i]+i);
            if(i>=j && i < nums.size()-1) return false;
        }
        if(j >= nums.size()-1) return true;
        else return false;
    }

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


}

