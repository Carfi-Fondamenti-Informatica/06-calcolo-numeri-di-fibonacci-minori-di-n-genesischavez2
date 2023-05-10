#include <iostream>
using namespace std;

int main() {
   int n=0,m=1,y=1,x=0;
   cin>>n;
   cout <<"1"<<endl; 
   for(int i=1;i<=n;i++){
      if(y<=n){
         y=m+x;
         cout<<y<<endl;
      }  else{
       break;
       }  
         x=m;
         m=y;
     }  
         
   return 0;
}
