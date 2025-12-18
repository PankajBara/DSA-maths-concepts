#include<iostream>
#include<cmath>
using namespace std;


int main(){

    int n;
    cin >> n;

    int count = 0;

    for(int i = 2 ; i < n ; i++){
        bool isprime = true ;
        for(int j = 2 ; j <= sqrt(i) ; j++){
            if(i % j == 0 ){
                isprime = false;
                break;
            }
        }
        if(isprime){
            count++;
        }
    }
    cout << count << endl;

    return 0;
}