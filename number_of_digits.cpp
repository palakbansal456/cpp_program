#include<iostream>
using namespace std;
int main(){
    int n, count = 0;
    cout<<"Enter a number: ";
    cin>>n;
    if(n == 0){
        count = 1;
    }else{
        if(n < 0){
            n = -n;
        }while(n != 0){
            n = n / 10;
            count++;
        }
    }
    cout<<"Number of digits: "<<count<<endl;
    return 0;
}