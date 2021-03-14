#include <string>
#include <vector>
#ifndef TURM_HPP_
#define TURM_HPP_

using namespace std;

class Turm{
    
      public:
       
      Turm(){      
      }
   
    

auto moeglicheZuege(int Position, int Spielfeld[64]){
    
            int neuePosition;
            int Spieler = Spielfeld[Position];
            vector<int> moeglichkeiten;
          
            if( !(Spieler == -1 | Spieler == 1  )) {
                vector<int> moeglichkeiten = {65};
                return moeglichkeiten;
            }
            
            //Laufrichtung gerade nach vorne
            for(int i = 1; i <= 7; i++){
                
                neuePosition = Position+(i*8);
                
                 //Abbruch, wenn die Felder nicht mehr auf dem Spielfeld sind.
                if(neuePosition>63 | neuePosition < 0) {
                    break;
                }
                 
                //Ist das Feld leer?
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
    
            //Laufrichtung gerade nach hinten
            for(int i = 1; i <= 7; i++){
                
                neuePosition = Position-(i*8);
                
                 //Abbruch, wenn die Felder nicht mehr auf dem Spielfeld sind.
                if(neuePosition>63 | neuePosition < 0) {
                    break;
                }
                 
                //Ist das Feld leer?
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
    
            //Laufrichtung nach rechts
            for(int i = 1; i <= 7; i++){
                
                neuePosition = Position+i;
                
                 //Abbruch, wenn die Felder nicht mehr auf dem Spielfeld sind
                if(neuePosition>63 | neuePosition < 0) {
                    break;
                }
                
                //Abbruch, damit nicht von rechts nach links gesprungen werden kann.
                if(neuePosition%8 == 0) break;
                 
                //Ist das Feld leer?
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
    
    
            //Laufrichtung nach links
            for(int i = 1; i <= 7; i++){
                
                neuePosition = Position-i;
                
                 //Abbruch, wenn die Felder nicht mehr auf dem Spielfeld sind
                if(neuePosition>63 | neuePosition < 0) {
                    break;
                }
                
                //Abbruch, damit nicht von links nach rechts gesprungen werden kann.
                if(neuePosition%8 == 7) break;
                 
                //Ist das Feld leer?
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