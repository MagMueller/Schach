#include <string>
#include <vector>
#ifndef Koenig_HPP_
#define Koenig_HPP_
using namespace std;
class Koenig{
    
      public:

      Koenig(){ 
        }
    
    
    auto moeglicheZuege (int position, int spielfeld[64]){
          
          int neuePosition;
          int Figur = spielfeld[position];
          vector<int> moeglichkeiten;
          
          if( !(Figur == -5 | Figur == 5) ) {
                moeglichkeiten.push_back(0);
                return moeglichkeiten;
            }
         
            // Der König läuft nach vorne
                    neuePosition = position-8;

                   //neuePosition im Spielfeld?                             
                   if(neuePosition<63 && neuePosition > 0) {
 
                   //ein freies Feld oder ein Gegner?
                   if(spielfeld[neuePosition] == 0){
                              moeglichkeiten.push_back(neuePosition);    
                   } 
                  else if(spielfeld[position]/abs(spielfeld[position]) != spielfeld[neuePosition] / abs(spielfeld[neuePosition])){
                              moeglichkeiten.push_back(neuePosition);    
                       } 
                    
                    }

             // Der König läuft nach hinten
                    neuePosition = position+8;

                    //neuePosition im Spielfeld?                             
                    if(neuePosition<63 && neuePosition > 0) {
 
                       //Ein Gegner oder ein freies Feld?
                       if(spielfeld[neuePosition] == 0){
                              moeglichkeiten.push_back(neuePosition);    
                       }  
                       else if(spielfeld[position]/abs(spielfeld[position]) != spielfeld[neuePosition] / abs(spielfeld[neuePosition])){
                              moeglichkeiten.push_back(neuePosition);    
                       } 
                    }
        
             // Der König läuft nach rechts
                    neuePosition = position+1;

                    //neuePosition im Spielfeld?                             
                    if(neuePosition<63 && neuePosition > 0) {
                        
                       //Kein Sprung von rechts nach links?
                       if(neuePosition%8 != 0){
                         
                          //Ein Gegner oder ein freies Feld?
                          if(spielfeld[neuePosition] == 0){
                              moeglichkeiten.push_back(neuePosition);    
                          }
                         else if(spielfeld[position]/abs(spielfeld[position]) != spielfeld[neuePosition] / abs(spielfeld[neuePosition])){
                              moeglichkeiten.push_back(neuePosition);    
                       }   
                           
                       }
                    }
                                                   
                                                   
            // Der König läuft nach links
                    neuePosition = position-1;

                    //neuePosition im Spielfeld?                             
                    if(neuePosition<63 && neuePosition > 0) {
                        
                       //Kein Sprung von links nach rechts?
                       if(neuePosition%8 != 7){
                         
                          //Ein Gegner oder ein freies Feld?
                          if(spielfeld[neuePosition] == 0){
                              moeglichkeiten.push_back(neuePosition);    
                          }
                          else if(spielfeld[position]/abs(spielfeld[position]) != spielfeld[neuePosition] / abs(spielfeld[neuePosition])){
                              moeglichkeiten.push_back(neuePosition);    
                       }  
                           
                       }
                    }
        
                                                   
            // Der König geht nach rechts-vorne
                    neuePosition = position-7;
                     
                    //neuePosition im Spielfeld?                             
                    if(neuePosition<63 && neuePosition > 0) {
                        
                       //Kein Sprung von rechts nach links?
                       if(neuePosition%8 != 0){
                         
                          //Ein Gegner oder ein freies Feld?
                          if(spielfeld[neuePosition] == 0){
                              moeglichkeiten.push_back(neuePosition);    
                          }
                          else if(spielfeld[position]/abs(spielfeld[position]) != spielfeld[neuePosition] / abs(spielfeld[neuePosition])){
                              moeglichkeiten.push_back(neuePosition);    
                       }  
                           
                       }
                    }
                                                   
             // Der König geht nach links-vorne
                    neuePosition = position-9;
                     
                    //neuePosition im Spielfeld?                             
                    if(neuePosition<63 && neuePosition > 0) {
                        
                       //Kein Sprung von links nach rechts?
                       if(neuePosition%8 != 7){
                         
                          //Ein Gegner oder ein freies Feld?
                          if(spielfeld[neuePosition] == 0){ 
                              moeglichkeiten.push_back(neuePosition);    
                          }
                         else if(spielfeld[position]/abs(spielfeld[position]) != spielfeld[neuePosition] / abs(spielfeld[neuePosition])){
                              moeglichkeiten.push_back(neuePosition);    
                       }   
                           
                       }
                    }
            
             // Der König geht nach rechts-hinten
                    neuePosition = position+9;
                     
                    //neuePosition im Spielfeld?                             
                    if(neuePosition<63 && neuePosition > 0) {
                        
                       //Kein Sprung von rechts nach links?
                       if(neuePosition%8 != 0){
                         
                          //Ein Gegner oder ein freies Feld?
                          if(spielfeld[neuePosition] == 0){ 
                              moeglichkeiten.push_back(neuePosition);    
                          }
                         else if(spielfeld[position]/abs(spielfeld[position]) != spielfeld[neuePosition] / abs(spielfeld[neuePosition])){
                              moeglichkeiten.push_back(neuePosition);    
                       }  
                           
                       }
                    }    
                                                   
                                           
             // Der König geht nach links-hinten
                    neuePosition = position+7;
                     
                    //neuePosition im Spielfeld?                             
                    if(neuePosition<63 && neuePosition > 0) {
                        
                       //Kein Sprung von links nach rechts?
                       if(neuePosition%8 != 7){
                         
                          //Ein Gegner oder ein freies Feld?
                          if(spielfeld[neuePosition] == 0){ 
                              moeglichkeiten.push_back(neuePosition);         
                          }
                         else if(spielfeld[position]/abs(spielfeld[position]) != spielfeld[neuePosition] / abs(spielfeld[neuePosition])){
                              moeglichkeiten.push_back(neuePosition);    
                       }   
                           
                       }
                    }    
        
        
        
        
        // weißer König Rochade?
         if (spielfeld[position] == -5 && position == 4){

                 // Rochade rechts
                 if (spielfeld[position + 1] == 0 && spielfeld[position+2] == 0 && spielfeld[position+3] == -1){  
                   moeglichkeiten.push_back(position + 2);  
                 }

                 // Rochade links
                  if (spielfeld[position-1] == 0 && spielfeld[position-2] == 0 && spielfeld[position-3] == 0 && spielfeld[position-4] == -1){  
                    moeglichkeiten.push_back( position - 2); 
                 }   
         }

        
        
        
        // schwarzer König Rochade?
        if (spielfeld[position] == 5 && position == 60){
             
                 // Rochade rechts
                 if (spielfeld[position+1] == 0 && spielfeld[position+2] == 0 && spielfeld[position+3] == 1){  
                   moeglichkeiten.push_back(position + 2);    
                 }

                 // Rochade links
                  if (spielfeld[position-1] == 0 && spielfeld[position-2] == 0 && spielfeld[position-3] == 0 && spielfeld[position-4] == 1){  
                   moeglichkeiten.push_back( position - 2);  
                 }     
                 
          }  
                                                   
             return moeglichkeiten;
    }
      

};    










/*    //Überprüfen des Extrafalls Rochade;    
    auto moeglicheRochaden(int position, int spielfeld[64]){

         int Rochade[2];

         //weißer König
         if (spielfeld[position] == -5 && position == 4){

             // Rochade rechts
             if (spielfeld[position + 1] == 0 && spielfeld[position+2] == 0 && spielfeld[position+3] == -1){  
               Rochade[0] = position + 2;   
             }

             // Rochade links
              if (spielfeld[position-1] == 0 && spielfeld[position-2] == 0 && spielfeld[position-3] == 0 && spielfeld[position-4] == -1){  
                Rochade[1] = position - 2; 
             }   
         }


        if (spielfeld[position] == 5 && position == 60){
             
             // Rochade rechts
             if (spielfeld[position+1] == 0 && spielfeld[position+2] == 0 && spielfeld[position+3] == -1){  
               Rochade[0] = Position + 2;    
             }

             // Rochade links
              if (spielfeld[position-1] == 0 && spielfeld[position-2] == 0 && spielfeld[position-3] == 0 && spielfeld[position-4] == -1){  
               Rochade[1] = position - 2;  
             }     
                 
        }  
        
        return Rochade;
       }    
       
    */
#endif