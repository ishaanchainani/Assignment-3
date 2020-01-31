#include <iostream>
using namespace std;

class Pet

{

public:

  // member variables

  string name;
  int age;
  string type;
  double weight;

//mutators and accessors for pet

  void setName(string name);
  void setType(string type);
  void setAge(int age);
  void setWeight(double weight);

  string getName();
  string getType();
  int getAge();
  double getWeight();
};

// mutator name
void Pet::setName(string nameOfPet)
{
  name = nameOfPet;
}

//mutator type
void Pet::setType(string typeOfPet)
{
  type = typeOfPet;
}
//mutator age
void Pet::setAge(int ageOfPet)
{
  age = ageOfPet;
}

// mutator weight
void Pet::setWeight(double weightOfPet)
{
  weight = weightOfPet;
}
// accessor to retreive name
string Pet::getName()
{
  return name;
}
//accessor to retreive type
string Pet::getType()
{
  return type;
}
//accessor to retreive age
int Pet::getAge()
{
  return age;
}
//accessor to retreive weight
double Pet::getWeight()
{
  return weight;
}

int main()
{
  // first instance of Pet
  Pet firstPet;
  firstPet.setName("Joe");
  firstPet.setAge(4);
  firstPet.setType("Cat");
  firstPet.setWeight(134.7);


  //print to console first instance
  cout << "Name: " << firstPet.getName() << endl;
  cout << "Age: " << firstPet.getAge() << endl;
  cout << "Type: " << firstPet.getType() << endl;
  cout << "Weight: " << firstPet.getWeight() << endl;


  // second instance of Pet
  Pet secondPet;
  secondPet.setName("Stinky");
  secondPet.setAge(23);
  secondPet.setType("Donkey");
  secondPet.setWeight(455.3);


  //print to console second instance
  cout << "Name: " << secondPet.getName() << endl;
  cout << "Age: " << secondPet.getAge() << endl;
  cout << "Type: " << secondPet.getType() << endl;
  cout << "Weight: " << secondPet.getWeight() << endl;

  return 0;

}
