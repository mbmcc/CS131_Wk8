# Wk 8 CS131 Class Inheritance
## (Package Inheritance Hierarchy)
Package-delivery services, such as FedEx®, DHL® and UPS®, offer a number of different shipping options, each with specific costs associated. 
Create an inheritance hierarchy to represent various types of packages. 
Use class Package as the base class of the hierarchy, 
then include classes TwoDayPackage and OvernightPackage that derive from Package. 
Base class Package should include data members representing the name, address, city, state and ZIP code for both the sender and the recipient of the package,
in addition to data members that store the weight (in ounces) and cost per ounce to ship the package. 
Package’s constructor should initialize these data members. 
Ensure that the weight and cost per ounce contain positive values. 
Package should provide a public member function calculateCost that returns a double indicating the cost associated with shipping the package. Package’s calculateCost function should determine the cost by multiplying the weight by the cost per ounce. 
Derived class TwoDayPackage should inherit the functionality of base class Package, 
but also include a data member that represents a flat fee that the shipping company charges for two-day-delivery service. TwoDayPackage’s constructor should receive a value to initialize this data member. TwoDayPackage should redefine member function calculateCost so that it computes the shipping cost by adding the flat fee to the weight-based cost calculated by base class Package’s calculateCost function. Class OvernightPackage should inherit directly from class Package and contain an additional data member representing an additional fee per ounce charged for overnight-delivery service. OvernightPackage should redefine member function calculateCost so that it adds the additional fee per ounce to the standard cost per ounce before calculating the shipping cost. 
Write a test program that creates objects of each type of Package and tests member function calculateCost.

--------

Checklist:
 + [ ] Use class Package as the base class of the hierarchy
    + [ ] Contstructor init members
    + [ ] weight and cost are positive 
    + [ ] public member function calculateCost that returns a double indicating the cost associated with shipping the package
    + [ ] Sender and Receiver have:
        + [ ] The Name
        + [ ] City
        + [ ] State
        + [ ] Address
        + [ ] ZIP
        + [ ] Pkg weight oz
       
 + [ ] include child class TwoDayPackage to derive from package
    + [ ] have data member for flat fee
    + [ ] redefine calculateCost to compute flat fee

 + [ ] include child class OvernightPackage to derive from package
    + [ ] additional data member representing an additional fee per ounce charged for overnight-delivery service.
    + [ ] OvernightPackage should redefine member function calculateCost so that it adds the additional fee per ounce to the standard cost per ounce before calculating the shipping cost.
-----
Skeletons for the header file and class implimentation created.
All logical work / creation being worked in the main.cpp unil operational.

 
