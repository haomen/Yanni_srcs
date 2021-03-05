class Address {
public:
	// one parameter constructor
	Address(const std::string& street):m_street(street) {}
	// Default constructor using delegation
	Address() {Address("Default street");}

	// copy constructor
	Address(const Address& address) {
		m_street = address.street();
		m_township = address.township();
		m_state = address.state();
		m_zipcode = address.zipcode();
	}


	// acccessor
	const std::string& street() {return m_street;}
	const std::string& township() {return m_township;}
	const std::string& state() {return m_state;}
	int zipcode() {return m_zipcode;}

	// mutator
	void set_street(const std::string& street) {m_street = street;}
	void set_township(const std::string& township) {m_township = township;}
	void set_state(const std::string& state) {m_state = state;}
	void set_zipcode(int zipcode) {m_zipcode = zipcode;}

private:
	std::string m_street;
	std::string m_township;
	std::string m_state;
	int m_zipcode;
};


class Person {
public:
	// one parameter constructor
	Person(const std::string& name):m_name(name){}
	// Default constructor
	Person() {Person("no name");}

	// accessor
	const std::string& name() {return m_name;}
	int age() {return m_age;}
	const Address& address() {return m_address;}

	// mutator
	void set_name(const std::string& name) {m_name = name;}
	void set_age(int age) {m_age = age;}
	void set_address(const Address& address) {m_address = address;}
private:
	std::string m_name;
	int m_age;
	Address m_address;
};
