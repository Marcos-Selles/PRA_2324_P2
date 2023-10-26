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

template <typename valor2>

int BusBinInv(valor2  val, vector<valor2>& vect,int ini, int fin){
        if(ini > fin){
                return -1;
        }
        int posMedia = (ini + fin)/2;
        if(vect[posMedia] == val){
                return posMedia;
        }else{
                if(vect[posMedia] < val){
                        return BusBinInv(val,vect,ini,posMedia-1);
                }else
                        return BusBinInv(val,vect,posMedia+1,fin);
                }
        }

