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
*     + [ ] public member function calculateCost that returns a double indicating the cost associated with shipping the package
*     + [x] Sender and Receiver have:
*         + [x] Name
*         + [x] City
*         + [x] State
*         + [x] Address
*         + [x] ZIP
*         + [x] Pkg weight oz
*        
*  + [x] include child class TwoDayPackage to derive from package
*     + [ ] have data member for flat fee
*     + [ ] redefine calculateCost to compute flat fee
* 
*  + [x] include child class OvernightPackage to derive from package
*     + [ ] additional data member representing an additional fee per ounce charged for overnight-delivery service.
*     + [ ] OvernightPackage should redefine member function calculateCost so that it adds the additional fee 
*       per ounce to the standard cost per ounce before calculating the shipping cost.
********************/

#include <instream>

using namespace std;

class Package(
    public:
        double calculateCost (){
            
        }
        
    private:
      string senderName;
      string senderCity;
      string senderState;
      string senderAddress;
      int senderZIP;
            
      string receiverName;
      string receiverCity;
      string receiverState;
      string receiverAddress;
      int receiverZIP;
      
      int PkgWeight;
      int CostPerOZ;
      
      
      
    
);

class TwoDayPackage : private Package (
    
);

class OvernightPackage : private Package (
    
);

int main(){

    
    
    
    return 0;
}
