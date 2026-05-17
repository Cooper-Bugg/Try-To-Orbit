/*
TODO:
- Run simple gravity and force calculations
- Input physical parameters such as mass or radius
- View computed results such as gravitational force or weight
- CONSTANTS:
    G (gravitational constant)
    Earth's mass
    Earth's radius
    Moon's mass
    Moon's radius
*/  

#include <iostream>
using namespace std;

/*
I think these functions can go here but we can always move it 
Functions needed: this will be needed for both Earth and Moon
    - computing weight on Moon
    - compute gravitaional force
    - compute surface gravity
*/

// things that everything should use and have the sameish, i could maybe put in a header file, 


    // some sort of switch statement
    int userSelection(int userChoice){
       
        int i = 0;
        // we now just use this switch to pick which choice they did
        i = userChoice;
        switch(i)
            case 1:
                // some sort of call to  compute weight on Moon

            case 2:
                // function to compute gravitational force

            case 3:
                // compute surface gravity
            
            case 4: // exit
                break;

        return 0;
    }





int main()
{
    int userChoice;
    cout << "<=> Try To Orbit: Mission Physics Console <=>\n"
        << "1. Compute weight on Moon\n"
        << "2. Compute gravitational force\n" // maybe expand this more to have on moon vs earth vs weights or speeds?
        << "3. Compute surface gravity\n"
        << "4. Exit\n"
       << "Please input your numberial value.";

    // TODO: edge case if they input anything other than a number 1-5
    cin >> userChoice;

    userSelection(userChoice);

     
    return 0;
}