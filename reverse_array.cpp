#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector<int>vect(n);
   for(int i=0;i<n;i++){
    cin>>vect[i];
   }
   reverse(vect.begin(),vect.end());
   for(int i=0;i<n;i++){
    cout<<vect[i];
   }
return 0;
}