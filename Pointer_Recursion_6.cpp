/***** ****
 * Count of Digits
 * ******/
#include <iostream>
using namespace std;
int  CountOfDigits(int *, int *);
int main(){
    int n, i=0, *ptr, *ptr_i;
    cout << "Enter a number: ";
    cin >> n;
    ptr = &n;
    ptr_i = &i;
    cout << "Number of digits: " << CountOfDigits(ptr,ptr_i) << endl;
    
    return 0;
}
int CountOfDigits(int *n, int *sum){
    if(*n== 0){
        return *sum;
    }
    *n = *n/10;
    *sum = *sum+1;
    CountOfDigits(n,sum);
   
    
}