#include <iostream>
using namespace std;

int main(){
    int sequence;
    int first = 0,second = 1,next;
    cout << "Enter how many sequence:";
    cin >> sequence;

    for (int i = 0; i < sequence; i++){
        
        next = first + second;
        cout << next << "\t";
        first = second;    
        second = next;   
    }
}