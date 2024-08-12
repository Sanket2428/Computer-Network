// Assignment Number: 2
// Title: Humming Code.

#include <iostream>
using namespace std;
int main(){
    int data[7],P1,P2,P4,a=0,data1[7];
    // for loop is used to accept the input of data bits.
    for (int i = 1; i <= 7; i++) {
        cin >> data[i];
    }
    // P1, P2, P4 are the pirate values
    P4 = data[5] ^ data[6] ^ data[7] ^ data[4];
    P2 = data[3] ^ data[6] ^ data[7] ^ data[2];
    P1 = data[3] ^ data[5] ^ data[7] ^ data[1];
    a = P1*1 + P2*2 + P4*4; // converting the pirate values into the integer value.
    cout << "\nPosition: " << a; // Display the position of changing bit.
    for (int i = 1; i <= 7; i++) {
        data1[i] = data[i];
    }
    // Here the conversion is done of changing bit.
    if (data1[a] == 0){
        data1[a] = 1;
    }
    else{
        data1[a] = 0;
    }
    // Display the output which is sender sites bits after the modification are done.
    cout << "\nAfter transformation: ";
    for (int i = 1; i <= 7; i++)
    {
        cout << data1[i] << " ";
    }
    cout << "\nBefore transformation: ";
    for (int i = 1; i <= 7; i++) {
        cout << data[i] << " ";
    }
    
    return 0;
}
