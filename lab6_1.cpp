#include<iostream>
using namespace std;

int main(){
    string number;
    int even,odd;
    even = -1;
    odd = 0;
    int x,size;
    do{
        if (number != "0"){
            if (x%2 == 0 && number != "0"){
                even = even+1;
            }else {
                odd = odd+1;
            }
             cout << "Enter an integer: ";
            cin >> number;
            size = number.size();
            x = number[size-1];
        }
    }while (number != "0");
    
    cout << "#Even numbers = " << even << "\n";
    cout << "#Odd numbers = " << odd;
    return 0;
}
