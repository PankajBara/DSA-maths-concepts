//fint the no. of prieme numbers from 1 to n (niave approach)
#include<iostream>
using namespace std;

bool isprime(int n){
    if(n<=1) return false;
    for(int i = 2  ; i < n ; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
} 

int main(){
   
    int n;
    cin>>n;
    int c = 0;
    for(int i=2;i < n;i++){
        if(isprime(i)){
            c++;
        }
    }
    cout << c << endl;

    return 0;

}