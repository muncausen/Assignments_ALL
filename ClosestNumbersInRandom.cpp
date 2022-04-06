/*Assignment 3
We want to generate 1024 random integers, then given a new random number; find two integers which are the
closest to the given number (smaller, and bigger) with less than twelve lookups.*/

#include <iostream>
#include <set>

using namespace std;

void findClosest(int random_number){
   
    set<int> randoms;
    int Numbers[1024];

    //Filling array with random numbers
    for (int i = 0; i < 1024; i++){
        Numbers[i] = rand();
    }

    //Inserting elements of array into set
    for (int i: Numbers){
        randoms.insert(i);
    }


    //Looking for closest smaller
    auto it = randoms.lower_bound(random_number);
    if (it != randoms.end()){
        cout << "\nThe lower bound of " <<random_number;
        cout << " is " << (*it);
    }
    else{
        cout << "The random number is larger than the greatest element in the set" << endl;
    }
    //Looking fo closest bigger
    it = randoms.upper_bound(random_number);
    if (it != randoms.end()){
        cout << "\nThe upper bound of " <<random_number;
        cout << " is " << (*it);
    }
    else{
        cout << "The random number is larger than the greatest element in the set" << endl;
    }

}


int main(){

    int random_number = rand();

    findClosest(random_number);

    return 0;

}