#include <iostream>
using namespace std;
int iterative_factorial(int x){
    int sum=1;
    for(int i=1;i<=x;++i){
        sum=sum*i;
    }
    return sum;
}
int recursion_factorial(int x){
    if(x==1)
    return 1;
    
    return x*recursion_factorial(x-1);
    
}
int main() {
  cout<<iterative_factorial(10)<<endl;
  cout<<recursion_factorial(10)<<endl;
    return 0;
}