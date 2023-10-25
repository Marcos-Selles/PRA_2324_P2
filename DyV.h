#include <iostream>
#include <vector>

using namespace std;

template<typename valor>

int BusBin(valor val, vector<valor>& vect,int ini, int fin){
	if(ini > fin){
		return -1;
	}
	int posMedia = (ini + fin)/2;
	if(vect[posMedia] == val){
		return posMedia;
	}else{
		if(vect[posMedia] < val){
			return BusBin(val,vect,posMedia+1,fin);
		}else{
			return BusBin(val,vect,ini,posMedia-1);
		}
	}
}
