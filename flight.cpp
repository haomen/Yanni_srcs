#include <iostream>
#include <string>

using namespace std;

class Flight {
 public:
  Flight(){m_distance = 0.0;}
  Flight(const std::string& destination, float distance) : m_destination(destination), m_distance(distance){}
  ~Flight(){}

  friend ostream& operator << (ostream&, const Flight&);
 private:
  std::string m_destination;
  float m_distance;
};

ostream& operator<<(ostream& os, const Flight& flight) {
  os << "destination:" << flight.m_destination << ", distance:" << flight.m_distance;
  return os;
}

int main(){
  Flight a_flight("Newyork", 300.0);
  cout<< a_flight << endl;

  return 0;
}
