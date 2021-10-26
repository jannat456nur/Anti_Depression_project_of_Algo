#include <bits/stdc++.h>
#include<conio.h>
using namespace std;
int solve1();
int  solve2();
void quiz();
 
 
//  Registration
class Register
{
public:
    string username, password;
};
class Login
{
public:
    string inpUsername, inpPassword;
};
 
 
//  Quiz
int Guess;
int Total;
 
class Question
{
private:
    string Question_Text;
    string Answer_1;
    string Answer_2;
    string Answer_3;
    string Answer_4;
 
    int Correct_Answer;
    int Question_Score;
 
public:
    void setValues(string, string, string, string, string, int, int);
    void askQuestion();
};
 
void Question :: setValues(string q, string a1, string a2, string a3, string a4,int CA, int Sc)
{
    Question_Text = q;
    Answer_1 = a1;
    Answer_2 = a2;
    Answer_3 = a3;
    Answer_4 = a4;
    Correct_Answer = CA;
    Question_Score = Sc;
}
 
void Question :: askQuestion()
{
    cout<<endl;
    cout<<Question_Text<<endl;
    cout<<"1. "<<Answer_1<<endl;
    cout<<"2. "<<Answer_2<<endl;
    cout<<"3. "<<Answer_3<<endl;
    cout<<"4. "<<Answer_4<<endl;
    cout<<endl;
 
    cout<<"What's Your Answer?"<<endl;
    cin>>Guess;
    if(Guess==Correct_Answer)
    {
        cout<<endl;
        cout<<"Great!!! You Are Correct."<<endl;
        Total = Total+Question_Score;
        cout<<"Score: "<<Question_Score<<" Out of "<<Question_Score<<"!"<<endl;
        cout<<endl;
    }
    else
    {
        cout<<endl;
        cout<<"Oh No!!! You Are Wrong."<<endl;
        cout<<"Score: 0"<<" Out of "<<Question_Score<<"!"<<endl;
        cout<<"The Correct Answer is "<<Correct_Answer<<"."<<endl;
        cout<<endl;
    }
}
 
 
int main()
{
    int n;
    cout<<"****"<<endl;
    cout<<"*                                            *"<<endl;
    cout<<"*       *   WELCOME TO THE Project  *        *"<<endl;
    cout<<"*      -------------------------------       *"<<endl;
    cout<<"*                                            *"<<endl;
    cout<<"*                                            *"<<endl;
    cout<<"*                                            *"<<endl;
    cout<<"*              Anti Depression               *"<<endl;
    cout<<"*                                            *"<<endl;
    cout<<"****"<<endl;
 
    cout<<endl;
    Register newUser;
    cout <<"Welcome to Happy Pill \nPlease register";
    cout <<"\n Enter your username:";
    cin  >>newUser.username;
    cout <<"\n Enter your password:";
    cin >>newUser.password;
    cout <<"Successfully registered.";
 
    Login newLogin;
    cout <<"\n Username:";
    cin >>newLogin.inpUsername;
    cout <<"\nPassword:";
    cin >>newLogin.inpPassword;
    if (newLogin.inpUsername == newUser.username && newLogin.inpPassword == newUser.password)
    {
        cout << "\n Successfully Logged in 🙂";
    }
    else
    {
        cout<<"Login failed 🙁 \n Please Try Again";
    }
 
    cout<< endl;
    cout<<"\nIf you going to the next page please Press 1\n";
    cin>>n;
 
    switch(n)
    {
    case 1:
    {
        system("CLS");
        solve1();
        solve2();
    }
    break;
    default:
        cout<<"Wrong press, Please  press 1\n";
    }
 
    return 0;
 
}
 
 
int solve1()
{
    cout<<"Press Enter To Start The PROJECt..."<<endl;
 
    cin.get();
 
    string name,age,inst,gender;
 
    cout << "Enter information," << endl;
 
    cout << "Enter name: ";
    cin >> name;
 
    cout << "Enter Age: ";
    cin >> age;
 
    cout << "Institue: ";
    cin >> inst;
 
    cout <<"Gender [If male enter (m),If female (f)]: ";
    cin>> gender;
 
    cout << "\nDisplaying Information," << endl;
    cout << "Name: " << name << endl;
 
    cout << "Age: " << age << endl;
 
    if(age>="13" && age<="19")
    {
        cout<<"You are a teenager"<<endl;
    }
    cout << "Institue: " << inst<< endl;
 
    if(gender == "m")
    {
        cout << "Gender: Male"<<endl;
    }
    else if (gender == "f")
    {
        cout << "Gender: Female"<<endl;
    }
}
 
int solve2()
{
 
 
    string respond;
 
    int sym1 = 0,sym2  = 0,sym3 = 0,sym4 = 0,sym5 = 0,sym6 = 0,sym7 = 0,sym8 = 0,sym9 = 0,sym10 = 0,sym11 = 0,sym12 = 0;
 
    cout<< "Have you Increased appetite and weight gain"<<"?yes/no"<<endl;
    cin>>respond;
 
    if(respond == "yes")
    {
        sym1++;
 
    }
 
 
    cout<< "Have you Disordered eating and dark mood"<<"yes/no"<<endl;
    cin>>respond;
 
    if (respond == "yes")
    {
        sym2++;
 
    }
 
    cout<< "Have you Frequent crying, Sadness and hopelessness"<<"yes/no"<<endl;
    cin>>respond;
 
    if(respond == "yes")
    {
        sym3++;
 
    }
 
    cout<< "Have you Anxiety Appetite changes"<<"yes/no"<<endl;
    cin>>respond;
 
    if(respond == "yes")
    {
        sym4++;
 
    }
 
    cout<< "Have you Deep sadness or hopelessness"<<"yes/no"<<endl;
    cin>>respond;
 
    if(respond == "yes")
    {
        sym5++;
 
    }
 
    cout<< "Have you Low self-esteem or feelings of inadequacy "<<"yes/no"<<endl;
    cin>>respond;
 
    if(respond == "yes")
    {
        sym6++;
 
    }
    cout<< "Have you Difficulty functioning at school or work "<<"yes/no"<<endl;
    cin>>respond;
 
    if(respond == "yes")
    {
        sym7++;
 
    }
 
    cout<< "Have you Lack of interest in things you once enjoyed"<<"yes/no"<<endl;
    cin>>respond;
 
    if(respond == "yes")
    {
        sym8++;
 
    }
 
    cout<< "Have you Loss of interest in formerly enjoyable activities"<<"yes/no"<<endl;
    cin>>respond;
 
    if(respond == "yes")
    {
        sym9++;
 
    }
    cout<< "Have you Suicidal thoughts, Irritability,Decreased activity"<<"yes/no"<<endl;
    cin>>respond;
 
    if(respond == "yes")
    {
        sym10++;
 
    }
 
    cout<< "Have you constant worry and anxiety ,overeating"<<"yes/no"<<endl;
    cin>>respond;
 
    if(respond == "yes")
    {
        sym11++;
 
    }
    cout<< "Have you thoughts of death, self-harm, or suicide "<<"yes/no"<<endl;
    cin>>respond;
 
    if(respond == "yes")
    {
        sym12++;
 
    }
 
 
 
    if(sym1 == 1 && sym2  == 1 )
    {
        cout<<"Atypical depression "<<endl;
    }
    else if (sym3 == 1 && sym4  == 1 )
    {
        cout<<"   Situational depression "<<endl;
    }
    else if(sym5 == 1 && sym6  == 1 && sym7 == 1 && sym8 == 1)
    {
        cout<<"  Persistent depression "<<endl;
    }
    else if(sym9 == 1 && sym10  == 1 )
    {
        cout<<" Manic depression "<<endl;
    }
    else if(sym11 == 1 && sym12  == 1 )
    {
        cout<<" Major depression "<<endl;
    }
 
    else
    {
        cout << "Invalid case number " << endl;
    }
 
    int n;
    cout<<"\n To see the cure from drepression please Press 1\n";
    cin>>n;
 
 
    cout<<"\t\t\t\tTHERE ARE 6 TYPES OF DEPRESSION?\n";
 
    cout<<"1###  Atypical depression  ###\n";
    cout<<"#Symptoms of atypical depression# \n";
 
    cout<<"a:-Increased appetite and weight gain\n";
    cout<<"b:-Disordered eating and dark mood\n";
    cout<<"#cure of Atypical depression #"<<endl;
 
    cout << "\n*maintaing sleeping hours\n\n*Avoiding too much food intake just before sleeping\n\n*Limiting alcohol intake\n" << endl;
 
 
    cout<<"2###  Situational depression  ###\n";
    cout<<"#Symptoms of  situational depression#\n";
 
    cout<<"c:- Frequent crying, Sadness and hopelessness\n";
    cout<<"d:- Anxiety Appetite changes \n\n";
 
    cout<<"#cure of Situational depression #"<<endl;
 
    cout << "\n*Avoid unhealthy thoughts\n\nMaintain your sleep\n\n*Keep on doing recreational activities\n\n*Avoid unhealthy drugs\n\n" << endl;
 
 
    cout<<"3###  Persistent depression  ###\n";
    cout<<"#Symptoms of persistent depression#\n";
 
    cout<<"e:-  Deep sadness or hopelessness\n";
    cout<<"f:-Low self-esteem or feelings of inadequacy\n";
    cout<<"g:- Difficulty functioning at school or work \n";
    cout<<"h:-Lack of interest in things you once enjoyed\n\n";
 
    cout<<"#cure of Persistent depression #"<<endl;
 
    cout << "\n*Start visiting to new places\n\nKeep on being busy\n\n*Maintain your medications" <<endl;
 
 
    cout<<"4###  Manic depression  ###\n";
    cout<<"#Symptoms of manic depression#\n";
 
    cout<<"i:- Loss of interest in formerly enjoyable activities\n";
    cout<<"j:- Suicidal thoughts, Irritability,Decreased activity\n\n";
 
    cout<<"#cure of manic depression #"<<endl;
 
    cout << "\n*Meditation and relaxation can work like medicine in this case\n\nHang on with your loved or closed ones\n\n*consult a good doctor to treat you\n\n" << endl;
 
 
    cout<<"5###   Major depression  ###\n";
    cout<<"#Symptoms of major depression#\n";
 
    cout<<"k:- constant worry and anxiety ,overeating\n";
    cout<<"l:-thoughts of death, self-harm, or suicide\n\n";
 
    cout<<"#cure of Major depression #"<<endl;
 
    cout << "\n*Meditation and relaxation can work like medicine in this case\n\nHang on with your loved or closed ones\n\n*consult a good doctor to treat you\n\n" << endl;
 
 
 
 
    cout<<"Press 1 to participate in a quiz.\n";
    int response;
 
    while(cin >> response)
    {
        if (response == 1)
        {
            system("CLS");
            quiz();
            break;
        }
        else
        {
            cout << "Uh oh! You pressed the wrong key! Press 1 to participate in a quiz." << endl;
        }
    }
}
 
void quiz()
{
    cout<<"**********************************************"<<endl;
    cout<<"*                                            *"<<endl;
    cout<<"*       *WELCOME TO THE QUIZ SECTION*        *"<<endl;
    cout<<"*      -------------------------------       *"<<endl;
    cout<<"*                                            *"<<endl;
    cout<<"*                    By                      *"<<endl;
    cout<<"*                                            *"<<endl;
    cout<<"*                QUARENTEAM                  *"<<endl;
    cout<<"*                                            *"<<endl;
    cout<<"**********************************************"<<endl;
 
    cout<<endl;
 
    cout<<"Press ENTER To Start The QUIZ..."<<endl;
    cin.get();
 
    string Name;
    int Age;
 
    cout<<"What's Your Name?"<<endl;
    cin>>Name;
    cout<<endl;
 
    cout<<"How Old Are You?"<<endl;
    cin>>Age;
    cout<<endl;
 
    string Respond;
    cout<<"Are You Ready To Take The QUIZ "<<Name<<"? YES/NO."<<"If yes press Y or press N."<<endl;
 
    cin >> Respond;
 
    if(Respond == "Y")
    {
        cout<<endl;
        cout<<"Good Luck :)"<<endl;
        cout<<endl;
    }
    else
    {
        cout<<"Ok,Good Bye :("<<endl;
        return;
    }
 
 
  Question q1;
  Question q2;
  Question q3;
  Question q4;
  Question q5;
  Question q6;
  Question q7;
  Question q8;
  Question q9;
  Question q10;
 
   q1.setValues("* You can catch me but cannot throw me. What am I?",
                "Air",
                "Fire",
                "Cold",
                "Your hand",
                3,
                1);
    q2.setValues("* I am clean when I am black I am dirty when I am white. What am I?",
                "Chalkboard",
                "Water",
                "A preacher",
                "Book",
                1,
                1);
    q3.setValues("* What is at the end of a rainbow?",
                "Camera",
                "Air",
                "The letter W",
                "A penny",
                3,
                1);
    q4.setValues("* What you can hold in your left hand never in your right hand?",
                "Umbrella",
                "The letter E",
                "Your right elbow",
                "Your right hand",
                4,
                1);
    q5.setValues("* I can shave everyday but my bread will stay the same. What I am?",
                "Bread",
                "A bar of soap",
                "A barber",
                "Honey",
                3,
                1);
    q6.setValues("* First you eat me then you get eaten. What am I?",
                "Snake",
                "A fish hook",
                "An elephant",
                "Doctor",
                2,
                1);
 
    q7.setValues("* What has ten letters and starts with gas. What is it?",
                "Aeroplan",
                "kingfisher ",
                "A fire ball",
                "Automobile",
                4,
                1);
    q8.setValues("* I fly without wings. What am I?",
                "Air",
                "Time",
                "Plane",
                "Paper",
                2,
                1);
    q9.setValues("* What kind of room has no doors or windows?",
                "Mushroom",
                "Washroom",
                "Hotel room",
                "A single room",
                1,
                1);
    q10.setValues("* Which is correct to say?",
                "The yolk of the egg is white.",
                "The yolk of the egg is yellow.",
                "Egg yolks are usually yellow.",
                "None",
                3,
                1);
 
    q1.askQuestion();
    q2.askQuestion();
    q3.askQuestion();
    q4.askQuestion();
    q5.askQuestion();
    q6.askQuestion();
    q7.askQuestion();
    q8.askQuestion();
    q9.askQuestion();
    q10.askQuestion();
 
    cout<<"Your Total Score is "<<Total<<" Out of 10"<<endl;
    cout<<endl;
 
    if(Total >= 7)
    {
        cout<<"Great!You Passed The QUIZ!"<<endl;
        cout<<endl;
 
        cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
        cout<<"%                                               %"<<endl;
        cout<<"%              #CONGRATULATIONS#                %"<<endl;
        cout<<"%                                               %"<<endl;
        cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
    }
    else
    {
        cout<<"Sorry :("<<endl;
        cout<<endl;
        cout<<"Better Luck Next Time :)"<<endl;
    }
}
 
 
 
 