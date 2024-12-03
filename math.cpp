// SHane Pricken
// math lab
// 12-3-24

// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Question 1
    // There are currently 10 ants in the colony. The number of ants gets exponentially raised each month. How many ants will there be in 5 months?
    // I messed up the question on the doc oops
    
    int population = 10;
    int months = 5;
    int totalAnts = pow(population, months);
    
    cout << "There are currently " << population << " ants in the colony. In " << months << " there will be " << totalAnts << " ants in the colony." << endl;
    
    //Question 2
    // Wood bricks are created at 10 inches a piece, with -0.2 inches of tolerance. What is the absolute value of the amount of tolerance allowed?
    double tolerance = -0.2;
    double absValue = fabs(tolerance);
    
    cout << "If Wood bricks are created at 10 inches a piece, with " << tolerance << " inches of tolerance, the absolute value of the tolerance would be " << absValue << endl;
    
    // Question 3
    // I didn't really understand this question enough to solve it so it switched it to something easier
    // Chris has 64 pearl necklaces, and Matthew has 81 Canadian hats. What is the difference in their squares?
    
    int chris = 64;
    int matthew = 81;
    
    int chrisSq = sqrt(chris);
    int matthewSq = sqrt(matthew);
    
    cout << " If Chris has 64 pearl necklaces, and Matthew has 81 Canadian hats, then the difference of their square roots would be " << matthewSq << " - " << chrisSq << " which is " << matthewSq - chrisSq << endl;
    
    
    
    

    return 0;
}
