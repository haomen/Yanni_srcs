#include <iostream>

class Car {
 public:
  Car():m_miles(0){}

  // prefix increment operator, everytime +1                                                                                                                                                                        
  Car& operator++() {
    m_miles += 1;
    return *this;
  }

  int get_miles() {return m_miles;}

 private:
  int m_miles;
};

int main(){
  Car a_car;
  std::cout << "Initial miles:" << a_car.get_miles() << std::endl;
  ++a_car;
  std::cout << "Member prefix increment:" << a_car.get_miles() << std::endl;

  return 0;
}

