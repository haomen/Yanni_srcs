#include <iostream>
#include <string>

using namespace std;

class Vehicle {
 public:
  // Constuctor to take name and type                                                                                                                      
  Vehicle(const string& name, const string& type) {
    name_ = name;
    type_ = type;
  }
  // Default constructor                                                                                                                                   
  Vehicle(){
    name_ = "No name";
    type_ = "No type";
  }
  // Destructor                                                                                                                                            
  ~Vehicle(){}

  const string& get_name() const {
    return name_;
  }
  const string& get_type() const {
    return type_;
  }

  void set_name(const string& name) {
    name_ = name;
  }
  void set_type(const string& type) {
    type_ = type;
  }

 private:
  string name_;
  string type_;
};

void PrintVehicle(const Vehicle& vehicle) {
  cout << "Vehicle name:" << vehicle.get_name()
       << ", type:" << vehicle.get_type() << endl;
}

int main(int argc, char** argv) {
  Vehicle vehicle_1{"name1", "type1"};
  PrintVehicle(vehicle_1);
  cout << "Set name to name11," << endl;
  vehicle_1.set_name("name11");
  cout << "Set type to type11," << endl;
  vehicle_1.set_type("type11");
  PrintVehicle(vehicle_1);

  return 0;
}


