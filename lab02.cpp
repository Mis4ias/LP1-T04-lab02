#include <iostream>
#include <vector>

using namespace std;

void concat(std::vector<int> vtr1 ;std::vector<int> vtr2;){
	for (unsigned int i = 0;i< vtr1.size();i++){
		vtr3+=vtr1[i];
	}

	for (unsigned int i = 0;i< vtr2.size();i++){
		vtr3+=vtr2[i];
	}
	



}

int main(){
	vector <int> vtr1;
	vector <int> vtr2;
	vector <int> vtr3;
	cin>> vtr1 >>endl;
	cin>> vtr2 >>endl;
	concat(vtr1,vtr2,vtr3);
	cout << vtr3 << endl;
}