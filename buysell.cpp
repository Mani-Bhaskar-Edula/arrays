#include "bits/stdc++.h"
using namespace std;
class solution{
    //class function
    public:
    int buySell(vector<int> test){
        int mini=99,maxpr=0;
        for(int i=0;i<test.size();i++){
            mini=min(mini,test[i]);
            maxpr=max(maxpr,test[i]-mini);
        }
        return maxpr;
    }
};

int main() {
    vector<int> a{7,1,5,3,6,4};
    solution aa;
    cout<<aa.buySell(a);
}