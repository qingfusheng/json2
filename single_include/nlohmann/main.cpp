#include<iostream>
#include"json.hpp"
#include<iomanip>
#include<vector>
using json=nlohmann::json;
using namespace std;
int main(){

/*	json j;
	j["pi"] = 3.141;
	j["happy"] = true;
	j["name"] = "Niels";
	j["nothing"] = nullptr;
	j["answer"]["everything"] = 42;
	j["list"] = { 1, 0, 2 };
	j["object"] = { {"currency", "USD"}, {"value", 42.99} };
	json j2 = {
  		{"pi", 3.141},
  		{"happy", true},
  		{"name", "Niels"},
  		{"nothing", nullptr},
  		{"answer", {{"everything", 42}}},
		{"list", {1, 0, 2}},
 		{"object", {{"currency", "USD"},{"value", 42.99}}}
    };
	cout<<j<<endl<<endl;
	cout<<j2<<endl;
*//*
	// a way to express the empty array []
	json empty_array_explicit = json::array();
	cout<<"empty_array_explicit:"<<empty_array_explicit<<endl;
  
	// ways to express the empty object {}
	json empty_object_implicit = json({});
	cout<<"empty_object_implicit:"<<empty_object_implicit<<endl;
	json empty_object_explicit = json::object();
	cout<<"empty_object_explicit:"<<empty_object_explicit<<endl;
  
	// a way to express an _array_ of key/value pairs [["currency", "USD"], ["value", 42.99]]
	json array_not_object = json::array({ {"currency", "USD"}, {"value", 42.99} });
	cout<<"array_not_object:"<<array_not_object<<endl;
*//*
	//序列化 
	json j = "{\"happy\":true,\"pi\":3.141}"_json;
	cout<<j<<endl;
	auto j2=R"({"happy":true,"pi":3.141})"_json;
	cout<<j2<<endl;
	auto j3=json::parse("{\"happy\":true,\"pi\":3.141}");
	cout<<j3<<endl;*//*
	json j = {
		{"happy",true},
		{"pi",3.141}
	};
	json j2="{\"happy\":true,\"pi\":3.141}"_json;
	std::string s = j.dump();
	std::string s2 = j.dump();
	cout<<s<<endl;
	cout<<s2<<endl;*/
/*	json j = "{\"happy\":true,\"pi\":3.141}"_json;
	string s = j.dump();//dump为间隔 
	cout<<j.dump(4)<<endl;*/
/*	json j_string = "this is a string";
	auto cpp_string = j_string.get<string>();
	string cpp_string2;
	j_string.get_to(cpp_string2);
	string serialized_string = j_string.dump();
	cout<<cpp_string<<"=="<<cpp_string2 <<"=="<<j_string.get<string>()<<"\n";
	cout<<j_string<<"=="<<serialized_string<<endl;*/
/*	json j;
	std::cin>>j;
	std::cout<<j<<endl;
	std::cout<<std::setw(4)<<j<<std::endl;*/
/*	std::vector<std::uint8_t> v = {'t','r','u','e'};
	json j = json::parse(v.begin(),v.end());
	cout<<j<<endl;
	json j2 = json::parse(v);
	cout<<j2;*/
	
  	return 0;
}


