#include <iostream>

class Client {
private:
	std::string name;
	std::string service;
	int account;

public:
	Client(){}
	Client(std::string _name, std::string _service, int _account) { name = _name; service = _service; account = _account; }
	std::string getName(){ return name; }
	std::string getService() { return service; }
	int getAccount() { return account; }

	friend std::ostream & operator<< (std::ostream & out, const Client & client)
	{
		out << "Client: " << client.name << " wants " << client.service << " on account " << client.account;
	}
};