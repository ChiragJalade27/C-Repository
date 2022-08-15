#include<iostream>
#include<math.h>

using namespace std;


int main(){

    int n;
    cout<<"enter a no"<<"\n";
    cin>>n;
    int j=0;

    for(int i=1;i<31;i++){
        int ans=pow(2,i);

        if(n==ans){
            j=1;
        }
    }
    if(j==1){
        cout<<"Yes"<<"\n";

    }else{
        cout<<"No";
    }
   
       

    }
