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
*  + [ ] Use class Package as the base class of the hierarchy
*     + [ ] Contstructor init members
*     + [ ] weight and cost are positive 
*     + [ ] public member function calculateCost that returns a double indicating the cost associated with shipping the package
*     + [ ] Sender and Receiver have:
*         + [ ] The Name
*         + [ ] City
*         + [ ] State
*        
*         + [ ] Address
*         + [ ] ZIP
*         + [ ] Pkg weight oz
*  + [ ] include child class TwoDayPackage to derive from package
*     + [ ] have data member for flat fee
*     + [ ] redefine calculateCost to compute flat fee
* 
*  + [ ] include child class OvernightPackage to derive from package
*     + [ ] additional data member representing an additional fee per ounce charged for overnight-delivery service.
*     + [ ] OvernightPackage should redefine member function calculateCost so that it adds the additional fee 
*       per ounce to the standard cost per ounce before calculating the shipping cost.
********************/
//Start Header here
#include "Package.h"

// **** Function Definitions ****
  // Default Constructor

  // Overlaod Constructor
  
  // Destructor
  
    
  /****************************************/
  
  // Accessor Functions

  // Mutator Functions
  
