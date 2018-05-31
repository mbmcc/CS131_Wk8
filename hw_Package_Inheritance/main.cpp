/************************
* Matthew McCourry (CS131 SPR - 2018)
* Project notes, user stories and objectives
*
* (Package Class) 
*  Package-delivery services, such as FedEx®, DHL® and UPS®, offer a number of different shipping options, each with specific costs associated. 
*  Create an inheritance hierarchy to represent various types of packages. 
*  Make a Package class, that contains values for a shipped item
*  Class has two children TwoDayPackage and OvernightPackage
*************************/

/********************
* Checklist:
*  + [x] Use class Package as the base class of the hierarchy
*     + [ ] Contstructor init members
*     + [ ] weight and cost are positive 
*     + [x] ] public member function calculateCost that returns a double indicating the cost associated with shipping the package
*     + [x] Sender and Receiver have:
*         + [x] Name
*         + [x] City
*         + [x] State
*         + [x] Address
*         + [x] ZIP
*         + [x] Pkg weight oz
*        
*  + [x] include child class TwoDayPackage to derive from package
*     + [x] have data member for flat fee
*     + [x] redefine calculateCost to compute flat fee
* 
*  + [x] include child class OvernightPackage to derive from package
*     + [x] additional data member representing an additional fee per ounce charged for overnight-delivery service.
*     + [x] OvernightPackage should redefine member function calculateCost so that it adds the additional fee 
*       per ounce to the standard cost per ounce before calculating the shipping cost.
********************/

#include <iostream>
#include <string>

using namespace std;

class Package(
    public:
      double calculateCost(){
        return pkgWeight * costPerOZ;
      }
      unsigned int setWeight(iWeight){
        return pkgWeight = iWeight;
      }
      unsigned int setCost(iCost){
        return costPerOZ = iCost;
      }
        
    private:
      string Name;
      string City;
      string State;
      string Address;
      int ZIP;
      
      unsigned int pkgWeight;
      unsigned int costPerOZ;
);

class TwoDayPackage : private Package (
    public: 
      double calculateCost (){
        return flatFee
      }
    private:
      int flatFee; 
);

class OvernightPackage : private Package (
    public: 
      double calculateCost () {
        return  (pkgWeight * costPerOZ) + (pkgWeight * overnightFee);
      }
    private:
      int overnightFee;
);

/********** Contstructors *********/
Package::Package
/********** End Contstructors *********/
/********** Begin Main *********/
int main(){
  Package 20180531001; //name of the oject is YYYYMMDDNumber
  20180531001.calculateCost
    return 0;
}
/********* End Main *********/