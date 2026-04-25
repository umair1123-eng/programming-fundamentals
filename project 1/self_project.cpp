#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    // data structure 
    int total_users=100; // total size of users
    int index=0; // index for storing user data

    // available jobs data structure
    string total_jobs[5]={"c++ ", "Java", "Python", "Web development", "Mobile app development"};


    string nameArr[total_users];
    string usernameArr[total_users];
    string passwordArr[total_users];
    string skillsArr[total_users];
    int yearsArr[total_users];

    // for admin login
    string adminUsername = "admin";
    string adminPassword= "1234";

    // for freelancer login 
    string freelancerUsernameArr[total_users];
    string freelancerPasswordArr[total_users];
    string roleArr[total_users];

    // main header

    cout<<"=============================================================================="<<endl;
    cout<<"                         FREELANCE JOB MANAGEMENT SYSTEM                      "<<endl;
    cout<<"=============================================================================="<<endl;
    cout<<"                           DEVOLOPED BY : UMAIR KHAN                          "<<endl;
    cout<<"\n";
    cout<<"                         CONNECTING CLIENTS AND TALENTS                       "<<endl;
    cout<<"press any key to continue ! \n";

    getch(); // wait for user input
    system("cls"); // clear ther screen 

    while(true){
        // menu bar 

        cout<<"==============================================================================="<<endl;
        cout<<"                                 MAIN MENU :                                   "<<endl;
        cout<<"==============================================================================="<<endl;
        cout<<"1. admin login \n";
        cout<<"2. client login \n";
        cout<<"3. freelancer login \n";
        cout<<"4. register new account \n";
        cout<<"5. veiw available jobs \n";
        cout<<"6. search Jobs \n";
        cout<<"7. view top freelancers \n";
        cout<<"8. Help / instructions \n";
        cout<<"9. About Systems \n";
        cout<<"10. exit ! \n";

        // choosing options
    
        cout<<" choose any option : ";
        int userOption;
        cin>> userOption;
    
        // conditions for options 

        // admin options...........
    
        if(userOption==1){
            system("cls");
            cout<<"======= ADMIN LOGIN =======\n";
            cout<<"Enter Admin username: ";
            cin>> adminUsername;
            cout<<"Enter Admin password: ";
            cin>> adminPassword;
            if(adminUsername=="admin" && adminPassword=="1234"){
                cout<<"login successful ! \n";
                cout<<"==========Admin Panel==========\n";
                cout<<"1. view all clients \n";
                cout<<"2. view all freelancers \n";
                cout<<"3. view all jobs \n";
                cout<<"4. manage users \n";
                cout<<"5. manage jobs \n";
                cout<<"6. view system analytics \n";
                cout<<"7. logout \n";
                cout<<"choose any option : ";
                int userOption;
                cin>> userOption;
                if(userOption==1){
                    system("cls");
                    cout<<"All Clients : \n";
                    for(int i=0; i<index; i++){
                        cout<<i+1<<". "<< nameArr[i] <<" - "<< usernameArr[i] <<" - "<< skillsArr[i] <<" - "<< yearsArr[i] <<" years of experience \n";
                    }
                }
                else if(userOption==2){
                    system("cls");
                    cout<<"All Freelancers : \n";
                    for(int i=0; i<index; i++){
                        cout<<i+1<<". "<< nameArr[i] <<" - "<< usernameArr[i] <<" - "<< skillsArr[i] <<" - "<< yearsArr[i] <<" years of experience \n";
                    }
                }
                else if(userOption==3){
                    system("cls");
                    cout<<"All Jobs : \n";
                    for(int i=0; i<5; i++){
                        cout<<i+1<<". "<< total_jobs[i] <<endl;
                    }
                }
                else if(userOption==4){
                    system("cls");
                    cout<<"Manage Users : \n";
                    cout<<"1. view all users \n";
                    cout<<"2. delete user \n";
                    cout<<"3. update user \n";
                    cout<<"choose any option : ";
                    int manageOption;
                    cin>> manageOption;
                    if(manageOption==1){
                        system("cls");
                        cout<<"All Users : \n";
                        for(int i=0; i<index; i++){
                            cout<<i+1<<". "<< nameArr[i] <<" - "<< usernameArr[i] <<" - "<< skillsArr[i] <<" - "<< yearsArr[i] <<" years of experience \n";
                        }
                    }
                    else if(manageOption==2){
                        system("cls");
                        cout<<"Delete User : \n";
                        cout<<"Enter username to delete : ";
                        string delUsername;
                        cin>> delUsername;
                        for(int i=0; i<index; i++){
                            if(usernameArr[i]== delUsername){
                                for(int j=i; j<index-1; j++){
                                    nameArr[j]= nameArr[j+1];
                                    usernameArr[j]= usernameArr[j+1];
                                    passwordArr[j]= passwordArr[j+1];
                                    skillsArr[j]= skillsArr[j+1];
                                    yearsArr[j]= yearsArr[j+1];
                                }
                                index--; // decrease index after deletion
                                cout<<"User deleted successfully ! \n";
                                break;
                            }
                        }
                    }
                    else if(manageOption==3){
                        system("cls");
                        cout<<"Update User : \n";
                        cout<<"Enter username to update : ";
                        string updUsername;
                        cin>> updUsername;
                        for(int i=0; i<index; i++){
                            if(usernameArr[i]== updUsername){
                                cout<<"Enter new name: ";
                                cin>> nameArr[i];
                                cout<<"Enter new password: ";
                                cin>> passwordArr[i];
                                cout<<"Enter new skills: ";
                                cin>> skillsArr[i];
                                cout<<"Enter new years of experience: ";
                                cin>> yearsArr[i];
                                cout<<"User updated successfully ! \n";
                                break;
                            }
                        }
                    }
                }
                    
            }
            else{
                cout<<"Invalid admin username or password  ! \n";
            }


            getch();
        }
        else if(userOption==2){
            system("cls");
            cout<<"======= CLIENT LOGIN =======\n";
            cout<<"Enter Client username: ";
            string username;
            cin>> username;
            cout<<"Enter Client password: ";
            string password;
            cin>> password;
            usernameArr[index]= username;
            passwordArr[index]= password;

            // chec all users .....
            for(int i=0; i<index; i++ ){
                if(username==usernameArr[i] && password== passwordArr[i]){
                    cout<<"Login successful!\n";
                    cout<<"========== CLIENT PANEL ==========\n";
                    cout<<"1. Post a job\n";
                    cout<<"2. View posted jobs\n";
                    cout<<"3. Manage jobs\n";
                    cout<<"4. View applications\n";
                    cout<<"5. Logout\n";
                    break;
                }
            }
            
            getch();
        }
        else if(userOption==3){
            system("cls");
            cout<<"=====freelancer Login=====\n";
            cout<<"Enter Freelancer name: ";
            string freelancerUsername;
            cin>> freelancerUsername;
            cout<<"Enter Freelancer password: ";
            string freelancerPassword;
            cin>> freelancerPassword;
            cout<<"Role ";
            string role;
            cin>> role;
            cout<<"Years of experience : ";
            int years;
            cin>> years;
            freelancerUsernameArr[index]= freelancerUsername;
            freelancerPasswordArr[index]= freelancerPassword;
            roleArr[index]= role;
            yearsArr[index]= years;

            cout<<"Login Succesfully -_-";
            cout<<"========== FREELANCER PANEL ==========\n";
            cout<<"1. View Available Jobs\n";
            cout<<"2. Apply for Job\n";
            cout<<"3. View My Applications\n";
            cout<<"4. View Profile\n";
            cout<<"5. Logout\n";
            cout<<"choose any option : ";
            int freelancerOption;
            cin>> freelancerOption;
            if(freelancerOption==1){
                system("cls");
                cout<<"Available Jobs : \n";
                for(int i=0; i<5; i++){
                    cout<<i+1<<". "<<total_jobs[i] <<endl;
                }
            }
            else if(freelancerOption==2){
                system("cls");
                cout<<"Apply for Job : \n";
                cout<<"Enter job name to apply : ";
                string jobName;
                cin>> jobName;
                cout<<"You applied for "<< jobName <<" successfully ! \n";
            }
            else if(freelancerOption==3){
                system("cls");
                cout<<"My Applications : \n";
                cout<<"You have applied for following jobs : \n";
                cout<<"1. "<< total_jobs[0] <<endl;
                cout<<"2. "<< total_jobs[1] <<endl;
            }
            else if(freelancerOption==4){
                system("cls");
                cout<<"My Profile : \n";
                cout<<"Name : "<< freelancerUsername <<endl;
                cout<<"Role : "<< role <<endl;
                cout<<"Years of experience : "<< years <<endl;
            }
            else if(freelancerOption==5){
                system("cls");
                cout<<"Logging out...\n";
            }


            getch();
        }
        else if(userOption==4){
            system("cls");
            cout<<"========= REGISTER ACCOUNT ======== \n\n";
            cout<<"1. register as client \n";
            cout<<"2. register as freelancer \n";
            cout<<" choose any option : ";
            int registerOption;
            cin>> registerOption;
    
    
            if(registerOption==1){
                system("cls");
                cout<<"========= CLIENT REGISTRATION ======== \n\n";
                cout<<"Enter your name: ";
                string name;
                cin>>name;
                cout<<"Enter your username: ";
                string username;
                cin>>username;
                cout<<"Enter your password: (Password must be strong) :";
                string password;
                cin>>password;
                cout<<"Enter your skills: ";
                string skills;
                cin>>skills;
                cout<<"Enter your years of experience: ";
                int years;
                cin>>years;

                nameArr[index]= name;
                usernameArr[index]= username;
                passwordArr[index]= password;
                skillsArr[index]= skills;
                yearsArr[index]= years;
                index++; // increment index for next user  
                
                getch();
            }
            else if(registerOption==2){
                system("cls");
                cout<<"========= FREELANCER REGISTRATION ======== \n\n";
                cout<<"Enter your name: ";
                string name;
                cin>>name;
                cout<<"Enter your username: ";
                string username;
                cin>>username;
                cout<<"Enter your password: ";
                string password;
                cin>>password;
                cout<<"Enter your skills: ";
                string skills;
                cin>>skills;
                cout<<"Enter your years of experience: ";
                int years;
                cin>>years;
                nameArr[index]= name;
                usernameArr[index]= username;
                passwordArr[index]= password;
                skillsArr[index]= skills;
                yearsArr[index]= years;
                index++; // increment index for next user
                
                
                getch();
            }
            cout<<"Account created successfully ! \n";
            cout<<"now login to continue ! \n";
            cout<<"press any key to continue ...";
            break;
            
            
        }
        else if(userOption==5){
            system("cls");
            cout<<"Available Jobs : \n";
            for(int i=0; i<5; i++){
                cout<<i+1<<". "<<total_jobs[i] <<endl;
            }
            break;
        }
        else if(userOption==6){
            system("cls");
            cout<<"Search Jobs : \n";
            cout<<"Enter keyword to search : ";
            string keyword;
            cin>> keyword;
            cout<<"Search results for '"<< keyword <<"': \n";
            for(int i=0; i<5; i++){
                if(total_jobs[i] == keyword){
                    cout<<total_jobs[i]<<" available here"<<endl;
                }
            }
            break;
        }
        else{
            cout<<"Invalid option ! Please choose again \n";
        }
    }

    

}