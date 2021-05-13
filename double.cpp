#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double x = 1;
	double xyz,xyz1,xyz2;
	for(int i = 0; i<10000; ++i){
		inFile>>jj1;
		inFile>>jj2;
		if((jj1/jj2)<x){
			x=jj1/jj2;
			xyz1=jj1;
			xyz2=jj2;
		}
		
		cout<<xyz1<<" "<<xyz2<<endl<<xyz;
	} 
	
	return 0;
}
