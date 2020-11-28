#include <iostream>
#include <vector>
#include <string>
#include <chrono>
using namespace std;
using namespace std::chrono;

struct Person {
  string name;
  string surname;
  int age;
};

vector<Person> GetCityPopulation(){
  return {{"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
           {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22},
          {"Uri", "Grhhh", 10},{"Qwee","Romz", 46},{"Kharkalis", "Yumi", 22}
          
  };
}

void PrintPopulationSize(vector<Person> p) {
  cout << "There are " << p.size() << " people in the city" << endl;
}

int main()
{
  cout << "11_const_ref_person" << endl;
  
  auto start = steady_clock::now();
  vector<Person> city = GetCityPopulation();
  auto finish = steady_clock::now();
  cout << "GetCityPopulation "
    << duration_cast<milliseconds>(finish-start).count()
    << " ms" << endl;

  start = steady_clock::now();
  PrintPopulationSize(city);
  finish = steady_clock::now();
  cout << "PrintPopulationSize "
    << duration_cast<milliseconds>(finish-start).count()
    << " ms" << endl;

  return 0;
}
