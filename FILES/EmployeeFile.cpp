#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<list>
#include<vector>
using namespace std;
//seprated by ','
class Employee{
    public:
    string firstName;
    string lastName;
    public:
    Employee(string firstName, string lastName){
        this->firstName = firstName;
        this->lastName = lastName;
    }

    void toString()
    {
        cout<< firstName << " " << lastName << endl;
    }
};

void display(vector<Employee> lst)
{
    //list<Employee> :: iterator itr;

    for(auto itr = lst.begin(); itr != lst.end(); itr++)
    {
        itr->toString();
    }
}
int main()
{
    ifstream myFileStream("sample.txt");
    if(!myFileStream.is_open()){
        cout<<"File failed to open"<<endl;
        return 0;
    }
    string firstName, lastName;
    string line;
    list<string> all_data;
    vector<Employee> empList;

    while(getline(myFileStream, line))
    {
        stringstream ss(line);
        getline(ss, firstName, ',');
        getline(ss, lastName, ',');
        cout<<firstName<<endl;
        cout<<lastName<<endl;

        Employee emp(firstName, lastName);
        empList.push_back(emp);

        //add to list
       // all_data.push_back(firstName);
       // all_data.push_back(lastName);
    } 
    
    myFileStream.close();
    display(empList);
}