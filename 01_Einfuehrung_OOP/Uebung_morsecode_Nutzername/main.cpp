#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    const char alphaNum[37] =
    {
        ' ','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','1','2','3','4','5','6','7','8','9','0'
    };
    
    const string code[37] =
    {
        "    ",  // space
        " .-",   //a
        " -...", //b
        " -.-.", //c
        " -..",  //d
        " .",    //e
        " ..-.", //f
        " --.",  //g
        " ....", //h
        " ..",   //i
        " .---", //j
        " -.-",  //k
        " .-..", //l
        " --",   //m
        " -.",   //n
        " ---",  //o
        " .--.", //p
        " --.-", //q
        " .-.",  //r
        " ...",  //s
        " -",    //t
        " ..-",  //u
        " ...-", //v
        " .--",  //w
        " -..-", //x
        " -.--", //y
        " --..", //z
        
        " .----", //1
        " ..---", //2
        " ...--", //3
        " ....-", //4
        " .....", //5
        " -....", //6
        " --...", //7
        " ---..", //8
        " ----.", //9
        " -----", //0

    };
    
    
    string input;
    string output;
    
    cout << "Enter text: " << endl;
    getline(cin, input);
    
    transform(input.begin(), input.end(), input.begin(), ::toupper);
    
    for (unsigned int i = 0; i < input.size(); i++)
    {
        for (unsigned short j = 0; j < 37; j++)
        {
         if (input[i] == alphaNum[j])
         {
             output += code[j];
             output += "   ";
             
           break;
         }
       }
     }
     
     cout << "Morse Code:" << endl << output;
     int a;
     cin >> a;
     return 0;
}






