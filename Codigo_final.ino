int BotaoAbre = 7;//Define botão para abrir a porta no pino digital 7
int BotaoFecha = 6;//Define botão para abrir a porta no pino digital 6

int ReleGeral = 11;//Define o rele para passar corrente no pino digital 11
int ReleAbre = 12;//Define o rele que controla para a porta abrir no pino digital 12
int ReleFecha = 13;//Define o rele para fechar a porta no pino digital 13

int EstadoBotaoAbre = 0;//Variável responsável por armazenar o estado do botão (ligado/desligado)
int EstadoBotaoFecha = 0;//Variável responsável por armazenar o estado do botão (ligado/desligado)

void setup(){
  pinMode(ReleGeral , OUTPUT);//Define o para passar corrente (pino 11) como saída
  pinMode(ReleAbre , OUTPUT);//Define o rele que controla para a porta abrir (pino 12) como saída
  pinMode(ReleFecha , OUTPUT);//Define o rele para fechar a porta (pino 13) como saída
    
  pinMode(BotaoAbre , INPUT);//Define o botão para fechar a porta (pino 7) como entrada
  pinMode(BotaoFecha , INPUT);//Define bo botão para fechar a porta (pino 6) como entrada
}

void loop(){
  EstadoBotaoAbre = digitalRead(BotaoAbre);//Lê o valor do borão para abrir e armazena em EstadoBotaoAbre
  EstadoBotaoFecha = digitalRead(BotaoFecha);//Lê o valor do borão para fechar e armazena em EstadoBotaoFecha
  
  if (EstadoBotaoAbre == HIGH) {//Se o botão para abrir a porta for igual a HIGH ou 1
    digitalWrite(ReleGeral , HIGH);//Define rele geral como HIGH, ligando o rele
    digitalWrite(ReleAbre , HIGH);//Define o rele para abrir como HIGH, ligando o rele
    delay(100);//Intervalo de 100 milissegundos
  }else { //Senão = estadoButton for igual a LOW ou 0
    digitalWrite(ReleGeral, LOW);//Define o rele geral como LOW, desligando o rele
    digitalWrite(ReleAbre, LOW);//Define o rele para abrir a porta como LOW, desligando o rele
  }


  if (EstadoBotaoFecha == HIGH) {//Se estadoButton for igual a HIGH ou 1
    digitalWrite(ReleGeral , HIGH);//Define ledPin como HIGH, ligando o LED
    digitalWrite(ReleFecha , HIGH);//Define ledPin como HIGH, ligando o LED
    delay(100);//Intervalo de 100 milissegundos
  }else { //Senão = estadoButton for igual a LOW ou 0
    digitalWrite(ReleGeral, LOW);//Define ledPin como LOW, desligando o LED
    digitalWrite(ReleFecha, LOW);//Define ledPin como LOW, desligando o LED
 }
}
