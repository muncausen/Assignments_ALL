/*Assignment EC++1*/
/*Implement a function that can read the information shown in the figure.*/

#include <iostream>
#include <bitset>


int main(){                                //      stblts wndws drs lghts
    uint16_t values = 0xBA5B;              //binary 10111 0100 1011 011
    unsigned int MASK_STBLTS = 0xF800;     //binary 11111 0000 0000 000
    unsigned int MASK_WNDWS = 0x780;       //binary 00000 1111 0000 000
    unsigned int MASK_DRS = 0x78;          //binary 00000 0000 1111 000
    unsigned int MASK_LGHTS = 0x7;         //binary 00000 0000 0000 111

    uint16_t STBLTS =(values & MASK_STBLTS) >> 11;
    uint16_t WNDWS = (values & MASK_WNDWS) >> 7;
    uint16_t DRS = (values & MASK_DRS) >> 3;
    uint16_t LGTHS = values & MASK_LGHTS;
    
    std::cout << "INFORMATION RECEIVED AS VALUES FROM" << std::endl; 
    std::cout << "SEAT BELTS: " << STBLTS << std::endl;    
    std::cout << "WINDOWS: " << WNDWS << std::endl;    
    std::cout << "DOORS: " << DRS << std::endl;    
    std::cout << "LIGHTS: " << LGTHS << std::endl;    
    
    std::cout << "INFORMATION RECEIVED IN BINARY FROM" << std::endl; 
    std::cout << "SEAT BELTS: " << std::bitset<16>(STBLTS) << std::endl; 
    std::cout << "WINDOWS: " << std::bitset<16>(WNDWS) << std::endl;    
    std::cout << "DOORS: " << std::bitset<16>(DRS) << std::endl;    
    std::cout << "LIGHTS: " << std::bitset<16>(LGTHS) << std::endl;   
  
    return 0;
}