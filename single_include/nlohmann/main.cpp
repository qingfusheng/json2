#include<iostream>
#include"json.hpp"
using namespace std;
#define json nlohmann::json
namespace ns{
	struct person{
		std::string name;
		std::string address;
		int age;
	};
}
int main(){
    ns::person p = {"Ned Flanders","744 Evergreen Terrace",60};
    json j;
    j["name"]=p.name;
    j["address"]=p.address;
    j["age"] = p.age;
    cout<<j<<endl; 
    ns::person p1{
        j["name"].get<std::string>(),
        j["address"].get<std::string>(),
        j["age"].get<int>()
    };
    cout<<p1.age<<endl;
}
