 #include<iostream>
 #include<string>
 using namespace std;
 class FootballPlayer 
    {
   private:
    string  playerName;
     string  position;
    int goalCount;
     public:
         FootballPlayer(string name = "Unknown Player", string pos = "Benchwarmer", int goals = 0) {
        playerName =  name;
        position =pos;
         goalCount = goals;
            }
      FootballPlayer(const FootballPlayer &other) 
            {
      playerName = other.playerName;
       position  = other.position;
      goalCount =  other.goalCount;
         }
    void boostGoals(int goals)  
    {
        goalCount += goals;
    }
    void displayPlayerProfile() const  
       {
        cout << "Player: " << playerName << "\nPosition: " << position << "\nGoals Scored: " << goalCount << endl;
   }
   };
      int main() 
    {
    FootballPlayer   defaultPlayer;
     FootballPlayer messi("Lionel Messi", "Forward", 800);
      FootballPlayer  ronaldo(messi); 
    FootballPlayer neymar("Neymar Jr.", "Midfielder", 10); 
    messi.boostGoals(10);
    neymar.boostGoals(5);
      defaultPlayer.displayPlayerProfile();
    messi.displayPlayerProfile();
     ronaldo.displayPlayerProfile();
    neymar.displayPlayerProfile();
    


    return 0;
    }
