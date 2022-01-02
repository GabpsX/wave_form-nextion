//incluir a biblioteca -> Nextion 
/*
  wave_form
  
  Gabriel ps
  GabpsX -> https://github.com/GabpsX
*/



#include "Nextion.h" 

//id pagina, id componente, nome componente 

NexWaveform s0 = NexWaveform(0, 1, "s0");
 
class variables {
 public:
      //float pot;
      double pot;
};

void setup() { 

  Serial.begin(9600); 

  nexInit(); 

} 

 
void loop() { 
  variables self;
  Serial.print("lendo var: "); 

  self.pot = analogRead(A0); 

  Serial.println(self.pot); 

//1 ciclo 

  s0.addValue(0, self.pot );// channel 0

//2 ciclo 

  s0.addValue(1, self.pot );// channel 1

//3 ciclo  

  s0.addValue(2, self.pot );// channel 2

//4 ciclo  

  s0.addValue(3, self.pot );// channel 3

  delay(100); 

}  
