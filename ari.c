#include <cs50.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

string ari(string s)
{
    string ret; //returning a string of required grade of reader
    //initialisation of counts
    int cnt_let=0; //letter count
    int cnt_word=1; //word count is calculated by no.of spaces but no. of words =no.of spaces +1
    int cnt_sent=0; //sentence count
    for(int i=0;i<strlen(s);i++)
    {
        //checking no.of characters
        if(isalpha(s[i]))
        {
            cnt_let+=1;
        }
        //checking no.of words
        if(s[i]==' ')
        {
            cnt_word+=1;
        }
        //checking no. of sentences
        if(s[i]=='.'||s[i]=='!'||s[i]=='?')
        {
            cnt_sent+=1;
        }

    }
    /*         number of characters             number of words
        4.71 * --------------------  + 0.5 *  -------------------    - 21.43
                  number of words              number of sentences  
    */
    float cw=((float)cnt_let/cnt_word)*4.71;
    float ws=((float)cnt_word/cnt_sent)*0.5;
    float read=cw+ws-21.43;
    int ari= (int)ceil(read);//assigning ARI
    // setting return string as per ARI
    if (ari ==1 )
    {
        ret="Kindergarten";
    }
    else if(ari ==2 )
    {
        ret="First/Second Grade";
    }
    else if(ari ==3 )
    {
        ret="Third Grade";
    }
    else if(ari ==4 )
    {
        ret="Fourth Grade";
    }
    else if(ari ==5 )
    {
        ret="Fifth Grade";
    }
    else if(ari ==6 )
    {
        ret="Sixth Grade";
    }
    else if(ari ==7 )
    {
        ret="Seventh Grade";
    }
    else if(ari ==8 )
    {
        ret="Eighth Grade";
    }
    else if(ari ==9 )
    {
        ret="Ninth Grade";
    }
    else if(ari ==10 )
    {
        ret="Tenth Grade";
    }
    else if(ari ==11 )
    {
        ret="Eleventh Grade";
    }
    else if(ari ==12 )
    {
        ret="Twelfth Grade";
    }
    else if(ari ==13 )
    {
        ret="College student";
    }
    else if(ari ==14 )
    {
        ret="Professor"; 
    }
    return ret;
}
