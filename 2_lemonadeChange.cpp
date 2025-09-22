#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

bool lemonadeChange(vector<int>& b) {
        int fi=0,ten=0;
        for(int i=0;i<b.size();i++){
            if(b[i]==5) fi++;
            else if(b[i]==10){
                if(fi>0) {
                    --fi;
                    ++ten;
                }
                else return false;
            }
            else {
                if(fi >0 && ten >0){
                    --ten;
                    --fi;
                }else if(fi > 2){
                    fi-=3;
                }
                else return false;
            }
        }
        return true;
    }

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


}

