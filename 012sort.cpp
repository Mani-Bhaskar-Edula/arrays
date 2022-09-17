#include "bits/stdc++.h"
using namespace std;

class solution{
    vector<int> 012Sort(vector<int>& a){
        int mid=0,low=0,high=a.size()-1;
        while(mid<high){
            switch(a[mid]){
                case 0: swap(a[low],a[mid]);
                        low++;
                        mid++;
                        break;

                case 1:mid++;
                       break;

                case 3:swap(a[mid],a[high]);
                       high--;
                       break;      
            }
        }
        return a;
    }
}