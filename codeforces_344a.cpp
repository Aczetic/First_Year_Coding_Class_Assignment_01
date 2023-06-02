#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    n--;
    int count = 1;
    string a, b;
    cin >> a;
    
    while(n--){
     cin >> b;
     if( a != b){
         count++;
     }
     a = b;
    }
    cout << count << endl;
    
    
    return 0;
}
