#include <iostream>
using namespace std;

class HouseA {
    //abstraction has achieved by using class
private:
	// private variables
    //private members are only accessible by functions of that class
	int room, kitchen,balcony;
public:
	void print(int room,int kitchen,int balcony)
	{
		cout<<"No of rooms in the house : "<<room<<endl;
		cout<<"No of kitchen in the house : "<<kitchen<<endl;
		cout<<"No of balcony in the house : "<<balcony<<endl;
	}
};
int main()
{
	HouseA house;
    house.print(3,2,3);
	return 0;
}
