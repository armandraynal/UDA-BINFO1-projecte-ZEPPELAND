int periode=20000;// période entre chaque début d'impulsion en microsecondes
int pinServo=8; // variable pour le pin connecté à la commande du servo
int a = 0;

void setup() {
  pinMode(pinServo,OUTPUT);// on prépare le pin en mode OUTPUT
  digitalWrite(pinServo,LOW); // on l'initialise à l'état bas
}

void setAngle(int input) {
 int duree=0;
 if(input==0) {
  a = 0;//Position du servo moteur 0, droite gauche ?
  duree=map(a,0,180,1000,2000);// on transforme l'angle en microsecondes et on stocke dans la variable duree
  digitalWrite(pinServo,LOW);//on met le pin à l'état bas
}

if(input==1) {
  a = 90;//Position du servo moteur 1, milieu théoriquement
  duree=map(a,0,180,1000,2000);// on transforme l'angle en microsecondes et on stocke dans la variable duree
  digitalWrite(pinServo,LOW);//on met le pin à l'état bas
}

if(input==2) {
  a = 180;//Position 2 du servo moteur, droite gauche ?

  duree=map(a,0,180, 1000,2000);// on transforme l'angle en microsecondes et on stocke dans la variable duree
  digitalWrite(pinServo,LOW);//on met le pin à l'état bas
}
  
  for (int t=0;t<400;t++){
    digitalWrite(pinServo,HIGH);// on envoie l'impulsion
    delayMicroseconds(duree); // pendant la bonne durée
    digitalWrite(pinServo,LOW); // on stoppe l'impulsion
    delayMicroseconds(periode-duree); // on attend le temps restant pour atteindre la période
}
if(input==3) {
  a = -40;//Position 2 du servo moteur, droite gauche ?

  duree=map(a,0,180, 1000,2000);// on transforme l'angle en microsecondes et on stocke dans la variable duree
  digitalWrite(pinServo,LOW);//on met le pin à l'état bas
}


}
void loop() {
  //ici doit se trouver la réception du signal de l'utilisateur et son annalyse pour déterminer l'angle
  int input=0;
  setAngle(input);
  input=2;
  setAngle(input);
  input=1;
  setAngle(input);
  input=3;
  setAngle(input);

  
}
