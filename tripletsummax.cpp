#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,answer;
cin>>n;
if(n<3){
    return -1;
}
int a[1000];
for(int i=0;i<n;i++){
    cin>>a[i];
}

int maxp = INT_MIN;

for(int i=0;i<n-2;i++){
    for(int j=i+1;j<n-1;j++){
        for(int k=i+2;k<n;k++){
            maxp = max(maxp,a[i]*a[j]*a[k]);
        }
    }
}
cout<<maxp;
}
/// ABOVE CODE IS OF TIME COMPLEXITY O(N3)


///******* another aproach is what you do is first of all sort the array
/// ****** and then find maximum of two things one is (last three elements - product)
///******* and other is (first two and last one - product)

/// above code took just o(nlogn) time complexity
