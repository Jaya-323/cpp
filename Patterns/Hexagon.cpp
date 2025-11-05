#include<iostream>
using namespace std;

int main(){
    int n=3;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=n-i;j++)
           cout<<" ";
           for(int k=1;k<=2*i-1;k++)
           cout<<"*";
cout<<endl;
    }
            for(int i=1;i<=2;i++){
        for(int j=1;j<=5;j++)
        cout<<"*";
      

        cout<<endl;
       
    }
    for(int i=3;i>=1;i--){
        for(int j=n-i;j>=1;j--)
           cout<<" ";
           for(int k=2*i-1;k>=1;k--)
           cout<<"*";
cout<<endl;
    }
     
   return 0;
    
  




}