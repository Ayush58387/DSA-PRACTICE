#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[6]={2,5,1,8,3,56};
    int mx=INT_MIN;
    for(int i=0;i<6;i++){
      if(arr[i]>mx){
        mx=arr[i];
      }
    }
      int smx=INT_MIN;
      for(int i=0;i<6;i++){
         if(arr[i]>smx && arr[i]!=mx){
            smx=arr[i];
         }
      }
      cout<<smx;
}
