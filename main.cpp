#include <iostream>

using namespace std;

int main(){
    int i = 99;

    for(i = 99; i >= 0; i--){
        if(i > 0){
            cout << i << " bottles of beer on the wall, " << i << " bottles of beer," << endl
            << "Take one down and pass it around, " << (i - 1) << " bottles of beer on the wall.\n" << endl;
        }
        else if(i == 0){
            cout << "No more bottles of beer on the wall, no more bottles of beer," << endl
            << "Go to the store and buy some more, " << i + 99 << " bottles of beer on the wall.\n" << endl;
        }
        
    }

    
}