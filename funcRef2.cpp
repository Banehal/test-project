 #include <iostream>
 #include <string>
// nothing
 std::string askName()
 {
 	std::cout << "What is your name?" << std::endl;
 	std::string name;
 	getline(std::cin, name);
 	return name;
 }

 void sayMyName(const std::string &nameToSay)
 {
//   	nameToSay += " Lazy";
	std::cout << "My name is: " << nameToSay << std::endl;
 }

 int main()
 {
	std::string nameOne = askName();

	sayMyName(nameOne);

	std::cout << nameOne << std::endl;
 }
