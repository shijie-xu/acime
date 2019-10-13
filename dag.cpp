#include <iostream>
using namespace std;

typedef struct _hanzi{
	std::string c;
	std::vector<hanzi*> chaizi;
}hanzi;



int main(){
	hanzi root;
	root->c = "二";
	return 0;
}
