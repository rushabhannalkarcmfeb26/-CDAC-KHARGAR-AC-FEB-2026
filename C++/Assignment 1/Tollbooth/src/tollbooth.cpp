/*
 * tollbooth.cpp
 *
 *  Created on: 5 Mar 2026
 *      Author: Asus
 */

#include <iostream>

using namespace std;


   class Tollbooth{

   private:
   		int totalVehicles;
   		double totalRevenue;


   public:

   		Tollbooth() {

   			totalVehicles = 0;
   			totalRevenue = 0;
   		}

    void vehiclePayingToll(int vehicleType, double tollAmount) {

    	totalVehicles++;
    	totalRevenue+= tollAmount;

    	switch(vehicleType) {

    	case 1: cout << "Car pays Rs " << tollAmount << endl; break;
    	case 2: cout << " Truck pays Rs " << tollAmount <<endl; break;
    	case 3: cout << " Bus pays Rs " << tollAmount << endl; break;

    	default:  cout << "Unknown Vehicle Type !" << endl;

    	}

    }
     void reset(){

    	 totalVehicles=0;
    	 totalRevenue=0;

     }

  int getTotalVehicles() const {return totalVehicles;}

  double getTotalRevenue() const {return totalRevenue;}
   };




   int main() {

	   Tollbooth booth;

	   int choice;

	   do  {

		   cout << "--------TOll BOOTH MENU--------\n" ;
		   cout << " 1. Car (Rs. 180)\n";
		   cout << " 2. Truck (Rs. 300)\n";
		   cout << " 3. Bus (Rs. 350)\n";
		   cout << " 4. Display Totals\n";
		   cout << " 5. Reset Booth\n";
	       cout << " 6. Exit Booth\n";
	       cout << "Enter choice: ";
	       cin >> choice;



	       switch(choice) {
	                   case 1: booth.vehiclePayingToll(1, 180); break;
	                   case 2: booth.vehiclePayingToll(2, 300); break;
	                   case 3: booth.vehiclePayingToll(3, 350); break;
	                   case 4:
	                       cout << "Total Vehicles: " << booth.getTotalVehicles() << endl;
	                       cout << "Total Revenue: Rs. " << booth.getTotalRevenue() << endl;
	                       break;
	                   case 5: booth.reset(); cout << "Booth reset!\n"; break;
	                   case 6: cout << "Exiting...\n"; break;
	                   default: cout << "Invalid choice!\n";
	               }
	           } while(choice != 6);

	           return 0;
	       }












