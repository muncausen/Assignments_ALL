/*Assignment 2
Generate random numbers between 0-33, ten thousand times, then print how many duplicates of each number
you have generated -- print in ascending order.*/

#include <iostream>
#include <vector>
#include <set>

using namespace std;

void countDuplicates(int random[], int n)
{

    
    // Mark all array elements as non Duplicates
    vector<bool> duplicates(n, false);

    // Traverse through array elements and count duplicates
    for (int i = 0; i < n; i++)
    {

        // Skip element if already processed
        if (duplicates[i] == true)
            continue;

        // Count duplicates
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (random[i] == random[j])
            {
                duplicates[j] = true;
                count++;
            }
        }
                
        cout << random[i] << " " << count << endl;
    }
    
}

int main()
{

    int Random[10000];
    int temp;
    
    
    //Filling array with random numbers
    for (int i = 0; i < 10000; i++)
    {
        Random[i] = rand() % 33;
        
    }
    //Sorting array with random numbers
    for (int i = 0; i < 10000; i++){
        for (int j = i + 1; j < 10000; j++){
            if (Random[i]>Random[j]){
                temp = Random[i];
                Random[i] = Random[j];
                Random[j] = temp;

            }
        }
        
    }
      
    //Sending sorted array with random numbers to the function
    countDuplicates(Random, 10000);

    return 0;
}
