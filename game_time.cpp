#include <iostream>

int main() {
    // Store assigned values in constants
    const int LEVEL_1_MINUTES = 78;
    const int LEVEL_2_MINUTES = 144;
    const int MIN_PER_HOUR = 60;

    // Calculations for Level 1
    int level_1_Hours = LEVEL_1_MINUTES / MIN_PER_HOUR;
    int level_1_Remaining_Minutes = LEVEL_1_MINUTES % MIN_PER_HOUR;

    // Calculations for Level 2
    int level_2_Hours = LEVEL_2_MINUTES / MIN_PER_HOUR;
    int level_2_Remaining_Minutes = LEVEL_2_MINUTES % MIN_PER_HOUR;

    // Calculations for the time difference
    int difference_In_Minutes = LEVEL_2_MINUTES - LEVEL_1_MINUTES;
    int diff_Hours = difference_In_Minutes / MIN_PER_HOUR;
    int diff_Remaining_Minutes = difference_In_Minutes % MIN_PER_HOUR;

    // Display the labeled outputs
    std::cout << "Level 1 Time: " << level_1_Hours << " hours and " 
              << level_1_Remaining_Minutes << " minutes" << std::endl;
              
    std::cout << "Level 2 Time: " << level_2_Hours << " hours and " 
              << level_2_Remaining_Minutes << " minutes" << std::endl;
              
    std::cout << "Level 2 took " << diff_Hours << " hours and " 
              << diff_Remaining_Minutes << " minutes longer than Level 1" << std::endl;

    return 0;
}
