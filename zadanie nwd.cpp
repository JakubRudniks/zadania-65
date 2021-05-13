#include <iostream>

using namespace std;

int main()
{
    int a = 2,
	int b = 4;
	int c = 1;
	
    cin >> a >> b >> c;

    while(a != b)
        if(a > b) a -= b;
        else      b -= a;

    cout << a << endl;
	cin >> a;
	
	if(a == c)
	
	cout<<"Dodajemy 1 ";
	 
	 else 
	 
	 cout<<"Nie dodajemy 1";
	 
	c=a+c
	
	cout<< c;
	cin>> c;
	 
    return 0;
} 


