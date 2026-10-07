#include<iostream>
using namespace std;
int main(){
    int count=1;
   for(int i=1; i<=100; i++){
        bool prime =true;
        for(int j=2; j<i; j++){
        if(i%j==0){
            prime =false;
          continue;
        }
        }
if(prime==true)
    cout<<i<<" ";
   }
return 0;
}
