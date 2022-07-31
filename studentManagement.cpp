#include<iostream>
#include<ctime>
#include<array>
using namespace std;

class student{

    
    int choice;
    char ans='y';


    int flag=0;
    string name="";
    int roll=0;
    string stream="";
    int marks[5];


    public:


    // Display function for displaying all options along with their operations
    void display(){

        cout<<"\tPlease select the desired option as per your requirement: "<<endl<<"1. Add new student"<<endl<<"2. Display Student"<<endl<<"3. Remove the student"<<endl<<"4. Edit the student"<<endl<<"5. Exit"<<endl;

        
        while(ans=='y' || ans=='Y'){

            cout<<"\nYour Choice is: ";
            cin>>choice;

        switch(choice){
            case 1: 
                add();
                retry();
                
                break;

            case 2:
                disp();
                retry();
                break;
            case 3: 
                remove();
                retry();
                break;
            case 4:
                edit();
                retry();
                break;
            case 5:
                exit(0);
                
            default:
                cout<<"You entered a wrong input :( "<<endl;
                cout<<" Wanna try again(Y or N): ";
                cin>>ans;

        }
        
        }
    
    }

    // ADD function: To add the records
    void add(){
        cout<<"Enter the student name: ";
        cin>>name;
        cout<<endl;

        cout<<"Enter the student roll number: ";
        cin>>roll;
        cout<<endl;

        cout<<"Enter the stream of the student: ";
        cin>>stream;
        cout<<endl;

        for (int i = 0; i < 5; i++)
        {
            cout<<"Enter the marks of the student in subject "<<i+1<<" :  ";
            cin>>marks[i];
            cout<<endl;
        }


        flag=1;
        
    }



    // DISP function: To display any existing record
    void disp(){
        if(flag==1){
            cout<<"INFO FOUND !!!!!"<<endl;
            cout<<" Name: "<<name<<"\n\n";
            cout<<" Roll: "<<roll<<"\n\n";
            cout<<" Stream: "<<stream<<"\n\n";
            cout<<" Marks Details: ""\n\n";

        for (int i = 0; i < 5; i++)
        {
            cout<<"Marks in subject "<<i+1<<" :  ";
            cout<<marks[i];
            cout<<endl;
        }


        }
        else
            cout<<"No such data present to display !!!! ";
    }



    // REMOVE function: To remove any existing record
    void remove(){
        if(flag==0){
            cout<<"Already empty data !!!";
        }

        else{
            name="";
            roll=0;
            stream="";
            flag=0;
            cout<<"EXISTING ENTRY DELETED"<<endl;     
        }
        
        
    }


    // EDIT function: To edit any existing record
    void edit(){
        if(flag==0){
            cout<<"No data is present to update !!";
        }

        else{

            int check=0,checkMarks=0;
            cout<<"\tPlease select the desired change as per your requirement: "<<endl<<"1. Name"<<endl<<"2. Roll"<<endl<<"3. Stream"<<endl<<"4. Marks "<<endl;
            cout<<"Your choice is: ";
            cin>>check;
            cout<<endl;
            switch(check){
                case 1:
                    cout<<"Enter the new name: ";
                    cin>>name;
                    cout<<"\n\nUPDATED SUCCESSFULLY !!!! \n\n";
                    break;
                case 2:
                    cout<<"Enter the new roll: ";
                    cin>>roll;
                    cout<<"\n\nUPDATED SUCCESSFULLY !!!! \n\n";
                    break;
                case 3:
                    cout<<"Enter the new stream: ";
                    cin>>stream;
                    cout<<"\n\nUPDATED SUCCESSFULLY !!!! \n\n";
                    break;
                case 4:
                    cout<<"Enter the subject marks you want to change: ";
                    cin>>checkMarks;
                    switch(checkMarks){
                        case 1:
                            cout<<"Enter the new marks for subject 1: ";
                            cin>>marks[0];
                            break;
                        case 2:
                            cout<<"Enter the new marks for subject 2: ";
                            cin>>marks[1];
                            break;
                        case 3:
                            cout<<"Enter the new marks for subject 3: ";
                            cin>>marks[2];
                            break;
                        case 4:
                            cout<<"Enter the new marks for subject 4: ";
                            cin>>marks[3];
                            break;
                        case 5:
                            cout<<"Enter the new marks for subject 5: ";
                            cin>>marks[4];
                            break;
                        default:
                            cout<<"Please enter a valid choice !!"<<endl;
                            
                    }
                    cout<<"\n\nUPDATED SUCCESSFULLY !!!! \n\n";
                    break;
                default:
                    cout<<"Please enter the correct option :("<<endl;
                }

        }

    }   












    // Retry function to do more operations after the current operation
    void retry(){
        cout<<"\n\nWant to do some more operations (Y/N  or y/n):  ";
        cin>>ans;

    }

    
};

void design(){
        cout<<"_______________________________________________________________________________"<<endl;
        cout<<"    			STUDENT MANAGEMENT SOFTWARE"<<endl;
        cout<<"    				Welcome USER!"<<endl;
        cout<<"_______________________________________________________________________________"<<endl;
}




int main(){

    // copyright 
    cout<<"\n\n                                           @sayan6823  [Sayan Chattopadhyay]\n\n\n\n";
    
    // Print the Date and Time
    time_t  t = time(NULL);
    tm * tPtr = localtime(&t);
    cout<<"Date:"<<tPtr->tm_mday<<"/"<<tPtr->tm_mon+1<<"/"<<tPtr->tm_year+1900<<endl;
    cout<<"Time:"<<tPtr->tm_hour<<"/"<<tPtr->tm_min<<"/"<<tPtr->tm_sec<<endl;

    // Basic design to display the project name and details    
    design();
    
    //Main Code
    student s;
    s.display();


    

return 0;
}