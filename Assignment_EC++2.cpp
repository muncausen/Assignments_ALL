/*Assignment EC++2 Write a function which can encode the information in the given figure:
• Speed / 20 (So 1=20km/h, 2=40km/h,…)
• Distance / 150 (So 1=150mm, 2=300mm,…)
It is a trade off between memory usage and accuracy.*/

#include <iostream>
#include <bitset>

using namespace std;

void speed(uint16_t value){
    unsigned int MASK_CURRENT_SPEED = 0xF000; //binary 11110 0000 0000 000
    cout << "Speed is: " << ((value & MASK_CURRENT_SPEED) >> 12)*20 << "km/h" << endl;
}
void distance_front(uint16_t value){
    unsigned int MASK_FRONT = 0xE00;
    cout << "Front distance is: " << ((value & MASK_FRONT) >> 9)*150 << "mm" << endl;
}
void distance_rear(uint16_t value){
    unsigned int MASK_REAR = 0x1C0;
    cout << "Rear distance is: " << ((value & MASK_REAR) >> 6)*150 << "mm" << endl;
}
void distance_right(uint16_t value){
    unsigned int MASK_RIGHT = 0x38;
    cout << "Right distance is: " << ((value & MASK_RIGHT) >> 3)*150 << "mm" << endl;
}
void distance_left(uint16_t value){
    unsigned int MASK_LEFT = 0x7;
    cout << "Left distance is: " << (value & MASK_LEFT)*150 << "mm" << endl;
}

int main(){

    uint16_t value = 0xBA5B; // binary 1011 101 001 011 011

    speed(value); 
    distance_front(value);
    distance_rear(value);
    distance_right(value);
    distance_left(value);


    return 0;
}