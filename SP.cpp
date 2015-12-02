/*  			 CODED BY:- VIBHANSHU GHILDIYAL
				    NISHANT YADAV
				    NIKITESH SINGH
			This code runs in turbo c++ dos box perfectly.
									  */
#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<math.h>
#include<iomanip.h>
#include<dos.h>
void chare();
void change();

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};
int checkwin();
void board();

void main()
{
clrscr();
char name[80],ch1,ch2,sign,ox[12],again;
int a,b,ang,l,br,shape,ht,tab,game,digit1,con[12],dec,n,i,k,j,count,x;
long double  rad,degree;
float sub,fahrenheit,celsius;


clrscr();

change();
cout<<"\n\n\t\t        Enter Your Name: ";
gets(name);
clrscr();
start:
clrscr();
cout<<"\n\n                           WELCOME TO STUDENT PORTAL                          ";
cout<<"\n                           _________________________";
cout<<"\n\t\t\t\t\t\tUser Logged in : "<<name;
cout<<"\n\n   START SCREEN:\n";
cout<<"\n A.CALCULATION:   "<<setw(18)<<"B.COMP.NUMBER SYSTEM: " <<setw(20)<<"C.CONVERSION:  "<<setw(20)<<"D.MY CORNER   ";
cout<<" -------------    --------------------      ---------------       ------------";
cout<<"\n 1.Calculator     "<<setw(18)<<"1.Binary to Decimal   "<<setw(20)<<"1.Cels. to Fahr."<<setw(20)<<" 1.Tic Tac To ";
cout<<"\n 2.Scien.Calcul.  "<<setw(18)<<"2.Octal to Decimal    "<<setw(20)<<"2.Fahr. to Cels."<<setw(20)<<" 2.Line Game  ";
cout<<"\n 3.Area Calcul.   "<<setw(18)<<"3.Decimal to Binary   "<<setw(20)<<"3.DATE->DAY     "<<setw(20)<<"              ";
cout<<"\n 4.Tables         "<<setw(18)<<"4.Decimal to Octal    "<<setw(20)<<"                "<<setw(20)<<"              ";
cout<<"\n 5.Factorial cal. "<<setw(18)<<"5.Decimal to Hexa     "<<setw(20)<<"                "<<setw(20)<<"              ";
cout<<"________________________________________________________________________________";
cout<<"\n\nEnter Your Choice(A/B/C/D): ";
cin>>ch1;
 switch(ch1)
 {
  case 'a':
  case 'A':
  clrscr();
  chare();
  cout<<"\nA.Calculation   \n------------- \n1.Calculator \n2.Trigonometric Calculator \n3.Area Calculator \n4.Tables \n5.Factorial Calculator";
  cout<<"\n Enter Your Choice(1/2/3/4/5) : ";
  cin>>ch2;
	switch(ch2)
	 {
	 case '1':
	 clrscr();
	 chare();
	 cout<<"\n\nEnter First Number  : ";
	 cin>>a;
	 cout<<"\nEnter Second Number : ";
	 cin>>b;
	 cout<<"\nEnter The Operation(+|-|*|/|%) : ";
	 cin>>sign;

		switch(sign)
		{
		 case '+':
		 cout<<"\nSolution = "<<a+b;
		 break;

		 case '-':
		 cout<<"\nSolution = "<<a-b;
		 break;

		 case '*':
		 cout<<"\nSolution = "<<a*b;
		 break;

		 case '/':
		 cout<<"\nSolution = "<<a/b;
		 break;

		 case '%':
		 cout<<"\nSolution = "<<a%b;
		 break;

		 default:
		 cout<<"\nOPERATION NOT AVAILABLE ";
		 }
		 break;

	 case '2':
	 clrscr();
	 chare();
	 cout<<"\nEnter the angle in degree:";
	 cin>>degree;
	 rad=((22*degree)/(7*180));
	 cout<<"\nChoose the angle\n1. for sine	2. for cosine\n3. for tangent	4. for cosecant\n5. for secant	6. for cotangent\n";
	 cout<<"\nEnter Your Choice: ";
	 cin>>ang;
	 cout<<endl;
	     switch(ang)
	       {
		case 1:
		cout<<"SIN ("<<degree<<") = "<<setprecision(3)<<sin(rad);
		break;

		case 2:
		cout<<"COS ("<<degree<<") = "<<setprecision(3)<<cos(rad);
		break;

		case 3:
		cout<<"TAN ("<<degree<<") = "<<setprecision(3)<<tan(rad);
		break;

		case 4:
		cout<<"COSEC ("<<degree<<") = "<<setprecision(3)<<(1/(sin(rad)));
		break;

		case 5:
		cout<<"SEC ("<<degree<<") = "<<setprecision(3)<<(1/(cos(rad)));
		break;

		case 6:
		cout<<"COT ("<<degree<<") = "<<setprecision(3)<<(1/(tan(rad)));
		break;

		default:
		cout<<"\nOPERATION AVAILABLE ONLY FOR SIX ANGLES";
	       }
		break;

	 case '3':
	 clrscr();
	 chare();
	 cout<<"\nAREA CALCULATOR: ";
	 cout<<"\n1.Square\n2.Rectangle\n3.Triangle\n4.Circle\n5.Rhombus\n6.Parallelogram";
	 cout<<"\n\nEnter Your Choice: ";
	 cin>>shape;
	 cout<<endl;
	     switch(shape)
	       {
		case 1:
		cout<<"\nEnter the Side of Square: ";
		cin>>l;
		cout<<"\n Area= "<<(l*l);
		break;

		case 2:
		cout<<"\nEnter the length of Rectangle: ";
		cin>>l;
		cout<<"\nEnter the breadth of Rectangle: ";
		cin>>br;
		cout<<"\n Area= "<<l*br;
		break;

		case 3:
		cout<< "\n enter the 1st side of Triangle: ";
		cin>>l;
		cout<< "\n enter the 2nd side of Triangle:: ";
		cin>>br;
		cout<< "\n enter the 3rd side of Triangle:";
		cin>>ht;
		sub=(l+br+ht)/2;
		cout<< "\n area of triangle is:" <<sqrt((sub-l)*(sub-br)*(sub-ht));
		break;

		case 4:
		cout<<"\n Radius of Circle: ";
		cin>>l;
		cout<<"\n Area:"<<3.14*l*l;
		break;

		case 5:
		cout<<"\nEnter the Base of Rhombus: ";
		cin>>l;
		cout<<"\nEnter the Height of Rhombus: ";
		cin>>br;
		cout<<"\n Area of Rhombus: "<<l*br;
		break;

		case 6:
		cout<<"\n\nEnter the Base of Parallelogram: ";
		cin>>l;
		cout<<"\nEnter the Height of Parallelogram: ";
		cin>>br;
		cout<<"\n Area of Parallelogram: "<<(l*br)/2;
		break;

		default:
		cout<<"\nOPERATION NOT AVAILABLE ";
	       }
		break;

	 case '4':
	 clrscr();
	 chare();
	 cout<<"\nEnter the Number to Find its Table: ";
	 cin>>tab;

	 for(int i=1;i<11;i++)
	 {
	 cout<<"\n\t\t\t ";
	 cout<<tab<<"x"<<i<<" = "<<tab*i;
	 }
	 break;

	 case '5':
	 clrscr();
	 chare();
	 int fact,factno;
	 fact=1;
	 cout<<"\nEnter the Number:";
	 cin>>factno;
	 for(i=1;i<=factno;i++)
	 fact*=i;
	 cout<<"\nFactorial of "<< factno <<" is:- "<< fact;
	 break;

	 default:
	 cout<<"\nINVALID CHOICE ";
	 }
	 break;


	case 'b':
	case 'B':
	clrscr();
	chare();
  cout<<"\n\n1.Binary to Decimal\n2.Octal to Decimal    \n3.Decimal to Binary\n4.Decimal to octadecimal\n5.Decimal to Hexadecimal";
  cout<<"\n\nEnter Your Choice : ";
  cin>>ch2;
	switch(ch2)
      {
	case '1':
	int x[100],count=0,sum=0,k=0;
	cout<<"\n Enter Binary Number: ";
	cin>>n;

	while(n>0)
	{
	x[count]=n%10;
	n/=10;
	count++;
	}
	for(j=0;j<count;j++)
	{
	sum=sum+x[j]*pow(2,k);
	k++;
	}
	cout<<"\n Decimal Number: "<<sum;
	break;



	case'2':
	cout<<"\n Enter Octal Number: ";
	cin>>n;
	k=0;
	count=0;
	sum=0;
	x[100];

	while(n>0)
	{
	x[count]=n%10;
	n/=10;
	count++;
	}
	for(j=0;j<count;j++)
	{
	sum=sum+x[j]*pow(8,k);
	k++;
	}
	cout<<"\n Decimal Number: "<<sum;

	break;


	case '3':
	clrscr();
	chare();

	cout<<"\nEnter any positive decimal number (maximum 32767): ";
	cin>>dec;

	if (dec<0)
	{  cout<<"\nNOT A POSITIVE NUMBER";
		break;
		}
	else
	{
	digit1=dec;                           //
					      //
	for(i=0;digit1>0;i++)                 //
	{ digit1/=2;                          //
	con[i]=(dec-(digit1*2));              //   LOGIC FOR BINARY
	dec=digit1;                           //
	}                                     //
	i--;                                  //
	cout<<"\nBinary equivalent:";         //
	while(i>=0)                           //
	{	cout<<con[i];                 //
	i--;                                  //
	}
	}
	break;

	case'4':
	clrscr();
	chare();

	cout<<"\nEnter any positive decimal number (maximum 32767): ";
	cin>>dec;

	if (dec<0)
       {    cout<<"\nNOT A POSITIVE NUMBER";
		break;
		}
	else
      {
	digit1=dec;
					      //
	for(i=0;digit1>0;i++)                 //
     { digit1/=8;                             //
       con[i]=(dec-(digit1*8));               //
       dec=digit1;                            //    LOGIC FOR OCTA-DECIMAL
       }                                      //
	i--;                                  //
       cout<<"\nOctadecimal equivalent:";     //
       while(i>=0)                            //
       {	cout<<con[i];                 //
	 i--;                                 //
	}                                     //
       }
	break;

	case '5':
	clrscr();
	chare();

	cout<<"\nEnter any positive decimal number (maximum 32767): ";
	cin>>dec;

	if (dec<0)
       {    cout<<"\nNOT A POSITIVE NUMBER";
		break;
		}
	else
      {
       digit1=dec;

   for(i=0;digit1>0;i++)                     //
     { digit1/=16;                           //
       con[i]=(dec-(digit1*16));             //
       dec=digit1;                           //
     }                                       //
   for(j=0;j<=15;j++)                        //
  {    if(con[j]==10)                        //
	   ox[j]='A';                        //
       else if(con[j]==11)                   //     LOGIC FOR HEXA-DECIMAL
	   ox[j]='B';                        //
       else if(con[j]==12)                   //
	   ox[j]='C';                        //
       else if(con[j]==13)                   //
	   ox[j]='D';                        //
       else if(con[j]==14)                   //
	   ox[j]='E';                        //
       else if(con[j]==15)                   //
	   ox[j]='F';                        //
       else if(con[j]==1)                    //
	   ox[j]='1';                        //
       else if(con[j]==2)                    //
	   ox[j]='2';                        //
       else if(con[j]==3)                    //
	   ox[j]='3';                        //
       else if(con[j]==4)                    //
	   ox[j]='4';                        //
       else if(con[j]==5)                    //
	   ox[j]='5';                        //
       else if(con[j]==6)                    //
	   ox[j]='6';                        //
       else if(con[j]==7)                    //
	   ox[j]='7';                        //
       else if(con[j]==8)                    //
	   ox[j]='8';                        //
       else if(con[j]==9)                    //
	   ox[j]='9';                        //
					     //
     }                                       //
					     //
	j-=13;				     //
	cout<<"\nHexadecimal equivalent:";   //
	while(j>=0)                  	     //
	{	 cout<<ox[j];                //
	  j--;
	}
       }

	break;


	default:
	cout<<"\nINVALID CHOICE ";
      }
      break;


  case 'c':
  case 'C':
  clrscr();
  chare();
  cout<<"\n1.Celsius to Fahrenheit\n2.Fahrenheit to Celsius\n3. Date->Day";
  cout<<"\n\nEnter Your Choice : ";
  cin>>ch2;
      switch(ch2)
      {
	case '1':
	cout<<"\n\t\tCelsius to Fahrenheit";
	cout<<"\n\nEnter the temperature in celsius: ";
	cin>>celsius;
	fahrenheit = (celsius * (9.0/5.0)) + 32;
	cout<<"\nThe converted temperature in fahrenheit is: "<< fahrenheit;
	break;

	case'2':
	cout<<"\n\t\tFahrenheit to Celsius";
	cout<<"\n\nEnter the temperature in fahrenheit: ";
	cin>>fahrenheit;
	celsius=(5.0/9.0)*(fahrenheit-32);
	cout<<"\nThe converted temperature in centigrade is:"<< celsius;
	break;

	case '3':

	{ int dd,mm,yy,ny,cc,dc,leap,com;
 cout<<"\n Enter Date as (dd mm yyyy): ";
 cin>>dd>>mm>>yy;
 cout<<"\n You Entered : "<<dd<<"-"<<mm<<"-"<<yy;
 ny=yy-1;
 cc=(ny/100%4)*100;
 dc=ny%100;

 leap=dc/4;
 com=dc-leap;

 if(cc==100)
 cc=5;
 if(cc==200)
 cc=3;
 if(cc==300)
 cc=1;

 dc=(leap*2+com)%7;

 // For Month

 int mon[12],j,sum=0,od;

 if(yy%100%4==0)
 mon[1]=1;
 else
 mon[1]=0;
 mon[0]=mon[2]=mon[4]=mon[6]=mon[7]=mon[9]=mon[11]=3;
 mon[3]=mon[5]=mon[8]=mon[10]=2;

 for(i=0;i<12;i++)
 {
  if(i+1==mm)
  {
   for(j=0;j<mm-1;j++)
    sum+=mon[j];
  }
 }
 od=(dd+sum+cc+dc)%7;

 if(od==0)
 cout<<"\n It is Sunday";
 if(od==1)
 cout<<"\n It is Monday";
 if(od==2)
 cout<<"\n It is Tuesday";
 if(od==3)
 cout<<"\n It is Wednesday";
 if(od==4)
 cout<<"\n It is Thursday";
 if(od==5)
 cout<<"\n It is Friday";
 if(od==6)
 cout<<"\n It is Saturday";
   break;
   }

	default:
	cout<<"\n INVALID CHOICE";
      }
      break;

 case 'D':
 case 'd':

  clrscr();
  chare();

  cout<<"\n\n 1.TIC-TOE\n 2.LINE GAME\n \n Enter your choice : ";
   cin>>game;
  switch(game)
  {
  case 1:
    clrscr();
  chare();

	int player = 1,i,choice;
	char mark;
	clrscr();
	do
	{
	board();
	player=(player%2)?1:2;
	cout << "Player " << player << ", enter a number:  ";
	cin >> choice;
	mark=(player == 1) ? 'X' : 'O';

	if (choice == 1 && square[1] == '1')
	square[1] = mark;

	else if (choice == 2 && square[2] == '2')
	square[2] = mark;

	else if (choice == 3 && square[3] == '3')
	square[3] = mark;

	else if (choice == 4 && square[4] == '4')
	square[4] = mark;

	else if (choice == 5 && square[5] == '5')
	square[5] = mark;

	else if (choice == 6 && square[6] == '6')
	square[6] = mark;

	else if (choice == 7 && square[7] == '7')
	square[7] = mark;

	else if (choice == 8 && square[8] == '8')
	square[8] = mark;

	else if (choice == 9 && square[9] == '9')
	square[9] = mark;

	else
		{
		cout<<"Invalid move ";
		player--;
		getch();
		}
		i=checkwin();
		player++;
		}while(i==-1);
		board();
	if(i==1)
		cout<<"==>\aPlayer "<<--player<<" win ";
	else
		cout<<"==>\aGame draw";


    break;

   case 2:
    clrscr();
    chare();
    cout<<"\n        LEVEL-1        ";
    cout<<"\n A  B  C  D  E  F  G  H";
    cout<<"\n |__|  |__|  |__|  |__|";
    cout<<"\n |  |__|  |__|  |__|  |";
    cout<<"\n |__|  |  |__|  |  |__|";
    cout<<"\n |  |__|  |  |__|  |__|";
    cout<<"\n |__|  |__|  |__|  |__|";
    cout<<"\n |  |__|  |__|  |__|  |";
    cout<<"\n |__|  |  |__|  |__|  |";
    cout<<"\n |  |  |__|  |__|  |__|";
    cout<<"\n |  |  |  |  |  |  |  |";
    cout<<"\n P  Q  R  S  T  U  V  W";

	 char ch[8][2];
	 int win=0;
	 cout<<"\n Enter where following will reach (from P to W): \n";
	 for(i=0;i<8;i++)
	 { char p=65+i;
	 cout<<"   "<<p<<" -> ";
	 cin>>ch[i][2];
	 i++;p++;
	 cout<<"   "<<p<<" -> ";
	 cin>>ch[i][2];
	 }
	 if(ch[0][2]=='Q'||ch[0][2]=='q')
	 {
	 win++;
	 }
	 if(ch[1][2]=='R'||ch[1][2]=='r')
	 {
	 win++;
	 }
	if(ch[2][2]=='P'||ch[2][2]=='p')
	{
	win++;
	}
	if(ch[3][2]=='S'||ch[3][2]=='s')
	{
	win++;
	}
	if(ch[4][2]=='V'||ch[4][2]=='v')
	  {
	win++;
	 }
	if(ch[5][2]=='U'||ch[5][2]=='u')
	{
	 win++;
	 }
	if(ch[6][2]=='W'||ch[6][2]=='w')
	 {
	win++;
	}
	if(ch[7][2]=='T'||ch[7][2]=='t')
	{
	  win++;
	}
	char ni;
	cout<<"\n Your score after this is : "<<win;
	cout<<"\n You made "<<8-win<<" mistakes ";
	if(win==8)
	{ cout<<"\n !!! Great Job !!! \n Do you want to try level-2 (y/n): ";
	cin>>ni;
	if(ni=='y'||ni=='Y')
    {
     clrscr();
     cout<<"\n        LEVEL-2        ";
     cout<<"\n A  B  C  D  E  F  G  H";
     cout<<"\n |  |  |__|  |__|  |__|";
     cout<<"\n |__|  |__|  |  |__|  |";
     cout<<"\n |  |__|  |__|  |__|  |";
     cout<<"\n |__|  |__|  |__|  |__|";
     cout<<"\n |  |__|  |__|  |__|  |";
     cout<<"\n |__|  |__|  |__|  |__|";
     cout<<"\n |__|  |__|  |  |__|  |";
     cout<<"\n |  |__|  |__|  |  |__|";
     cout<<"\n |  |  |  |  |  |  |  |";
     cout<<"\n P  Q  R  S  T  U  V  W";
	char mh[8][2];
	int j,scr=0;
	cout<<"\n Enter who will reach the following (from A to H): \n";
	for(j=0;j<8;j++)
	{ char p=80+j;
	 cout<<"   "<<p<<" -> ";
	 cin>>mh[j][2];
	 j++;p++;
	 cout<<"   "<<p<<" -> ";
	 cin>>mh[j][2];
	}
	if(mh[0][2]=='C'||mh[0][2]=='c')
	scr++;
	if(mh[1][2]=='B'||mh[1][2]=='b')
	scr++;
	if(mh[2][2]=='F'||mh[2][2]=='f')
	scr++;
	if(mh[3][2]=='G'||mh[3][2]=='g')
	scr++;
	if(mh[4][2]=='E'||mh[4][2]=='e')
	scr++;
	if(mh[5][2]=='H'||mh[5][2]=='h')
	scr++;
	if(mh[6][2]=='D'||mh[6][2]=='d')
	scr++;
	if(mh[7][2]=='A'||mh[7][2]=='a')
	scr++;
	char nik;
	cout<<"\n Your score after this is : "<<scr;
	cout<<"\n You made "<<8-scr<<" mistakes ";
       if(scr==8)
	cout<<"\n !!! Great Job !!!";
       else
	cout<<"\n(Try scoring 8 points)";

    }
   else
    cout<<"\n You decided to quit ";
   }
 else
  cout<<"\n (Try scoring 8 points to go to next level)";
 break;

   default:
       cout<<"\n\t\tONLY TWO GAMES ARE AVAILABLE";
   }

    break;
    default:
    cout<<"\nINVALID CHOICE ";

  }


choice:
cout<<"\n\n '"<<name<<"'- Do you want to try again \n(Y/N):";
cin>>again;

switch(again)
{
  case 'Y':
  case 'y':
     goto start;

  case 'N':
  case 'n':
     exit(0);
	break;
  default:
{     cout<<"\nEnter only Y/N ";
	 goto choice;
   }
}
getch();
}



void chare()
{
cout<<"\n\n_____________________________ Student Portal ___________________________________";
}
void change()
{
cout<<"\n\n\n\n\n_______________________________________________________________________________";
delay(500);
cout<<"\n ____    __    ____  _______  __        ______    ______    ___  ___   _______  ";
cout<<" \\   \\  /  \\  /   / |   ____||  |      /  ____|  /  __  \\  |   \\/   | |   ____| ";
delay(500);
cout<<"  \\   \\/    \\/   /  |  |__   |  |     |  |      |  |  |  | |  \\  /  | |  |__    ";
delay(500);
cout<<"   \\            /   |   __|  |  |     |  |      |  |  |  | |  |\\/|  | |   __|   ";
delay(500);
cout<<"    \\    /\\    /    |  |____ |  |____ |  |____  |  |__|  | |  |  |  | |  |____  ";
delay(500);
cout<<"     \\__/  \\__/     |_______||_______| \\______|  \\______/  |__|  |__| |_______| ";
delay(500);
cout<<"________________________________________________________________________________";
}


int checkwin()
{
	if (square[1] == square[2] && square[2] == square[3])
		return 1;
	else if (square[4] == square[5] && square[5] == square[6])
		return 1;
	else if (square[7] == square[8] && square[8] == square[9])
		return 1;
	else if (square[1] == square[4] && square[4] == square[7])
		return 1;
	else if (square[2] == square[5] && square[5] == square[8])
		return 1;
	else if (square[3] == square[6] && square[6] == square[9])
		return 1;
	else if (square[1] == square[5] && square[5] == square[9])
		return 1;
	else if (square[3] == square[5] && square[5] == square[7])
		return 1;
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
		 square[4] != '4' && square[5] != '5' && square[6] != '6' &&
	    square[7] != '7' && square[8] != '8' && square[9] != '9')
		return 0;
	else
		return -1;
}


void board()
{
	clrscr();
	cout << "\n\n\tTic Tac Toe\n\n";
	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
	cout << "     |     |     " << endl << endl;
}
