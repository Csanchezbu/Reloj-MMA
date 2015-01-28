int pausa=100000; // Variable que define el intervalo
                // de tiempo entre cada digito
int A = 7;
int B = 8;
int C = 9;
int D = 3;      Asignamos el pin al que esta conectado cada segmento del 7 segmentos
int E = 2;
int F = 4;
int G = 5;
int punto = 6; 
 
void setup()
{
  pinMode(2, OUTPUT);  // Asignación de las salidas digitales
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}
 
void display (int i)
// Funcion del display
{
    switch (i){
          case 0:
          {
            digitalWrite (A,1);   
            digitalWrite (B,1);   
            digitalWrite (C,1);
            digitalWrite (D,1);
            digitalWrite (E,1);
            digitalWrite (F,1);
            digitalWrite (G,0);
            break;
            //a,b,c,d,e,f,g
          }
        case 1:
          {
            digitalWrite (A,0);   
            digitalWrite (B,1);   
            digitalWrite (C,1);
            digitalWrite (D,0);
            digitalWrite (E,0);
            digitalWrite (F,0);
            digitalWrite (G,0);
            break;
            //b,c
          }
        case 2:
        {
            digitalWrite (A,1);   
            digitalWrite (B,1);   
            digitalWrite (C,0);
            digitalWrite (D,1);
            digitalWrite (E,1);
            digitalWrite (F,0);
            digitalWrite (G,0);
            break;
         //a,b,g,e,d 
        }
         case 3:
        {
            digitalWrite (A,1);   
            digitalWrite (B,1);   
            digitalWrite (C,1);
            digitalWrite (D,1);
            digitalWrite (E,0);
            digitalWrite (F,0);
            digitalWrite (G,1);
            break;
         //a,b,c,g,d 
        }
        case 4:
        {
            digitalWrite (A,0);   
            digitalWrite (B,1);   
            digitalWrite (C,1);
            digitalWrite (D,0);
            digitalWrite (E,0);
            digitalWrite (F,1);
            digitalWrite (G,1);
            break;
         //f,g,b,c 
        } 
        case 5:
        {
            digitalWrite (A,1);   
            digitalWrite (B,0);   
            digitalWrite (C,1);
            digitalWrite (D,1);
            digitalWrite (E,0);
            digitalWrite (F,1);
            digitalWrite (G,1);
            break;
         //a,f,g,c,d 
        } 
        case 6:
        {
            digitalWrite (A,1);   
            digitalWrite (B,0);   
            digitalWrite (C,1);
            digitalWrite (D,1);
            digitalWrite (E,1);
            digitalWrite (F,1);
            digitalWrite (G,1);
            break;
         //a,f,g,c,d,e
        }
        case 7:
        {
            digitalWrite (A,1);   
            digitalWrite (B,1);   
            digitalWrite (C,1);
            digitalWrite (D,0);
            digitalWrite (E,0);
            digitalWrite (F,0);
            digitalWrite (G,0);
            break;
         //a,b,c
        } 
        case 8:
        {
            digitalWrite (A,1);   
            digitalWrite (B,1);   
            digitalWrite (C,1);
            digitalWrite (D,1);
            digitalWrite (E,1);
            digitalWrite (F,1);
            digitalWrite (G,1);
            break;
         //a,b,c,d,e,f,g 
        }
        case 9:
        {
            digitalWrite (A,1);   
            digitalWrite (B,1);   
            digitalWrite (C,1);
            digitalWrite (D,0);
            digitalWrite (E,0);
            digitalWrite (F,1);
            digitalWrite (G,1);
            break;
         //a,f,g,b,c
        } 
        default:
        {
            digitalWrite (A,0);   
            digitalWrite (B,0);   
            digitalWrite (C,0);
            digitalWrite (D,0);
            digitalWrite (E,0);
            digitalWrite (F,0);
            digitalWrite (G,0);
            break;
        }
      }
}

void loop() //Funcion principal

{  
         display (0); //escribe 0     //aquí me ecribe un 9 en vez de un 0!?!?!
         delay(pausa);                //si le pongo la orden manualmente (con los digital write) si me escribe un 0 
////     display (1); //escribe 1     //tampoco es por no ponerle default al switch 
////     delay(pausa);
////     display (2); //escribe 2
////     delay(pausa);
////     display (3); //escribe 3
////     delay(pausa);
////     display (4); //escribe 4
////     delay(pausa);
////     display (5); //escribe 5
////     delay(pausa);
////     display (6); //escribe 6
////     delay(pausa);
////     display (7); //escribe 7
////     delay(pausa);
////     display (8); //escribe 8
////     delay(pausa);
////     display (9); //escribe 9
////     delay(pausa);

}
