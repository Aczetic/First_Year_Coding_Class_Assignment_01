#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(){
    
            int x, y;
        x = y = 0;
        vector<vector<int>> mat;
        for(int i = 0 ; i < 5; i++){
            for(int j = 0 ; j < 5; j++){
                int input;
                cin >> input;
                vector<int>push;
                push.push_back(input);
                mat.push_back(push);
                if(input == 1){
                 x = i , y = j;
                }
            }
        }
    
    cout << abs(2-y) + abs(2-x)<< endl; 
    

    return 0;
}
