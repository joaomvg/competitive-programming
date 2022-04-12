#include <iostream>
#include <map>
using namespace std;

int a=10;
double b=10.4;
int x[10];
double y[10000];

map <int,int> dict;



int main(){
    cout<<a<<'\n';
    cout<<a*b;
    cout<< a*1000<<'\n';
     
 dict[2]=10; 
    cout<<dict[2]<<'\n';    
   
    return 0;
}
