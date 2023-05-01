#include <iostream>
#include <cmath>



int main(){
int calcChooser;

std::cout << "Enter 1 for distance formula: \n";
std::cout << "Enter 2 for midpoint formula: \n";
std::cout << "Enter 3 for endpoint formula: \n\n";

std::cout << "Enter 4 for Triangle formula: \n";



std::cin >> calcChooser;

if(calcChooser == 1){

  
    double x1;
    double x2;
    double y1;
    double y2; 
        
    


    std::cout << "Enter X1: \n";
    std::cin >> x1;

    std::cout << "Enter X2: \n";
    std::cin >> x2;

    std::cout << "Enter Y1: \n";
    std::cin >> y1;

    std::cout << "Enter Y2: \n";
    std::cin >> y2;

 


 double xroot = x2 - x1;
        double yroot = y2 - y1;


    double xSquared = xroot * xroot;
        double ySquared = yroot * yroot;

    double awnser = xSquared + ySquared;
    std::cout << "The awnser is rad " << awnser << " or " << sqrt(awnser);
}

    else if(calcChooser == 2){

     double x1;
    double x2;
    double y1;
    double y2; 


     std::cout << "Enter X1: \n";
    std::cin >> x1;

    std::cout << "Enter X2: \n";
    std::cin >> x2;

    std::cout << "Enter Y1: \n";
    std::cin >> y1;

    std::cout << "Enter Y2: \n";
    std::cin >> y2;

        double yPoint = y1 + y2;
        double xPoint = x1 + x2;

        std::cout << "The midpoint is: " << xPoint / 2 << ", " << yPoint / 2;
    }

    else if (calcChooser == 3){
    double midpointY;
    double midpointX;
    double endpointY;
    double endpointX;
    
    std::cout << "Enter Midpoint X: \n";
    std::cin >> midpointX;

    std::cout << "Enter Midpoint Y: \n";
    std::cin >> midpointY;

    double xtimesTwo = midpointX * 2;
    double ytimesTwo = midpointY * 2;

    std::cout << "Enter Endpoint X: \n";
    std::cin >> endpointX;

    std::cout << "Enter Endpoint Y: \n";
    std::cin >> endpointY;

    std::cout << "The second endpoint is at " << xtimesTwo - endpointX << " , " << ytimesTwo - endpointY;
            
   
    }

    

    else{
        std::cout << "Error";
    }
}