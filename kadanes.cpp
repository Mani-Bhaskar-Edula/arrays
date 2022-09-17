#include "bits/stdc++.h"
using namespace std;

class solution{
    //class function
    int kadanes(vector<int>& a){
        int sum=0,maxi=-999;
        for(int i=0;i<a.size();i++){
            sum=max(0,sum+a[i]);
            maxi=max(sum,maxi);
        }
        return maxi;
    }
}