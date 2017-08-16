#include <iostream>
#include <vector>

using namespace std;

void concat(vector<int> &vtr1,vector<int> &vtr2, vector<int> &vtr3){
	

	for (unsigned int i = 0;i< vtr1.size();i++){
		vtr3.push_back(vtr1[i]);
	}	

	for (unsigned int i = 0;i< vtr2.size();i++){
		vtr3.push_back(vtr2[i]);
	}
	



}
bool split(vector<int> &vtr1,vector<int> &vtr2, vector<int> &vtr3,unsigned int indice){
	vector<int> vtr4;
	for (unsigned int i = 0; i <= indice; ++i){
		vtr2.push_back(vtr1[i]);
	}

	for (unsigned int i = indice+1; i < vtr1.size(); ++i){
		vtr3.push_back(vtr1[i]);
	}

	concat(vtr2,vtr3,vtr4);
	
	for (unsigned int i = 0; i < vtr4.size(); ++i){
		if(vtr1[i]==vtr4[i]){}
		if(vtr1[i]!=vtr4[i]){
			return false;
		}
	}
	return true;
}
void merge(vector<int> &vtr1,vector<int> &vtr2, vector<int> &vtr3){
	
	for (unsigned int i = 0; i <=vtr1.size()||i <=vtr2.size() ; ++i){
		vtr3.push_back(vtr1[i]);		
		vtr3.push_back(vtr2[i+1]);
		}
}

bool partition(vector<int> &vtr1,vector<int> &vtr2, vector<int> &vtr3,unsigned int chave){

	for (unsigned int i = 0; i <vtr1.size() ; ++i){
		if(vtr1[i]>chave){
			vtr3.push_back(vtr1[i]);
		}
		if(vtr1[i]<chave){
			vtr2.push_back(vtr1[i]);
		}else{}
	}
	if(vtr1.size()==(vtr2.size()+vtr3.size())){
		return true;
	}else{
		return false;
	}

}

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
  	
  	for (int i = 0; i < vtr3.size(); ++i){
  		cout<<vtr3[i]; 	
  	}
  	cout<<endl;
  	return 0;
}