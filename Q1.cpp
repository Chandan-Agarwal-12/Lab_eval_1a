#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<pair<int,int>> nums;
    cout<<"enter coefficient and power(upto fifth degree) : \n";
    int coeff,deg;
    while(true){
        cin>>coeff>>deg;
        if(deg==-1){
            break;
        }
        nums.push_back({coeff,deg});
    }
    for(int i=0;i<nums.size();i++){
        nums[i].first*=nums[i].second;
        nums[i].second--;
    }
    for(int i=0;i<nums.size()-1;i++){
        if(i==nums.size()-2)
            cout<<nums[i].first<<"x^"<<nums[i].second;
        cout<<nums[i].first<<"x^"<<nums[i].second<<" + ";
    }

    return 0;
}
