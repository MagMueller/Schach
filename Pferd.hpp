#include <string>
#include <vector>
#ifndef PFERD_HPP_
#define PFERD_HPP_

using namespace std;

class Pferd{
    
      public:

      Pferd(){ 
        }
       
      auto moeglicheZuege (int position, int spielfeld[64]){
          
          int neuePosition;
          int Figur = spielfeld[position];
          int FigurFarbe = spielfeld[position]/abs(spielfeld[position]);
          int neuePositionFarbe = spielfeld[neuePosition] / abs(spielfeld[neuePosition]);   
          vector<int> moeglichkeiten;
          
          if( !(Figur == 2 | Figur == -2) ) {
                moeglichkeiten.push_back(0);
                return moeglichkeiten;
            }
          
            //springt eins nach vorne und zwei nach rechts
            neuePosition = position-6;
  
                    // neue Position im Spielfeld?
                    if(neuePosition<63 && neuePosition > 0) {

                       //Kein Sprung von rechts nach links
                       if(neuePosition%8 != 0 && neuePosition%8 != 1){

                         //Ist das Feld frei?
                         if(spielfeld[neuePosition] == 0){
                           moeglichkeiten.push_back(neuePosition);  
                         }
                        //Ist es ein Gegner
                        else if(spielfeld[neuePosition] / abs(spielfeld[neuePosition]) !=  Figur / abs(Figur)){
                            moeglichkeiten.push_back(neuePosition);

                        }
                       }  
                    }  
          
            //springt zwei nach vorne und eins nach rechts
            neuePosition = position-15;
  
                    // neue Position im Spielfeld?
                    if(neuePosition<63 && neuePosition > 0) {

                       //Kein Sprung von rechts nach links
                       if(neuePosition%8 != 0){

                         //Ist das Feld frei?
                         if(spielfeld[neuePosition] == 0){
                           moeglichkeiten.push_back(neuePosition);  
                         }
                        //Ist es ein Gegner
                        else if(spielfeld[neuePosition] / abs(spielfeld[neuePosition]) !=  Figur / abs(Figur)){
                            moeglichkeiten.push_back(neuePosition);

                        }
                       }  
                    }   
             
            //springt zwei nach vorne und eins nach links
            neuePosition = position-17;
  
                    // neue Position im Spielfeld?
                    if(neuePosition<63 && neuePosition > 0) {

                       //Kein Sprung von links nach rechts
                       if(neuePosition%8 != 7){

                         //Ist das Feld frei?
                         if(spielfeld[neuePosition] == 0){
                           moeglichkeiten.push_back(neuePosition);  
                         }
                        //Ist es ein Gegner
                        else if(spielfeld[neuePosition] / abs(spielfeld[neuePosition]) !=  Figur / abs(Figur)){
                            moeglichkeiten.push_back(neuePosition);

                        }
                       }  
                    } 
          
          
            //springt eins nach vorne und zwei nach links
            neuePosition = position-10;
  
                    // neue Position im Spielfeld?
                    if(neuePosition<63 && neuePosition > 0) {

                       //Kein Sprung von links nach rechts
                       if(neuePosition%8 != 7 && neuePosition%8 != 6){

                         //Ist das Feld frei?
                         if(spielfeld[neuePosition] == 0){
                           moeglichkeiten.push_back(neuePosition);  
                         }
                        //Ist es ein Gegner
                        else if(spielfeld[neuePosition] / abs(spielfeld[neuePosition]) !=  Figur / abs(Figur)){
                            moeglichkeiten.push_back(neuePosition);

                        }
                       }  
                    } 
          
            //springt eins nach hinten und zwei nach links
            neuePosition = position+6;
  
                    // neue Position im Spielfeld?
                    if(neuePosition < 63 && neuePosition > 0) {

                       //Kein Sprung von links nach rechts
                       if(neuePosition%8 != 7 && neuePosition%8 != 6){

                         //Ist das Feld frei?
                         if(spielfeld[neuePosition] == 0){
                           moeglichkeiten.push_back(neuePosition);  
                         }
                        //Ist es ein Gegner
                        else if(spielfeld[neuePosition] / abs(spielfeld[neuePosition]) !=  Figur / abs(Figur)){
                            moeglichkeiten.push_back(neuePosition);

                        }
                       }  
                    }  
          
          
            //springt zwei nach hinten und eins nach links
            neuePosition = position+15;
  
                    // neue Position im Spielfeld?
                    if(neuePosition < 63 && neuePosition > 0) {

                       //Kein Sprung von links nach rechts
                       if(neuePosition%8 != 7){

                         //Ist das Feld frei?
                         if(spielfeld[neuePosition] == 0){
                           moeglichkeiten.push_back(neuePosition);  
                         }
                        //Ist es ein Gegner
                        else if(spielfeld[neuePosition] / abs(spielfeld[neuePosition]) !=  Figur / abs(Figur)){
                            moeglichkeiten.push_back(neuePosition);

                        }
                       }  
                    } 
          
          //springt eins nach hinten und zwei nach rechts
            neuePosition = position+10;
  
                    // neue Position im Spielfeld?
                    if(neuePosition<63 && neuePosition > 0) {

                       //Kein Sprung von rechts nach links
                       if(neuePosition%8 != 0 && neuePosition%8 != 1){

                         //Ist das Feld frei?
                         if(spielfeld[neuePosition] == 0){
                           moeglichkeiten.push_back(neuePosition);  
                         }
                        //Ist es ein Gegner
                        else if(spielfeld[neuePosition] / abs(spielfeld[neuePosition]) !=  Figur / abs(Figur)){
                            moeglichkeiten.push_back(neuePosition);

                        }
                       }  
                    } 
          
          
          //springt zwei nach hinten und eins nach rechts
            neuePosition = position+17;
  
                    // neue Position im Spielfeld?
                    if(neuePosition<63 && neuePosition > 0) {

                       //Kein Sprung von rechts nach links
                       if(neuePosition%8 != 0){

                         //Ist das Feld frei?
                         if(spielfeld[neuePosition] == 0){
                           moeglichkeiten.push_back(neuePosition);  
                         }
                        //Ist es ein Gegner
                        else if(spielfeld[neuePosition] / abs(spielfeld[neuePosition]) !=  Figur / abs(Figur)){
                            moeglichkeiten.push_back(neuePosition);

                        }
                       }  
                    }  
          
          
           return moeglichkeiten;
}
};
    
#endif