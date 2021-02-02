#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a,int *b,int *c,int *d){
	int temp[]={*a,*b,*c,*d};
	int usedTemp[4];
	
	int i=0;
	do{
		int rando=rand()%4;
		bool dupe=false;

		for(int count=0;count<i;count++){
			if(usedTemp[count]==temp[rando]) dupe=true;
		}

		if (dupe){
			continue;
		}else{
			usedTemp[i]=temp[rando];
			i++;
		}

	}while(i<4);
	
	*a = usedTemp[0];
	*b = usedTemp[1];
	*c = usedTemp[2];
	*d = usedTemp[3];
} 
