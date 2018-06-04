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
 *     + [x] Contstructor init members
 *     + [x] weight and cost are positive 
 *     + [x] public member function calculateCost that returns a double indicating the cost associated with shipping the package
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


using namespace std;

class Package{
public:
  Package(){
    pkgWeight = 0;
    costPerOZ = 0;
  }
  double calculateCost(){
    return pkgWeight * costPerOZ;
  }
  void setWeight(int iWeight){
    if (iWeight < 0)
      iWeight *= -1;
    pkgWeight = iWeight;
  }
  void setCost(int iCost){
    if (iCost < 0)
      iCost *= -1;
    costPerOZ = iCost;
  }
  void displayValues(){
    std::cout << "pkgWeight = " << pkgWeight << endl;
    std::cout << "costPerOZ = " << costPerOZ << endl;
  }
  
protected:
  string Name;
  string City;
  string State;
  string Address;
  int ZIP;
  
  int pkgWeight; //value in cents
  int costPerOZ; //weight in ounces
};

class TwoDayPackage : public Package {
public: 
  TwoDayPackage(){
    flatFee = 2000; //cents
  }
  double calculateCost (){
    return flatFee;
  }
  void displayRate(){
    cout << "The flat rate is $" << flatFee /100 << endl;
  }
private:
  int flatFee; 
};

class OvernightPackage : public Package {
public: 
  OvernightPackage(){
    overnightFee = 20; // cents per oz
    overnightRate = 0;
    overnightRate += pkgWeight * overnightFee;
  }
  
  double calculateCost () {
    costPerOZ = Package::calculateCost() + (pkgWeight * overnightFee);
    return costPerOZ;
  }
  void displayRate(){
    cout << "The overnight rate is $" << overnightRate /100 << endl;
  }
private:
  int overnightFee;
  double overnightRate;
  
};


/********** Begin Main *********/
int main(){
  double cost = 0;
  int cents = 50; 
  int ounces = 32;
  
  
  Package standard;
  standard.setCost(cents);  
  standard.setWeight(ounces);
  standard.displayValues();
  cost = standard.calculateCost() /100; // output in dollars
  cout << "The cost of standard shipping is $" << cost << ". \n"<<endl;
  
  TwoDayPackage faster;
  faster.setCost(cents);
  faster.setWeight(ounces);
  faster.displayValues();
  faster.displayRate();
  cost = faster.calculateCost() /100;
  cout << "The cost of two day shipping is $" << cost << ".\n"<<endl;
  
  OvernightPackage asap;
  asap.setCost(cents);
  asap.setWeight(ounces);
  asap.displayValues();
  asap.displayRate();
  cost = asap.calculateCost() /100;
  cout << "The cost of overnight shipping is $" << cost << ".\n"<<endl;
  
  
  return 0;
};
/********* End Main *********/
