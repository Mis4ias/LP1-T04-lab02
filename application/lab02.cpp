#include <iostream>
#include "unidi.h"
#include <vector>

using namespace std;

int main(){
	vector<int> vtr1;	
	vector<int> vtr2;
	vector<int> vtr3;
	int aux;
	for (unsigned int i = 0; i < 2; ++i){
		cin>>aux;
		vtr1.push_back(aux);  	
	}
	
	for (unsigned int i = 0; i < 2; ++i){
		cin>>aux;
		vtr2.push_back(aux);  	
  	
	}
	
	concat(vtr1,vtr2,vtr3);
  	
  	for (unsigned int i = 0; i < vtr3.size(); ++i){
  		cout<<vtr3[i]; 	
  	}
  	cout<<endl;
  	return 0;
}