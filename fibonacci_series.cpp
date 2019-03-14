/*

precious idehen

program: fibonacci series using recursive function


*/
#include <iostream>
using namespace std;

int fibonacci(int num) {
	if(num == 1 or num == 0)
		return(num);
	else
		return(fibonacci(num - 1) + fibonacci(num - 2));
}

int main() {
	
	int num;
	cout<<"Enter the number of terms for the series: ";
	cin>>num;
	cout<<"\n\n";
	cout<<"the fibonacci series is:"<<endl;
	int i = 0;
	while(i<num) 
	{
		cout<<fibonacci(i)<<", ";
		i++;
	}
	return 0;
}
