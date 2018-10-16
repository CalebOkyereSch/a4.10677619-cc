#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;
int main(){
     typedef struct {
                    int idNumber[5];
                    string name[5];
                    int age[5];
                    string gender[5];
                    int score[5];
                    string grade[5];
                    } student;
                   string data=" ";
                  student student1;
                   ofstream  output;
                   
                   
                 int fend,i,j;
                 
                 output.open("assigment1.txt");
        cout<<"WELCOME TO ALL YOUR INFORMATION"<<endl;

        for(i=0;i<5;i++){
           cout<<"Please enter your ID" ;
            cin>>student1.idNumber[i];
             cout<<endl;
           cout<<"Please enter your name :";
          cin>>student1.name[i];
           cout<<endl;
           cout<<"Please enter your age :";
           cin>>student1.age[i];
           cout<<endl;
           cout<<"Please choose the gender yo belong to"<<endl;
           cout<<"1. Male  \t\t 2.Female"<<endl;
          cin>>fend;
     if(fend==1){
      student1.gender[i]="Male";
       }
     else if (fend==2){
     student1.gender[i]="Female";
     }
     else{cout<<" wrong input, go and start all over again"<<endl;
      }
        cout<<endl;
      cout<<"Please enter your score : ";
      cin>>student1.score[i];
     cout<<endl;
     switch(student1.score[i]){
            case 80 ... 100 :
                  student1.grade[i]="A";
                          break;
           case 70 ... 79:
             student1.grade[i]="B";
                  break;
          case 60 ... 69 :
              student1.grade[i]="C";
                    break;
          case 50 ... 59:
             student1.grade[i]="D";
             break;
        case 40 ... 49 :
              student1.grade[i]="E";
         break;
       case 0 ... 39 :
              student1.grade[i]="F";
                  break;
        default:
        cout<<"The score you entered cannot be found"<<endl;
        }
        }
        output<<"ID NUMBER"<<setw(13)<<"NAME"<<setw(13)<<"AGE"<<setw(13)<<"GENDER"<<setw(13)<<"SCORE"<<setw(13)<<"GRADE"<<endl;
       output<<endl;
       output<<"***************************************************************************************************************************"<<endl;
     for(j=0;j<5;j++){
      output<<student1.idNumber[j]<<setw(13)<<student1.name[j]<<setw(13)<<student1.age[j]<<setw(13)<< student1.gender[j]<<setw(13)<<student1.score[j]<<setw(13)<<student1.grade[j]<<endl;
      output<<"*****************************************************************************************************************************"<<endl;
     }
     output<<setfill('#');
return 0;
}
