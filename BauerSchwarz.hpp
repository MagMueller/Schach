#include <string>
#include <vector>

#ifndef BAUERSCHWARZ_HPP_
#define BAUERSCHWARZ_HPP_
using namespace std;

class BauerSchwarz{
    
      public:
       
      //Image BauerSchwarzBild;

      BauerSchwarz(){ 
        }
         
    
      
auto moeglicheZuege (int position, int spielfeld[64]){
          
          int neuePosition;
          int Figur = spielfeld[position];
          vector<int> moeglichkeiten;
          
          if( !(Figur == -6 | Figur == 6) ) {
                moeglichkeiten.push_back(0);
                return moeglichkeiten;
            }
          
            //Der Bauer läuft zwei nach vorne
            neuePosition = position-16;
            
            if(position < 56 && position > 47){
               if(neuePosition<63 && neuePosition > 0){
                  if(spielfeld[position-8] == 0 && spielfeld[neuePosition] == 0){
                        moeglichkeiten.push_back(neuePosition);
               }
             }
            }       
    
    
            // Der Bauer läuft nach vorne
            neuePosition = position-8;

            if((neuePosition<63 && neuePosition > 0) && spielfeld[neuePosition] == 0){
                        moeglichkeiten.push_back(neuePosition);
             }
                      
            
            // Der Bauer schlägt seitlich nach rechts-vorne
            neuePosition = position-7;
          
            if(neuePosition<63 && neuePosition > 0) {
               if(neuePosition%8 != 0){
                if(spielfeld[neuePosition] != 0){
                 if(spielfeld[neuePosition] / abs(spielfeld[neuePosition]) !=  Figur / abs(Figur)){

            
                   moeglichkeiten.push_back(neuePosition);    
                 }
                }
               }
            }
            
            // Der Bauer schlägt seitlich nach links-vorne
    
            neuePosition = position-9;
          
            if(neuePosition<63 && neuePosition > 0){
              if(neuePosition%8 != 7){
                if(spielfeld[neuePosition] != 0){
                 if(spielfeld[neuePosition] / abs(spielfeld[neuePosition]) !=  Figur / abs(Figur)){

                   moeglichkeiten.push_back(neuePosition);    
                }
                }
            }
            }
            
         
           return moeglichkeiten;
          
      }
};

#endif