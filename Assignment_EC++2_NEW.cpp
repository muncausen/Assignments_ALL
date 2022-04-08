/*Assignment EC++2 Write a function which can encode the information in the given figure: 1011101001011011
• Speed / 20 (So 1=20km/h, 2=40km/h,…)
• Distance / 150 (So 1=150mm, 2=300mm,…)
It is a trade off between memory usage and accuracy.*/

#include <iostream>
#include <string>
#include <bitset>
using namespace std;


void encodeValues(int speed, int frontdist, int leftdist, int reardist, int rightdist){
    
    string speedbinary = bitset<4>(speed).to_string(); //convert speed value to binary format
    string frontdistbinary = bitset<3>(frontdist).to_string(); //convert front distance value to binary format
    string leftdistbinary = bitset<3>(leftdist).to_string(); //convert left distance value to binary format
    string reardistbinary = bitset<3>(reardist).to_string(); //convert rear distance value to binary format
    string rightdistbinary = bitset<3>(rightdist).to_string(); //convert right distance value to binary format

    string encodedValues = speedbinary + frontdistbinary + reardistbinary + rightdistbinary + leftdistbinary; //concatenate all together

    cout << "Encoded information is: " << encodedValues;   
    
    
}

int main(){

    int speed, frontdist, leftdist, reardist, rightdist;

          
    cout << "Please enter the speed value less than 300: ";
    cin >> speed;

    cout << "Please enter the front distance value less than 1050: ";
    cin >> frontdist;

    cout << "Please enter the left distance value less than 1050: ";
    cin >> leftdist;

    cout << "Please enter the rear distance value less than 1050: ";
    cin >> reardist;

    cout << "Please enter the right distance value less than 1050: ";
    cin >> rightdist;

    encodeValues(speed/20, frontdist/150, leftdist/150, reardist/150, rightdist/150);
       
   
    return 0;
}