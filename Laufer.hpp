#include <string>
#include <vector>
#ifndef LAUFER_HPP_
#define LAUFER_HPP_

using namespace std;

class Laufer{
    
      public:

      Laufer(){ 
      }
   
    

auto moeglicheZuege(int Position, int Spielfeld[64]){
    


            int neuePosition;
            int Spieler = Spielfeld[Position];
          
            if( !(Spieler == -3 | Spieler == 3  )) {
                vector<int> moeglichkeiten = {65};
                return moeglichkeiten;
            }
                
                
            vector<int> moeglichkeiten;
            
            //Laufrichtung vorne-rechts
            for(int i = 1; i <= 7; i++){
                
                neuePosition = Position-((i*8)-i);
                
                 //Abbruch, wenn Läufer über eine Seite wechseln will oder die Felder nicht mehr auf dem Spielfeld sind.
                if(neuePosition%8 == 0) break;
                if(neuePosition>63 | neuePosition < 0) {
                    break;
                }
                
                if(Spielfeld[neuePosition] == 0){
                    moeglichkeiten.push_back(neuePosition);
                }
                //Ist es ein Gegner
                else if(Spielfeld[neuePosition] / abs(Spielfeld[neuePosition]) !=  Spieler / abs(Spieler)){
                    moeglichkeiten.push_back(neuePosition);
                    break;
                }
                //Gleiche Spieler
                else if(Spielfeld[neuePosition] / abs(Spielfeld[neuePosition]) ==  Spieler / abs(Spieler)){
                    break;
                }   
            }
    
            //Laufrichtung vorne-links
            for(int i = 1; i <= 7; i++){
                
                neuePosition = Position-((i*8)+i);
                
                //Abbruch, wenn Läufer über eine Seite wechseln will oder die Felder nicht mehr auf dem Spielfeld sind.
                if(neuePosition%8 == 7) break;
                if(neuePosition>63 | neuePosition < 0) {
                    break;
                }
                
                if(Spielfeld[neuePosition] == 0){
                    moeglichkeiten.push_back(neuePosition);
                }
                //Ist es ein Gegner
                else if(Spielfeld[neuePosition] / abs(Spielfeld[neuePosition]) !=  Spieler / abs(Spieler)){
                    moeglichkeiten.push_back(neuePosition);
                    break;
                }
                //Gleiche Spieler
                else if(Spielfeld[neuePosition] / abs(Spielfeld[neuePosition]) ==  Spieler / abs(Spieler)){
                    break;
                }   
            }
    
            //Laufrichtung hinten-rechts
            for(int i = 1; i <= 7; i++){
                
                neuePosition = Position+(i*8)+i;
                
                 //Abbruch, wenn Läufer über eine Seite wechseln will oder die Felder nicht mehr auf dem Spielfeld sind.
                if(neuePosition%8 == 0) break;
                if(neuePosition>63 | neuePosition < 0) break;
              
                if(Spielfeld[neuePosition] == 0){
                    moeglichkeiten.push_back(neuePosition);
                }
                //Ist es ein Gegner
                else if(Spielfeld[neuePosition] / abs(Spielfeld[neuePosition]) !=  Spieler / abs(Spieler)){
                    moeglichkeiten.push_back(neuePosition);
                    break;
                }
                //Gleiche Spieler
                else if(Spielfeld[neuePosition] / abs(Spielfeld[neuePosition]) ==  Spieler / abs(Spieler)){
                    break;
                }   
            }
    
            //Laufrichtung hinten-links
            for(int i = 1; i <= 7; i++){
                
                neuePosition = Position+((i*8)-i);
                
                 //Abbruch, wenn Läufer über eine Seite wechseln will oder die Felder nicht mehr auf dem Spielfeld sind.
                if(neuePosition%8 == 7) break;
                if(neuePosition>63 | neuePosition < 0) {
                    break;
                }
                if(Spielfeld[neuePosition] == 0){
                    moeglichkeiten.push_back(neuePosition);
                }
                //Ist es ein Gegner
                else if(Spielfeld[neuePosition] / abs(Spielfeld[neuePosition]) !=  Spieler / abs(Spieler)){
                    moeglichkeiten.push_back(neuePosition);
                    break;
                }
                //Gleiche Spieler
                else if(Spielfeld[neuePosition] / abs(Spielfeld[neuePosition]) ==  Spieler / abs(Spieler)){
                    break;
                }   
            }
            
    
    

            return moeglichkeiten;
}
};
#endif