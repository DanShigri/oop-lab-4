#include<iostream>
#include<string>
using namespace std;
class cricketpalyer
{
  private:
  string name;
  int jerseyNumber;
  double battingAverage;
   public:
   cricketpalyer( string name, int jerseyNumber, double battingAverage)
   {
     this->name=name;
     this->jerseyNumber=jerseyNumber;
     this->battingAverage=battingAverage;
     cout<<name<<" (#"<< jerseyNumber<<") has joined the pakistan team"<<endl;
     
   }
   cricketpalyer& improveAverage(double runs)
   {
     battingAverage += runs/10;
     return *this;
     
   }
    cricketpalyer & playMatch(double runScored)
   {
     battingAverage =(battingAverage+runScored)/2;
     return *this ;
     
   }
    void displayPlayerStats() const {
        cout << "Player: " << name << " (#" << jerseyNumber << ")\n";
        cout << "Batting Average: " << battingAverage << endl;
        cout << "This batting average is more consistent than Karachi,s weather" << endl;
    }
    
    ~cricketpalyer()
    {
      cout<<name<<" (#"<< jerseyNumber<<") has retired from pakistan team"<<endl;
    }
};
int main()
{
  cricketpalyer babar("Babar Azam", 56, 50.5);
  cricketpalyer fakhar("Fakhar Zaman ", 20, 100);
  cricketpalyer shaheen("shaheen", 78,10);
  babar.playMatch(100).improveAverage(10);
  fakhar.playMatch(90).improveAverage(20);
  babar.displayPlayerStats();
  fakhar.displayPlayerStats();
  
  
}