/*---------------------------------------------------------------------------
Copyright (C), 2022-2023, Sara Echeverria (bl33h)
@author Sara Echeverria
FileName: IDsInOrder
@version: I
Creation: 11/08/2022
Last modification: 13/08/2022
------------------------------------------------------------------------------*/

#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

// Main method
int main(){
    requestIDnumber();
    IDsInOrder();
    delete[] ID;

    return 0;
}

// ID request method
    void requestIDnumber(){
    cout<<"Enter the number of IDs to order: "; // Number of spaces the array will have
    cin>>IDnumber;
    ID new int[IDnumber]; // Creation of the array
    for (int i = 0; i < IDnumber;i++){
        cout <<"Name: ";
        cout <<"Lastname: ";
        cout <<"Last number of the CUI: ";
        cout << "Enter the ID numbers: ";
        cin >> ID[i];
    }
}

// IDs in order method
    void IDsInOrder(){ 
    sort(ID, ID+IDnumber);
    cout<<"Enter the number of IDs you placed in the input: "; // Number of spaces the array has
    cin>>IDnumber;
    for (int i = 0; i < IDnumber; ++i) 
    cout << ID[i] << " ";   
    return 0; 
} 
