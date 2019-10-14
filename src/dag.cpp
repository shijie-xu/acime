#include <iostream>
#include <map>
#include <vector>
#include <fstream>

using namespace std;


typedef enum _con_state{
	HEAD, CONS, CHAR
}con_state;

typedef struct _hanzi{
	std::string c;
	std::vector<struct _hanzi*> chaizi;
}hanzi;

std::map<hanzi, int> hanzis;


int main(){
	std::string filePath = ("../chaizi-ft.txt");
	std::ifstream infile(filePath);
	std::string line;
	while(std::getline(infile, line)){
		//std::cout << line << std::endl;
		con_state pos = HEAD; //look for head
		for(std::string::iterator it = line.begin(); it != line.end(); it++){
			//std::cout << *it;
			if (*it != '\r' && *it != '\n'){
				if (pos == HEAD){
					std::cout << *it;
					pos = CONS; 
				}
			}
			//std::cout << *it;
		}
	}
	return 0;
}
