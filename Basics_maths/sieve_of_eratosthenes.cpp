#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cin >> n;

    int count = 0;

    if(n == 0 ) cout << "0" << endl;

    vector<bool> ans(n , true);
    ans[0] = ans[1] = false;


    for(int i = 2 ; i < n ; i++){
        if(ans[i] == true){
            count++;

            int j = i * 2;
            
            while(j < n){
                ans[j] = false;
                j = j + i;
            }
            
        }
    }
    cout << count << endl;



    return 0;
}