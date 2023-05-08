#include <iostream>
using namespace std;

int main() {
   int n=0,m=1,y=1,x=0;
   cin>>n;
   for(i=1;i<=n;i++){
      if(y<=n){
         cout<<y<<endl;
         y=m+x;
         x=m;
         m=y;
      } else {
         cout << "";
        }
   }  
         
   return 0;
}
