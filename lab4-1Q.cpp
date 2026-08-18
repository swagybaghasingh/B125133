#include<iostream>
using namespace std;

class Diary {
  private:
  string owner , lastEntry;
  int entries;

  public:
      Diary( string o , int e , string l) {
        owner = o;
        entries = e ;
        lastEntry= l ;

      }
      friend void displayDiary(Diary d);
      
};

void displayDiary(Diary d) {
     cout << "Owner: "<< d.owner << endl ;
      cout << "Entries: "<< d.entries << endl;
      cout<< " last entry : "<<d.lastEntry << endl;
}
int main (){
  Diary d("SWASTIK", 10, " Study OOP");
  displayDiary(d);

  return 0;
}