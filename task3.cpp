#include <iostream>
using namespace std;

class SmartDevice {
  
  private:
  
  string name;
    string devicetype;
     string status;
     public:
     SmartDevice(string name, string devicetype,string status ="off")
     {
       this->name=name;
       this->devicetype=devicetype;
       this->status=status;
       cout<< name <<"("<<devicetype<<") has been aded to your home";
       
     }
    void turnon()
      {
        status ="on";
        cout<<name<<" is now ON"<< endl;
      }
    
  void turnOff()
      {
        status ="off";
        cout<<name<<" is now OFF"<< endl;
      }
    ~SmartDevice()
    {
      cout <<name <<"("<<devicetype<<")is shutting down."<<endl;
    }
    
};
int main()
{
  SmartDevice light("living Room Light","Smart light");
  SmartDevice vacuum("Robovac", "robo vaccum","on");
  SmartDevice coffee_maker("Coffee Overlord", "Coffee Maker");
    
    light.turnon();
    vacuum.turnOff();
    
}