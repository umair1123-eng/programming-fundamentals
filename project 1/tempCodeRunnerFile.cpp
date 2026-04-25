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
            