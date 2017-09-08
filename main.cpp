#include <iostream>
#include <string.h>
#include <algorithm>
#include <string>


using namespace std;



int main()
{



     string s=" 1 \t | 2 \t | 3 \n ------------------------ \n 4 \t |  5 \t | 6 \n ------------------------ \n 7 \t |  8 \t | 9";
     char p1,p2,p3,p4,p5,p6,p7,p8,p9;
     int iskoristeni[9]={0,0,0,0,0,0,0,0,0};

    cout<<s<<endl;
     while(true){
     label:
     int i=0;
     char poljex;
     char poljeo;
     cin>>poljex;
     cin>>poljeo;
     int x=int(poljex)-48;
     int o=int(poljeo)-48;

        for(i;i<9;i++){
        if (iskoristeni[i]==x || iskoristeni[i]==o){
            cout<<"Unijeli ste vec koristeno polje, ponovo unesite polja!"<<endl;
            goto label;


        }

        }


     switch(int(poljex)-48){
     case 1:
         p1='x';
         iskoristeni[0]=1;
         break;
     case 2:
         p2='x';
         iskoristeni[1]=2;
         break;
     case 3:
         p3='x';
         iskoristeni[2]=3;
         break;
     case 4:
         p4='x';
         iskoristeni[3]=4;
         break;
     case 5:
         p5='x';
         iskoristeni[4]=5;
         break;
     case 6:
         p6='x';
         iskoristeni[5]=6;
         break;
     case 7:
         p7='x';
         iskoristeni[6]=7;
         break;
     case 8:
         p8='x';
         iskoristeni[7]=8;
         break;
     case 9:
         p9='x';
         iskoristeni[8]=9;
         break;
    }
    switch(int(poljeo)-48){
     case 1:
         p1='o';
         iskoristeni[0]=1;
         break;
     case 2:
         p2='o';
         iskoristeni[1]=2;
         break;
     case 3:
         p3='o';
         iskoristeni[2]=3;
         break;
     case 4:
         p4='o';
         iskoristeni[3]=4;
         break;
     case 5:
         p5='o';
         iskoristeni[4]=5;
         break;
     case 6:
         p6='o';
         iskoristeni[5]=6;
         break;
     case 7:
         p7='o';
         iskoristeni[6]=7;
         break;
     case 8:
         p8='o';
         iskoristeni[7]=8;
         break;
     case 9:
         p9='o';
         iskoristeni[8]=9;
         break;
    }



      std::replace( s.begin(), s.end(), poljex, 'X');
      std::replace( s.begin(), s.end(), poljeo, 'O');
      cout<<s<<endl;


      if((p1&p2&p3)=='x' || (p1&p4&p7)=='x' || (p1&p5&p9)=='x' || (p4&p5&p6)=='x' || (p7&p8&p9)=='x' || (p3&p5&p7)=='x' || (p2&p5&p8)=='x' || (p3&p6&p9)=='x'){
        cout<<"X je pobjednik"<<endl;
        break;
      }else if((p1&p2&p3)=='o' || (p1&p4&p7)=='o' || (p1&p5&p9)=='o' || (p4&p5&p6)=='o' || (p7&p8&p9)=='o' || (p3&p5&p7)=='o' || (p2&p5&p8)=='o' || (p3&p6&p9)=='o'){
        cout<<"O je pobjednik"<<endl;
        break;

      }else if((p1&p2&p3&p4&p5&p6&p7&p8&p9)!=NULL){
        cout<<"Izjednaceno je"<<endl;
        break;
      }


     }


    return 0;
}
