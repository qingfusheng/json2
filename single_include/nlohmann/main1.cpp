#include<iostream>
#include"json.hpp"
#include<iomanip>
#include<vector>
#include<deque>
#include<list> 
#include<array>
#include<set>
#include<unordered_set>
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
	//���л� 
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
	string s = j.dump();//dumpΪ��� 
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
/*	json j;
	j.push_back("foo");
	j.push_back(1);
	j.push_back(true);
	j.emplace_back(1.78);
	for(json::iterator it=j.begin();it!=j.end();++it){
		std::cout<<*it<<endl;
	}
	for(auto& element : j){
		std::cout<<element<<endl;
	}
	cout<<j<<endl; 
	const auto tmp = j[0].get<std::string>();
	j[1]=42;
	bool foo = j.at(2);
	cout<<foo<<endl;
	j = "[\"foo\",42,true]"_json;
	cout<<j<<endl;
	cout<<j.size()<<endl;
	cout<<j.empty()<<endl;
	j.type();
	j.clear();
	cout<<j.is_null()<<endl;
	cout<<j.is_boolean()<<endl;
	cout<<j.is_number()<<endl;
	cout<<j.is_object()<<endl;
	cout<<j.is_array()<<endl;
	cout<<j.is_string()<<endl;*/
/*	json o;
	o["foo"]=23;
	o["bar"]=false;
	o["baz"]=3.141;
	o.emplace("weather","sunny");
	for(json::iterator it=o.begin();it!=o.end();it++){
		std::cout<<it.key()<<":"<<it.value()<<"\n";
	}
	for(auto& el:o.items()){
		std::cout<<el.key()<<":"<<el.value()<<"\n";
	}
	//for(auto& [key,value]:o.items()){//ע�⣬�˴��﷨��c++1z����gnu++1z֧�� 
	//	std::cout<<key<<" : "<<value<<"\n";
	//}
	if(o.contains("foo"))
		std::cout<<"There is an entry with key 'foo'"<<endl;
	if(o.find("foo")!=o.end()){
		std::cout<<"There is an entry with key 'foo'"<<endl;
	}
	int foo_present = o.count("foo");
	int fob_present = o.count("fob");
	cout<<"foo_present:"<<foo_present<<" "<<"fob_present:"<<fob_present<<endl;
	o.erase("foo");
	cout<<o<<endl;*/
/*	std::vector<int> c_vector {1,2,3,4};
	json j_vec(c_vector);
	cout<<j_vec<<endl;//[1,2,3,4]
	std::deque<double> c_deque{1.2,2.3,3.4,5.6};
	json j_deque(c_deque);
	cout<<j_deque<<endl;
	std::list<bool> c_list {true,true,false,true};
	json j_list(c_list);
	cout<<j_list<<endl;
	std::forward_list<int64_t> c_flist{12345345654678,34563457887654,23456784576545,76545678765456};
	json j_flist(c_flist);
	cout<<j_flist<<endl;
	std::array<unsigned long,4>c_array{{1,2,3,4}};
	json j_array(c_array);
	cout<<j_array<<endl;
	std::set<std::string> c_set{"one","two","three","four","one"};
	json j_set(c_set);
	cout<<j_set<<endl;
	std::unordered_set<std::string>c_uset{"one","two","three","four","one"};
	json j_uset(c_set);
	cout<<j_uset<<endl;
	std::multiset<std::string> c_mset{"one","two","three","four","one"};
	json j_mset(c_mset);
	cout<<j_mset<<endl;
	std::unordered_multiset<std::string> c_umset{"one","two","three","four","one"};
	json j_umset(c_umset);
	cout<<j_umset<<endl;*/
	
/*	std::map<std::string, int> c_map { {"one", 1}, {"two", 2}, {"three", 3} };  // map
	json j_map(c_map);
	cout<<j_map<<endl;// {"one": 1, "three": 3, "two": 2 }
	std::unordered_map<const char*, double> c_umap { {"one", 1.2}, {"two", 2.3}, {"three", 3.4} };
	json j_umap(c_umap);
	cout<<j_umap<<endl;// {"one": 1.2, "two": 2.3, "three": 3.4}
	std::multimap<std::string, bool> c_mmap { {"one", true}, {"two", true}, {"three", false}, {"three", true} };
	json j_mmap(c_mmap); // only one entry for key "three" is used
	cout<<j_mmap<<endl;// maybe {"one": true, "two": true, "three": true}
	std::unordered_multimap<std::string, bool> c_ummap { {"one", true}, {"two", true}, {"three", false}, {"three", true} };
	json j_ummap(c_ummap); // only one entry for key "three" is used
	cout<<j_ummap<<endl;// maybe {"one": true, "two": true, "three": true}*/
	// a JSON value
	/*json j_original = R"({
  		"baz": ["one", "two", "three"],
  		"foo": "bar"
	})"_json;
	cout<<j_original<<endl;
	j_original["/baz/1"_json_pointer];
	cout<<j_original<<endl;
	json j_patch = R"([
 		{ "op": "replace", "path": "/baz", "value": "boo" },
  		{ "op": "add", "path": "/hello", "value": ["world"] },
  		{ "op": "remove", "path": "/foo"}
	])"_json;
	json j_result = j_original.patch(j_patch);
	cout<<j_result<<endl;
	cout<<"****hello****"<<endl;
	cout<<json::diff(j_result, j_original)<<endl;*/
/*	json j_document = R"({
		"a":"b",
		"c":{
			"d":"e",
			"f":"g"
		}
	})"_json;
	cout<<j_document<<endl;
	json j_patch=R"({
		"a":"z",
		"c":{
			"f":null
		}
	})"_json;
	cout<<j_patch<<endl;
	j_document.merge_patch(j_patch);
	cout<<j_document<<endl;
	std::string s1="Hello World!"; // implicit conversions隐式转换
	json js = s1;
	cout<<js<<endl;
	auto s2= js.get<std::string>();
	std::string s3 = js;
	std::string s4;
	s4 = js;
	cout<<s1<<endl<<s2<<endl<<s3<<endl<<s4<<endl;

	bool b1 = true;
	json jb = b1;
	bool b2 = jb.get<bool>();
	bool b3 = jb;
	bool b4;
	b4 = jb;
	cout<<b1<<endl<<b2<<endl<<b3<<endl<<b4<<endl;
	int i=42;
	json jn = i;
	auto f = jn.get<double>();
	double f2 = jb;
	double f3;
	f3 = jb;
	cout<<f<<endl<<f2<<endl<<f3<<endl;
	char ch = 'A';
	json j_default = ch; //65
	json j_string = std::string(1,ch); //'A'
	cout<<j_default<<endl<<j_string<<endl;*/
  	return 0;
}


